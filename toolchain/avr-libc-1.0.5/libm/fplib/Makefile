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

noinst_LIBRARIES = lib.a

lib_a_asm_sources =  	acos.S           	addsf3.S         	addsf3x.S	 	asin.S	         	atan.S	         	atan2.S	         	ceil.S	         	cos.S	         	cosh.S	         	divsf3.S         	divsf3x.S	 	dtostre.S	 	dtostrf.S	 	exp.S	         	fixsfsi.S	 	floatsisf.S	 	floor.S	         	fmod.S	         	fp_cmp.S         	fp_cosinus.S	 	fp_flashconst.S	 	fp_merge.S	 	fp_nan.S         	fp_powerseries.S 	fp_split.S	 	fp_zero.S	 	frexp.S	         	isinfnan.S       	ldexp.S	         	log.S	         	log10.S	         	modf.S	         	mulsf3.S         	mulsf3x.S	 	negsf2.S         	pow.S	         	sin.S	         	sinh.S	         	sqrt.S	         	strtod.S         	tan.S	         	tanh.S


lib_a_SOURCES = $(lib_a_asm_sources)

lib_a_asm_objs = $(lib_a_asm_sources:%.S=%.o)

# must be added to the package, but automake doesn't know it as source
# file until now
EXTRA_DIST =  	fplib.inc      	readme.dtostre 	readme.fplib   	readme.strtod

mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES = 
LIBRARIES =  $(noinst_LIBRARIES)


DEFS =  -DPACKAGE=\"avr-libc\" -DVERSION=\"1.0.5\" -D__AVRLIBC__=1 -D__AVRLIBC_MINOR__=0  -I. -I$(srcdir) 
CPPFLAGS = 
LDFLAGS = 
LIBS = 
lib_a_LIBADD = 
lib_a_OBJECTS =  acos.o addsf3.o addsf3x.o asin.o atan.o atan2.o ceil.o \
cos.o cosh.o divsf3.o divsf3x.o dtostre.o dtostrf.o exp.o fixsfsi.o \
floatsisf.o floor.o fmod.o fp_cmp.o fp_cosinus.o fp_flashconst.o \
fp_merge.o fp_nan.o fp_powerseries.o fp_split.o fp_zero.o frexp.o \
isinfnan.o ldexp.o log.o log10.o modf.o mulsf3.o mulsf3x.o negsf2.o \
pow.o sin.o sinh.o sqrt.o strtod.o tan.o tanh.o
CFLAGS = 
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
DIST_COMMON =  Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = gtar
GZIP_ENV = --best
DEP_FILES =  .deps/acos.P .deps/addsf3.P .deps/addsf3x.P .deps/asin.P \
.deps/atan.P .deps/atan2.P .deps/ceil.P .deps/cos.P .deps/cosh.P \
.deps/divsf3.P .deps/divsf3x.P .deps/dtostre.P .deps/dtostrf.P \
.deps/exp.P .deps/fixsfsi.P .deps/floatsisf.P .deps/floor.P \
.deps/fmod.P .deps/fp_cmp.P .deps/fp_cosinus.P .deps/fp_flashconst.P \
.deps/fp_merge.P .deps/fp_nan.P .deps/fp_powerseries.P .deps/fp_split.P \
.deps/fp_zero.P .deps/frexp.P .deps/isinfnan.P .deps/ldexp.P \
.deps/log.P .deps/log10.P .deps/modf.P .deps/mulsf3.P .deps/mulsf3x.P \
.deps/negsf2.P .deps/pow.P .deps/sin.P .deps/sinh.P .deps/sqrt.P \
.deps/strtod.P .deps/tan.P .deps/tanh.P
SOURCES = $(lib_a_SOURCES)
OBJECTS = $(lib_a_OBJECTS)

all: all-redirect
.SUFFIXES:
.SUFFIXES: .S .c .o .s
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --foreign libm/fplib/Makefile

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

subdir = libm/fplib

distdir: $(DISTFILES)
	here=`cd $(top_builddir) && pwd`; \
	top_distdir=`cd $(top_distdir) && pwd`; \
	distdir=`cd $(distdir) && pwd`; \
	cd $(top_srcdir) \
	  && $(AUTOMAKE) --include-deps --build-dir=$$here --srcdir-name=$(top_srcdir) --output-dir=$$top_distdir --foreign libm/fplib/Makefile
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

$(lib_a_asm_objs): %.o: %.S
	$(COMPILE) $(AVRLIB_ASFLAGS) -c $< -o $@

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
