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

#
# Copyright (c) 2002  Theodore A. Roth
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
# NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
# TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
# PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
# LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# Author: Theodore A. Roth <troth@verinet.com>
#
# Contributors:
#
# $Id: Makefile.am,v 1.3 2002/10/14 06:45:45 troth Exp $
#


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

MAINTAINERCLEANFILES = Makefile.in

SUBDIRS = examples api
DIST_SUBDIRS = examples api

EXTRA_DIST = CHANGES.old ChangeLog INSTALL TODO                        avr-libc-reference.html

mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES = 
DIST_COMMON =  ChangeLog INSTALL Makefile.am Makefile.in TODO


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = gtar
GZIP_ENV = --best
all: all-redirect
.SUFFIXES:
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --foreign doc/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status $(BUILT_SOURCES)
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


# This directory's subdirectories are mostly independent; you can cd
# into them and run `make' without going through this Makefile.
# To change the values of `make' variables: instead of editing Makefiles,
# (1) if the variable is set in `config.status', edit `config.status'
#     (which will cause the Makefiles to be regenerated when you run `make');
# (2) otherwise, pass the desired values on the `make' command line.



all-recursive install-data-recursive install-exec-recursive \
installdirs-recursive install-recursive uninstall-recursive  \
check-recursive installcheck-recursive info-recursive dvi-recursive:
	@set fnord $(MAKEFLAGS); amf=$$2; \
	dot_seen=no; \
	target=`echo $@ | sed s/-recursive//`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    dot_seen=yes; \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done; \
	if test "$$dot_seen" = "no"; then \
	  $(MAKE) $(AM_MAKEFLAGS) "$$target-am" || exit 1; \
	fi; test -z "$$fail"

mostlyclean-recursive clean-recursive distclean-recursive \
maintainer-clean-recursive:
	@set fnord $(MAKEFLAGS); amf=$$2; \
	dot_seen=no; \
	rev=''; list='$(SUBDIRS)'; for subdir in $$list; do \
	  rev="$$subdir $$rev"; \
	  test "$$subdir" != "." || dot_seen=yes; \
	done; \
	test "$$dot_seen" = "no" && rev=". $$rev"; \
	target=`echo $@ | sed s/-recursive//`; \
	for subdir in $$rev; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done && test -z "$$fail"
tags-recursive:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  test "$$subdir" = . || (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) tags); \
	done

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS: tags-recursive $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
   if test "$$subdir" = .; then :; else \
	    test -f $$subdir/TAGS && tags="$$tags -i $$here/$$subdir/TAGS"; \
   fi; \
	done; \
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

subdir = doc

distdir: $(DISTFILES)
	here=`cd $(top_builddir) && pwd`; \
	top_distdir=`cd $(top_distdir) && pwd`; \
	distdir=`cd $(distdir) && pwd`; \
	cd $(top_srcdir) \
	  && $(AUTOMAKE) --include-deps --build-dir=$$here --srcdir-name=$(top_srcdir) --output-dir=$$top_distdir --foreign doc/Makefile
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
	for subdir in $(DIST_SUBDIRS); do \
	  if test "$$subdir" = .; then :; else \
	    test -d $(distdir)/$$subdir \
	    || mkdir $(distdir)/$$subdir \
	    || exit 1; \
	    chmod 777 $(distdir)/$$subdir; \
	    (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) top_distdir=../$(top_distdir) distdir=../$(distdir)/$$subdir distdir) \
	      || exit 1; \
	  fi; \
	done
info-am:
info: info-recursive
dvi-am:
dvi: dvi-recursive
check-am: all-am
check: check-recursive
installcheck-am:
installcheck: installcheck-recursive
install-exec-am:
install-exec: install-exec-recursive

install-data-am:
install-data: install-data-recursive

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-recursive
uninstall-am:
uninstall: uninstall-recursive
all-am: Makefile
all-redirect: all-recursive
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs: installdirs-recursive
installdirs-am:


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
	-test -z "$(MAINTAINERCLEANFILES)" || rm -f $(MAINTAINERCLEANFILES)
mostlyclean-am:  mostlyclean-tags mostlyclean-generic

mostlyclean: mostlyclean-recursive

clean-am:  clean-tags clean-generic mostlyclean-am

clean: clean-recursive

distclean-am:  distclean-tags distclean-generic clean-am

distclean: distclean-recursive

maintainer-clean-am:  maintainer-clean-tags maintainer-clean-generic \
		distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-recursive

.PHONY: install-data-recursive uninstall-data-recursive \
install-exec-recursive uninstall-exec-recursive installdirs-recursive \
uninstalldirs-recursive all-recursive check-recursive \
installcheck-recursive info-recursive dvi-recursive \
mostlyclean-recursive distclean-recursive clean-recursive \
maintainer-clean-recursive tags tags-recursive mostlyclean-tags \
distclean-tags clean-tags maintainer-clean-tags distdir info-am info \
dvi-am dvi check check-am installcheck-am installcheck install-exec-am \
install-exec install-data-am install-data install-am install \
uninstall-am uninstall all-redirect all-am all installdirs-am \
installdirs mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
