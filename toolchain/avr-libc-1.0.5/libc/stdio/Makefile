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

# Copyright (c) 2002, Joerg Wunsch
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


SHELL = /bin/sh

srcdir = .
top_srcdir = ../..
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

top_builddir = ../..

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

noinst_LIBRARIES = lib.a 	libprintf_min.a libprintf_flt.a 	libscanf_min.a libscanf_flt.a


lib_a_c_sources =  	clearerr.c		fclose.c		fdevopen.c		feof.c			ferror.c		fgetc.c			fgets.c			fprintf.c		fprintf_p.c		fputc.c			fputs.c			fputs_p.c		fread.c			fscanf.c		fscanf_p.c		fwrite.c		getchar.c		gets.c			printf.c		printf_p.c		putchar.c		puts.c			puts_p.c		scanf.c			scanf_p.c		snprintf.c		snprintf_p.c		sprintf.c		sprintf_p.c		sscanf.c		sscanf_p.c		vfprintf_p.c		vfscanf_p.c		vsnprintf.c		vsnprintf_p.c		vsprintf.c		vsprintf_p.c		ungetc.c


lib_a_asm_sources =  	getc.S			putc.S


lib_a_SOURCES = $(lib_a_c_sources) $(lib_a_asm_sources)

lib_a_c_objs = $(lib_a_c_sources:%.c=%.o)

lib_a_asm_objs = $(lib_a_asm_sources:%.S=%.o)

lib_a_LIBADD = vfprintf_std.o vfscanf_std.o

libprintf_min_a_SOURCES = 

libprintf_min_a_LIBADD = vfprintf_min.o

libprintf_flt_a_SOURCES = 

libprintf_flt_a_LIBADD = vfprintf_flt.o

libscanf_min_a_SOURCES = 

libscanf_min_a_LIBADD = vfscanf_min.o

libscanf_flt_a_SOURCES = 

libscanf_flt_a_LIBADD = vfscanf_flt.o

# must be added to the package, but automake doesn't know them as source
# files until now
EXTRA_DIST = vfprintf.c vfscanf.c stdio_private.h

# vfprintf is compiled best with -O1 -mno-tablejump, this gives the
# smallest code.
PRINTF_CFLAGS = $(AVRLIB_CFLAGS) -O1 -mno-tablejump
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES = 
LIBRARIES =  $(noinst_LIBRARIES)


DEFS =  -DPACKAGE=\"avr-libc\" -DVERSION=\"1.0.5\" -D__AVRLIBC__=1 -D__AVRLIBC_MINOR__=0  -I. -I$(srcdir) 
CPPFLAGS = 
LDFLAGS = 
LIBS = 
lib_a_DEPENDENCIES =  vfprintf_std.o vfscanf_std.o
lib_a_OBJECTS =  clearerr.o fclose.o fdevopen.o feof.o ferror.o fgetc.o \
fgets.o fprintf.o fprintf_p.o fputc.o fputs.o fputs_p.o fread.o \
fscanf.o fscanf_p.o fwrite.o getchar.o gets.o printf.o printf_p.o \
putchar.o puts.o puts_p.o scanf.o scanf_p.o snprintf.o snprintf_p.o \
sprintf.o sprintf_p.o sscanf.o sscanf_p.o vfprintf_p.o vfscanf_p.o \
vsnprintf.o vsnprintf_p.o vsprintf.o vsprintf_p.o ungetc.o getc.o \
putc.o
libprintf_min_a_DEPENDENCIES =  vfprintf_min.o
libprintf_min_a_OBJECTS = 
libprintf_flt_a_DEPENDENCIES =  vfprintf_flt.o
libprintf_flt_a_OBJECTS = 
libscanf_min_a_DEPENDENCIES =  vfscanf_min.o
libscanf_min_a_OBJECTS = 
libscanf_flt_a_DEPENDENCIES =  vfscanf_flt.o
libscanf_flt_a_OBJECTS = 
CFLAGS = 
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
DIST_COMMON =  Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = gtar
GZIP_ENV = --best
DEP_FILES =  .deps/clearerr.P .deps/fclose.P .deps/fdevopen.P \
.deps/feof.P .deps/ferror.P .deps/fgetc.P .deps/fgets.P .deps/fprintf.P \
.deps/fprintf_p.P .deps/fputc.P .deps/fputs.P .deps/fputs_p.P \
.deps/fread.P .deps/fscanf.P .deps/fscanf_p.P .deps/fwrite.P \
.deps/getc.P .deps/getchar.P .deps/gets.P .deps/printf.P \
.deps/printf_p.P .deps/putc.P .deps/putchar.P .deps/puts.P \
.deps/puts_p.P .deps/scanf.P .deps/scanf_p.P .deps/snprintf.P \
.deps/snprintf_p.P .deps/sprintf.P .deps/sprintf_p.P .deps/sscanf.P \
.deps/sscanf_p.P .deps/ungetc.P .deps/vfprintf_p.P .deps/vfscanf_p.P \
.deps/vsnprintf.P .deps/vsnprintf_p.P .deps/vsprintf.P \
.deps/vsprintf_p.P
SOURCES = $(lib_a_SOURCES) $(libprintf_min_a_SOURCES) $(libprintf_flt_a_SOURCES) $(libscanf_min_a_SOURCES) $(libscanf_flt_a_SOURCES)
OBJECTS = $(lib_a_OBJECTS) $(libprintf_min_a_OBJECTS) $(libprintf_flt_a_OBJECTS) $(libscanf_min_a_OBJECTS) $(libscanf_flt_a_OBJECTS)

