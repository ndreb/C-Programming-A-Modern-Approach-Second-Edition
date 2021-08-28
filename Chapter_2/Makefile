include ../config.mk

SRCS = ${wildcard *.c}

PROGS = ${patsubst %.c,%,${SRCS}}

all: options ${PROGS}

options:
	@echo build options:
	@echo "CFLAGS = ${CFLAGS}"
	@echo "CC = ${CC}"

%: %.c
	${CC} ${CFLAGS} -o $@ $<

clean:
	rm -f ${PROGS}
