#
# Main makefile for Chessy
#
# This must be the first non-comment line
.POSIX:

include config.mk

all: options ${BIN}

options:
	@echo "CC      = ${CC}"
	@echo "CFLAGS  = ${CFLAGS}"
	@echo "LDFLAGS = ${LDFLAGS}"

clean:
	rm -rf ${BIN} ${OBJ}

install:

uninstall:

${BIN}: config.h ${OBJ}
	${CC} -o $@ ${OBJ} ${LDFLAGS}

.c.o:
	${CC} -c ${CFLAGS} $<

.h.c:
	@[ -f "$@" ] || {                                                     \
		echo "#define $$(echo "$@" | tr '[:lower:].' '[:upper:]_')" ; \
		echo "#include \"$<\""                                      ; \
		echo ""                                                     ; \
		echo "/* $@ begins here */"                                 ; \
		echo "/* $@ ends here */"                                   ; \
		echo ""                                                     ; \
		echo "#undef $$(echo "$@" | tr '[:lower:].' '[:upper:]_')"  ; \
	} | tee $@

${HDR}:
	@[ -f "$@" ] || {                                                     \
		echo "#ifndef $$(echo "$@" | tr '[:lower:].' '[:upper:]_')" ; \
		echo "#define $$(echo "$@" | tr '[:lower:].' '[:upper:]_')" ; \
		echo ""                                                     ; \
		echo "/* public definitions */"                             ; \
		echo ""                                                     ; \
		echo "#ifdef $$(echo "$@" | tr 'a-ghi-z.' 'A-GCI-Z_')"      ; \
		echo ""                                                     ; \
		echo "/* private declarations */"                           ; \
		echo ""                                                     ; \
		echo "#endif"                                               ; \
		echo ""                                                     ; \
		echo "#endif"                                               ; \
	} | tee $@

config.h: config.def.h
	@touch $@
	mv -f $@ .$@.bak
	cp $? $@

.PHONY: all options clean install uninstall

.PRECIOUS: ${SRC} ${HDR} config.h

