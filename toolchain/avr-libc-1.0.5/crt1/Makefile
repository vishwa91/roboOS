# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.4-p5 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999, 2001 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

# Copyright (c) 2002, Reinhard Jessich  <reinhard.jessich@telering.at>
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# * Redistributions of source code must retain the above copyright
#   notice, this list of conditions and the following disclaimer.
# * Redistributions in binary form must reproduce the above copyright
#   notice, this list of conditions and the following disclaimer in
#   the documentation and/or other materials provided with the
#   distribution.
# * Neither the name of the copyright holders nor the names of
#   contributors may be used to endorse or promote products derived
#   from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.

# content of AVR_CRT_xxx is determined by configure according to the multilib
# subdir (see acinclude.m4 in top directory)


SHELL = /bin/sh

srcdir = .
top_srcdir = ..
prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/avr-libc
pkglibdir = $(libdir)/avr-libc
pkgincludedir = $(includedir)/avr-libc

top_builddir = ..

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL} $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_alias = i686-pc-linux-gnu
build_triplet = i686-pc-linux-gnu
host_alias = avr
host_triplet = avr-unknown-none
target_alias = avr
target_triplet = avr-unknown-none
AR = avr-ar
AS = avr-as
AVRLIB_ASFLAGS = -x assembler-with-cpp -Wa,-gstabs -D__COMPILING_AVR_LIBC__ -mmcu=avr2
AVRLIB_CFLAGS = -g -Wall -W -Wstrict-prototypes -D__COMPILING_AVR_LIBC__ -mmcu=avr2 -mcall-prologues -Os
AVR_CRT_ASFLAGS = -x assembler-with-cpp -Wa,-gstabs
AVR_CRT_AT90 = crts1200.o crts2313.o crts2323.o crts2333.o crts2343.o \
                crts4414.o crts4433.o crts4434.o crts8515.o crts8535.o \
                crtc8534.o
AVR_CRT_MEGA = 
AVR_CRT_OTHER = crt86401.o
AVR_CRT_TINY = crttn11.o crttn12.o crttn15.o crttn28.o crttn22.o crttn26.o
AVR_LIBC_USER_MANUAL = avr-libc-user-manual-1.0.5
CC = avr-gcc
DOCSDIR = 
DOC_INST_DIR = $(DESTDIR)$(datadir)/doc/avr-libc-$(VERSION)
INCLUDES = -I$(top_srcdir)/include -I$(top_srcdir)/common
INSTALL_DOX_HTML = install-dox-html
INSTALL_DOX_PDF = install-dox-pdf
INSTALL_DOX_PS = install-dox-ps
MAKEINFO = /home/vishwanath/Documents/projects/roboOS/toolchain/avr-libc-1.0.5/missing makeinfo
PACKAGE = avr-libc
PNGTOPNM = pngtopnm
PNMTOPNG = pnmtopng
RANLIB = avr-ranlib
TARGET_DOX_HTML = dox-html
TARGET_DOX_PDF = dox-pdf
TARGET_DOX_PS = dox-ps
VERSION = 1.0.5
avrlib_basedir = ./

noinst_DATA = $(AVR_CRT_AT90) $(AVR_CRT_TINY) $(AVR_CRT_MEGA) $(AVR_CRT_OTHER)

# must be added to the package, but automake doesn't know them as source
# files until now
EXTRA_DIST = gcrt1.S

# if we have no sources, COMPILE is not defined by automake
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES = 
DATA =  $(noinst_DATA)

DIST_COMMON =  Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = gtar
GZIP_ENV = --best
all: all-redirect
.SUFFIXES:
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --foreign crt1/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status $(BUILT_SOURCES)
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status

tags: TAGS
TAGS:


distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = crt1

distdir: $(DISTFILES)
	here=`cd $(top_builddir) && pwd`; \
	top_distdir=`cd $(top_distdir) && pwd`; \
	distdir=`cd $(distdir) && pwd`; \
	cd $(top_srcdir) \
	  && $(AUTOMAKE) --include-deps --build-dir=$$here --srcdir-name=$(top_srcdir) --output-dir=$$top_distdir --foreign crt1/Makefile
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  if test -d $$d/$$file; then \
	    cp -pr $$d/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done
info-am:
info: info-am
dvi-am:
dvi: dvi-am
check-am: all-am
check: check-am
installcheck-am:
installcheck: installcheck-am
install-exec-am:
install-exec: install-exec-am

install-data-am:
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am:
uninstall: uninstall-am
all-am: Makefile $(DATA)
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-generic mostlyclean-am

clean: clean-am

distclean-am:  distclean-generic clean-am

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-generic distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: tags distdir info-am info dvi-am dvi check check-am \
installcheck-am installcheck install-exec-am install-exec \
install-data-am install-data install-am install uninstall-am uninstall \
all-redirect all-am all installdirs mostlyclean-generic \
distclean-generic clean-generic maintainer-clean-generic clean \
mostlyclean distclean maintainer-clean


# content of AVR_CRT_ASFLAGS is set by configure (see acinclude.m4 in top
# directory)

$(AVR_CRT_AT90): crt%.o: gcrt1.S
	$(COMPILE) $(AVR_CRT_ASFLAGS) -mmcu=at90$* -c $< -o $@

$(AVR_CRT_MEGA): crtm%.o: gcrt1.S
	$(COMPILE) $(AVR_CRT_ASFLAGS) -mmcu=atmega$* -c $< -o $@

$(AVR_CRT_TINY): crttn%.o: gcrt1.S
	$(COMPILE) $(AVR_CRT_ASFLAGS) -mmcu=attiny$* -c $< -o $@

# $(AVR_CRT_OTHER) - devices that don't follow a common naming convention.
crtat94k.o: gcrt1.S
	$(COMPILE) $(AVR_CRT_ASFLAGS) -mmcu=at94k -c $< -o $@

crt43320.o: gcrt1.S
	$(COMPILE) $(AVR_CRT_ASFLAGS) -mmcu=at43usb320 -c $< -o $@

crt43355.o: gcrt1.S
	$(COMPILE) $(AVR_CRT_ASFLAGS) -mmcu=at43usb355 -c $< -o $@

crt76711.o: gcrt1.S
	$(COMPILE) $(AVR_CRT_ASFLAGS) -mmcu=at76c711 -c $< -o $@

crt86401.o: gcrt1.S
	$(COMPILE) $(AVR_CRT_ASFLAGS) -mmcu=at86rf401 -c $< -o $@

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
