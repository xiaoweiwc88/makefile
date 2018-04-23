#main makefile function:make rule and spec how to make finnal tar file
#in current file path

TGT = a.out

SUB_DIR = main tst

SUB_TGT = built-in.o

TOP_DIR = $(shell pwd)

HEAD_DIR = $(TOP_DIR)/head

#CROSS_COMPILER = arm-linux-
CC = $(CROSS_COMPILER)gcc

CFLAGS = -I $(HEAD_DIR) -Wall

LD = ld

LDFLAGS =

$(TGT): $(SUB_DIR)
	$(CC) $(CFLAGS) $(^:=/$(SUB_TGT))

$(SUB_DIR):
	make -C $@

clean:
	rm -vf $(TGT)
	for dir in $(SUB_DIR); do \
		\
		done