all: all-redirect
.SUFFIXES:
.SUFFIXES: .S .c .o .s
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --foreign libc/stdio/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status $(BUILT_SOURCES)
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


mostlyclean-noinstLIBRARIES:

clean-noinstLIBRARIES:
	-test -z "$(noinst_LIBRARIES)" || rm -f $(noinst_LIBRARIES)

distclean-noinstLIBRARIES:

maintainer-clean-noinstLIBRARIES:

.s.o:
	$(COMPILE) -c $<

.S.o:
	$(COMPILE) -c $<

mostlyclean-compile:
	-rm -f *.o core *.core

clean-compile:

distclean-compile:
	-rm -f *.tab.c

maintainer-clean-compile:

lib.a: $(lib_a_OBJECTS) $(lib_a_DEPENDENCIES)
	-rm -f lib.a
	$(AR) cru lib.a $(lib_a_OBJECTS) $(lib_a_LIBADD)
	$(RANLIB) lib.a

libprintf_min.a: $(libprintf_min_a_OBJECTS) $(libprintf_min_a_DEPENDENCIES)
	-rm -f libprintf_min.a
	$(AR) cru libprintf_min.a $(libprintf_min_a_OBJECTS) $(libprintf_min_a_LIBADD)
	$(RANLIB) libprintf_min.a

libprintf_flt.a: $(libprintf_flt_a_OBJECTS) $(libprintf_flt_a_DEPENDENCIES)
	-rm -f libprintf_flt.a
	$(AR) cru libprintf_flt.a $(libprintf_flt_a_OBJECTS) $(libprintf_flt_a_LIBADD)
	$(RANLIB) libprintf_flt.a

libscanf_min.a: $(libscanf_min_a_OBJECTS) $(libscanf_min_a_DEPENDENCIES)
	-rm -f libscanf_min.a
	$(AR) cru libscanf_min.a $(libscanf_min_a_OBJECTS) $(libscanf_min_a_LIBADD)
	$(RANLIB) libscanf_min.a

libscanf_flt.a: $(libscanf_flt_a_OBJECTS) $(libscanf_flt_a_DEPENDENCIES)
	-rm -f libscanf_flt.a
	$(AR) cru libscanf_flt.a $(libscanf_flt_a_OBJECTS) $(libscanf_flt_a_LIBADD)
	$(RANLIB) libscanf_flt.a

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags $(ETAGS_ARGS) $$tags  $$unique $(LISP) -o $$here/TAGS)

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = libc/stdio

distdir: $(DISTFILES)
	here=`cd $(top_builddir) && pwd`; \
	top_distdir=`cd $(top_distdir) && pwd`; \
	distdir=`cd $(distdir) && pwd`; \
	cd $(top_srcdir) \
	  && $(AUTOMAKE) --include-deps --build-dir=$$here --srcdir-name=$(top_srcdir) --output-dir=$$top_distdir --foreign libc/stdio/Makefile
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

DEPS_MAGIC := $(shell mkdir .deps > /dev/null 2>&1 || :)

-include $(DEP_FILES)

