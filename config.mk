BIN=chessy
LIB=${BIN} main test
SRC=${LIB:%=%.c}
HDR=${SRC:.c=.h}
OBJ=${SRC:.c=.o}
