# Preliminary Makefile attempt

# Compiling variables
DEVICE = atmega168
PROGRAMMER = usbtiny
CLK_SPEED = 8000000
CC = avr-gcc
OBCPY = avr-objcopy

SRC = main.c
OUTPUT = main.hex

# The building will be done in build folder
WORKDIR = ./build

all: $(OUTPUT)

main.o:$(SRC)
	$(CC) -Wall -Os -mmcu=$(DEVICE) -o main.o -c $(SRC)
	rm -rf $(WORKDIR)
	mkdir $(WORKDIR)	 
	mv main.o $(WORKDIR)/main.o

main.elf:main.o
	$(CC) -Wall -Os -mmcu=$(DEVICE) -o $(WORKDIR)/main.elf $(WORKDIR)/main.o
	
$(OUTPUT):main.elf
	$(OBCPY) -O ihex $(WORKDIR)/main.elf $(WORKDIR)/$(OUTPUT)
	
clean:
	rm -rf *.o *.elf *.hex $(WORKDIR)
	
# Change the next few lines if you know fuses.
# Otherwise, check out fuse calculator www.engbedded.com/fusecalc

LFUSE = 0x62
HFUSE = 0xdf
EFUSE = 0xf9

# Tell make that flash is not some output. This is done by using PHONY
.PHONY: flash
flash:
	avrdude -c $(PROGRAMMER) -p $(DEVICE) -U flash:w:$(WORKDIR)/$(OUTPUT)

# make fuse will program the fuses. 
.PHONY: fuse
fuse:
	avrdude -c $(PROGRAMMER) -p $(DEVICE) -U hfuse:w:$(HFUSE):m -U lfuse:w:$(LFUSE):m -U efuse:w:$(EFUSE):m

