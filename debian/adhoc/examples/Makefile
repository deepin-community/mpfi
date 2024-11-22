# /usr/share/doc/libmpfi-doc/examples/Makefile
#
# Ad hoc Makefile for building and playing with the sample sources
# distributed within the debian package libmpfi-doc.
#
# Recommended usage:
#  create a dedicated folder somewhere in your HOME directory;
#  link all the files in /usr/share/doc/libmpfi-doc/examples in the dedicated folder;
#  launch this Makefile in the dedicated folder:
#  $ make ;
#  for a basic cleanup, consider the clean target:
#  $ make clean ;
#  for an entire cleanup, the maintainer-clean target:
#  $ make maintainer-clean ;
#  for other targets, just read the Makefile.
#
# written for Debian by Jerome Benoit <calculus@rezozer.net>
# on behalf of the Debian Science Team
# copyright: 2016-2024 Jerome Benoit <calculus@rezozer.net>
# distributed under the terms and conditions of GPL version 2 or later
#

PROGRAMS = $(patsubst %.c,%,$(wildcard *.c))

default: all

LDLIBS = -lmpfi -lmpfr -lgmp -lm

all: build

build: $(PROGRAMS)

check: build
	@$(foreach eg, $(PROGRAMS), echo "*** $(eg) ***" ; ./$(eg) ; )

clean:
	$(RM) $(PROGRAMS)

maintainer-clean: clean
