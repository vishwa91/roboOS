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
# $Id: Makefile.am,v 1.36.2.2 2004/04/23 21:16:56 troth Exp $
#


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

MAINTAINERCLEANFILES = Makefile.in stamp-vti

CLEANFILES = *.html *.pdf *.ma *.mas *.ps doxygen-pdf.config                        *.png *.eps fix_png fix_anchors fix_javascript


EXTRA_DIST = dox.css dox_html_header dox_html_footer                        main_page.dox                        assembler.dox                        inline_asm.dox                        interrupts.dox                        acknowledge.dox                        malloc.dox                        $(IMAGE_SRC)                        sections.dox                        sfr.dox                        tools-install.dox                        using-avrprog.dox                        using-tools.dox                        faq.dox                        rel-method.dox                        unjs.pl


SUFFIXES = .pdf .fig .png .eps

DOC_INST_DIR = $(DESTDIR)$(datadir)/doc/avr-libc-$(VERSION)

USER_MANUAL = avr-libc-user-manual-1.0.5

DEMO_LIBS = $(shell find $(top_srcdir) -name crts2313.o | head -n 1)

# images for inclusion in HTML and LaTeX documents

FIG2DEV = fig2dev

IMAGE_SRC = malloc-std.fig malloc-x1.fig malloc-x2.fig releases.fig

IMAGE_PNG = $(IMAGE_SRC:.fig=.png)

IMAGE_EPS = $(IMAGE_SRC:.fig=.eps)

# doxygen generates bogus anchors unless you use anchor in the \mainpage
# or \page sections. It is easily fixed though.

FIX_ANCHORS = $(USER_MANUAL)/assembler.html               $(USER_MANUAL)/group__avr__stdio.html

mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES =  doxygen.config
CFLAGS = 
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
DIST_COMMON =  Makefile.am Makefile.in doxygen.config.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = gtar
GZIP_ENV = --best
all: all-redirect
.SUFFIXES:
.SUFFIXES: .eps .fig .pdf .png
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --foreign doc/api/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status $(BUILT_SOURCES)
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status

doxygen.config: $(top_builddir)/config.status doxygen.config.in
	cd $(top_builddir) && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status
tags: TAGS
TAGS:


distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = doc/api

distdir: $(DISTFILES)
	here=`cd $(top_builddir) && pwd`; \
	top_distdir=`cd $(top_distdir) && pwd`; \
	distdir=`cd $(distdir) && pwd`; \
	cd $(top_srcdir) \
	  && $(AUTOMAKE) --include-deps --build-dir=$$here --srcdir-name=$(top_srcdir) --output-dir=$$top_distdir --foreign doc/api/Makefile
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

install-data-am: install-data-local
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am: uninstall-local
uninstall: uninstall-am
all-am: Makefile all-local
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:


mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
	-test -z "$(MAINTAINERCLEANFILES)" || rm -f $(MAINTAINERCLEANFILES)
mostlyclean-am:  mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-generic mostlyclean-am clean-local

clean: clean-am

distclean-am:  distclean-generic clean-am

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-generic distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: tags distdir info-am info dvi-am dvi check check-am \
installcheck-am installcheck install-exec-am install-exec \
install-data-local install-data-am install-data install-am install \
uninstall-local uninstall-am uninstall all-local all-redirect all-am \
all installdirs mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


all-local: ps html pdf

# Before we can build the dox, we need to build the demo project so that some
# included files get generated. This could fail if crts2313.o is neither built
# nor installed, but there's not much we can do about that.
demo:
	if test -n "$(DEMO_LIBS)" ; then \
		NODEFLIBS="-nostartfiles -nodefaultlibs" ; \
	fi; \
	cd $(top_srcdir)/doc/examples/demo && \
		${MAKE} DEFS="-I$(top_srcdir)/include"  \
			LIBS="$$NODEFLIBS $(DEMO_LIBS)" dox all

.fig.eps:
	$(FIG2DEV) -L eps $< $@

.fig.png:
	$(FIG2DEV) -L png $< $@