mostlyclean-depend:

clean-depend:

distclean-depend:
	-rm -rf .deps

maintainer-clean-depend:

%.o: %.c
	@echo '$(COMPILE) -c $<'; \
	$(COMPILE) -Wp,-MD,.deps/$(*F).pp -c $<
	@-cp .deps/$(*F).pp .deps/$(*F).P; \
	tr ' ' '\012' < .deps/$(*F).pp \
	  | sed -e 's/^\\$$//' -e '/^$$/ d' -e '/:$$/ d' -e 's/$$/ :/' \
	    >> .deps/$(*F).P; \
	rm .deps/$(*F).pp

%.lo: %.c
	@echo '$(LTCOMPILE) -c $<'; \
	$(LTCOMPILE) -Wp,-MD,.deps/$(*F).pp -c $<
	@-sed -e 's/^\([^:]*\)\.o[ 	]*:/\1.lo \1.o :/' \
	  < .deps/$(*F).pp > .deps/$(*F).P; \
	tr ' ' '\012' < .deps/$(*F).pp \
	  | sed -e 's/^\\$$//' -e '/^$$/ d' -e '/:$$/ d' -e 's/$$/ :/' \
	    >> .deps/$(*F).P; \
	rm -f .deps/$(*F).pp
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
all-am: Makefile $(LIBRARIES)
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
mostlyclean-am:  mostlyclean-noinstLIBRARIES mostlyclean-compile \
		mostlyclean-tags mostlyclean-depend mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-noinstLIBRARIES clean-compile clean-tags clean-depend \
		clean-generic mostlyclean-am

clean: clean-am

distclean-am:  distclean-noinstLIBRARIES distclean-compile \
		distclean-tags distclean-depend distclean-generic \
		clean-am

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-noinstLIBRARIES \
		maintainer-clean-compile maintainer-clean-tags \
		maintainer-clean-depend maintainer-clean-generic \
		distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: mostlyclean-noinstLIBRARIES distclean-noinstLIBRARIES \
clean-noinstLIBRARIES maintainer-clean-noinstLIBRARIES \
mostlyclean-compile distclean-compile clean-compile \
maintainer-clean-compile tags mostlyclean-tags distclean-tags \
clean-tags maintainer-clean-tags distdir mostlyclean-depend \
distclean-depend clean-depend maintainer-clean-depend info-am info \
dvi-am dvi check check-am installcheck-am installcheck install-exec-am \
install-exec install-data-am install-data install-am install \
uninstall-am uninstall all-redirect all-am all installdirs \
mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


# content of AVRLIB_CFLAGS and AVRLIB_ASFLAGS is determined by configure
# according to the multilib subdir (see acinclude.m4 in top directory)

$(lib_a_c_objs): %.o: %.c
	$(COMPILE) $(AVRLIB_CFLAGS) -c $< -o $@

$(lib_a_asm_objs): %.o: %.S
	$(COMPILE) $(AVRLIB_ASFLAGS) -c $< -o $@

vfprintf_min.o: vfprintf.c
	$(COMPILE) $(PRINTF_CFLAGS) -DPRINTF_LEVEL=PRINTF_MIN \
	-c $(srcdir)/vfprintf.c -o $@

vfprintf_std.o: vfprintf.c
	$(COMPILE) $(PRINTF_CFLAGS) -DPRINTF_LEVEL=PRINTF_STD \
	-c $(srcdir)/vfprintf.c -o $@

vfprintf_flt.o: vfprintf.c
	$(COMPILE) $(PRINTF_CFLAGS) -DPRINTF_LEVEL=PRINTF_FLT \
	-c $(srcdir)/vfprintf.c -o $@

vfscanf_min.o: vfscanf.c
	$(COMPILE) $(PRINTF_CFLAGS) -DSCANF_LEVEL=SCANF_MIN \
	-c $(srcdir)/vfscanf.c -o $@

vfscanf_std.o: vfscanf.c
	$(COMPILE) $(PRINTF_CFLAGS) -DSCANF_LEVEL=SCANF_STD \
	-c $(srcdir)/vfscanf.c -o $@

vfscanf_flt.o: vfscanf.c
	$(COMPILE) $(PRINTF_CFLAGS) -DSCANF_LEVEL=SCANF_FLT \
	-c $(srcdir)/vfscanf.c -o $@

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