# Rule for generating postscript output.
ps: demo $(TARGET_DOX_PS)

# Rule for generating html output.
html: demo $(TARGET_DOX_HTML) fix_png fix_anchors fix_javascript

# Make the background color of the png's transparent.
fix_png: $(wildcard $(USER_MANUAL)/*.png)
	cd $(USER_MANUAL) || exit 0; \
	for png in *.png; do \
		echo "Fixing transparency for $$png"; \
		$(PNGTOPNM) $$png > tmp.pnm; \
		$(PNMTOPNG) -transparent white tmp.pnm > $$png && rm tmp.pnm; \
	done
	echo timestamp > fix_png

fix_anchors: $(FIX_ANCHORS)
	cd $(USER_MANUAL) || exit 0; \
	sed 's/"avr_\(stdio.html#stdio_note\)/"group__avr__\1/g' \
		group__avr__stdio.html > fix.html; \
	mv fix.html group__avr__stdio.html; \
	sed 's/"avr_\(interrupts.html#avr_signames\)"/"group__avr__\1"/g' \
		assembler.html > fix.html; \
	mv fix.html assembler.html
	echo timestamp > fix_anchors

fix_javascript: $(USER_MANUAL)/tree.js $(USER_MANUAL)/tree.html \
	$(USER_MANUAL)/index.html
	perl $(top_srcdir)/doc/api/unjs.pl \
		$(USER_MANUAL)/tree.js \
		$(USER_MANUAL)/tree.html \
		$(USER_MANUAL)/index.html
	echo timestamp > fix_javascript

# Rule for generating PDF output
pdf: demo $(TARGET_DOX_PDF)

# General rule for installing documentation
install-data-local: $(INSTALL_DOX_HTML) $(INSTALL_DOX_PS) $(INSTALL_DOX_PDF)

uninstall-local:
	rm -rf $(DOC_INST_DIR)

clean-local:
	rm -rf $(USER_MANUAL) latex_src latex_pdf_src man
	cd $(top_srcdir)/doc/examples/demo && ${MAKE} clean

#
# Rules for generating documentation with doxygen
#

#
# The sed magic below does the following:
#
# It bumps the subsection level that is to be displayed in the TOC.
# For Postscript output, only \page and \section headings will be
# displayed, while the PDF document will also show \subsection so the
# browsable index in the PDF file will provide a good help to the
# user.
#
# The magic around TabularC replaces doxygen's own tabular environment
# (named TabularC) by an explicit call to longtable in the document
# that describes the signal names, so the rather long table can be
# split across multiple pages.  Note that there are some nasty things
# going on here: the string "Signal Name" in the table heading is used
# as a magic string in order to replace the \\ at the end of the table
# heading by \endhead so longtable will know what heading to repeat in
# table continuations.

latex_src/refman.tex: doxygen.config $(IMAGE_EPS) $(IMAGE_PNG)
	doxygen doxygen.config
	cd latex_src && \
		sed -e '/tocdepth/s/1/2/' \
		-e '/usepackage{times}/s/$$/\\usepackage{longtable}/' \
		-e '/^\\setlength{\\footrulewidth}{0.4pt}/d' \
		refman.tex > tmp.$$ && \
		mv -f tmp.$$ refman.tex
	cd latex_src && \
		sed -e '/{TabularC}{.}/s/{TabularC}{.}/{longtable}{|l|l|}/' \
		-e '/TabularC/s/TabularC/longtable/' \
		-e '/Signal Name/s/\\\\\\hline/\\endhead\\hline/' \
		group__avr__interrupts.tex > tmp.$$ && \
		mv -f tmp.$$ group__avr__interrupts.tex
	cd latex_src && \
		sed -e '/{TabularC}{3}/s/{TabularC}{3}/{longtable}{|l|l|l|}/' \
		-e '/{longtable}{|l|l|l|}/,/TabularC/s/TabularC/longtable/' \
		-e '/Architecture/s/\\\\\\hline/\\endhead\\hline/' \
		using_tools.tex > tmp.$$ && \
		mv -f tmp.$$ using_tools.tex

latex_pdf_src/refman.tex: doxygen-pdf.config $(IMAGE_EPS)
	doxygen doxygen-pdf.config
	cd latex_pdf_src && \
		sed -e '/tocdepth/s/1/3/' \
		-e '/usepackage{times}/s/$$/\\usepackage{longtable}/' \
		-e '/^\\setlength{\\footrulewidth}{0.4pt}/d' \
		refman.tex > tmp.$$ && \
		mv -f tmp.$$ refman.tex
	cd latex_pdf_src && \
		sed -e '/{TabularC}{.}/s/{TabularC}{.}/{longtable}{|l|l|}/' \
		-e '/TabularC/s/TabularC/longtable/' \
		-e '/Signal Name/s/\\\\\\hline/\\endhead\\hline/' \
		group__avr__interrupts.tex > tmp.$$ && \
		mv -f tmp.$$ group__avr__interrupts.tex
	cd latex_pdf_src && \
		sed -e '/{TabularC}{3}/s/{TabularC}{3}/{longtable}{|l|l|l|}/' \
		-e '/{longtable}{|l|l|l|}/,/TabularC/s/TabularC/longtable/' \
		-e '/Architecture/s/\\\\\\hline/\\endhead\\hline/' \
		using_tools.tex > tmp.$$ && \
		mv -f tmp.$$ using_tools.tex
	cd latex_pdf_src && \
		sed -e '/{demo.eps}/s/demo.eps/demo.pdf/' \
		demo_project.tex > tmp.$$ && \
		mv -f tmp.$$ demo_project.tex

doxygen-pdf.config: doxygen.config
	sed \
		-e '/USE_PDFLATEX/s/NO/YES/' \
		-e '/LATEX_OUTPUT/s/latex_src/latex_pdf_src/' \
		-e '/GENERATE_HTML/s/YES/NO/' \
		-e '/GENERATE_MAN/s/YES/NO/' \
		doxygen.config > doxygen-pdf.config

# XXX currently, HTML and LaTeX documentation will always be built
# together.  HTML doesn't need any postprocessing, while latex is only
# a prerequisite for ps.
dox-html: $(USER_MANUAL)/index.html

$(USER_MANUAL)/index.html: latex_src/refman.tex

dox-ps: $(USER_MANUAL).ps

$(USER_MANUAL).ps: latex_src/refman.tex
	cd latex_src && ${MAKE} ps
	cp latex_src/refman.ps $(USER_MANUAL).ps

dox-pdf: $(USER_MANUAL).pdf

$(USER_MANUAL).pdf: latex_pdf_src/refman.tex
	cd latex_pdf_src && ${MAKE} refman.pdf
	cp latex_pdf_src/refman.pdf $(USER_MANUAL).pdf

# Install rules for the various documentation parts.  The actual
# access to those rules is from the install-data-local target above,
# where the toplevel configure decides which of them will become a
# prerequisite of install-data-local.
install-dox-html: dox-html
	$(mkinstalldirs) $(DOC_INST_DIR)/$(USER_MANUAL)
	@list='$(wildcard $(USER_MANUAL)/*.html $(USER_MANUAL)/*.css \
	                  $(USER_MANUAL)/*.js $(USER_MANUAL)/*.png)'; \
	for file in $$list ; do \
	  echo " $(INSTALL_DATA) $$file $(DOC_INST_DIR)/$$file"; \
	  $(INSTALL_DATA) $$file $(DOC_INST_DIR)/$$file; \
	done

install-dox-pdf: dox-pdf
	$(mkinstalldirs) $(DOC_INST_DIR)
	$(INSTALL_DATA) $(USER_MANUAL).pdf $(DOC_INST_DIR)/$(USER_MANUAL).pdf

install-dox-ps: dox-ps
	$(mkinstalldirs) $(DOC_INST_DIR)
	$(INSTALL_DATA) $(USER_MANUAL).ps $(DOC_INST_DIR)/$(USER_MANUAL).ps

.PHONY: html latex ps pdf dox dox-pdf install-pdf install-html install-ps \
	install-dox-html install-dox-ps install-dox-pdf

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
