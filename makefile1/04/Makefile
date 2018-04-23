TGT = a.out
SRCS = main.c tst.c foo.c

#CROSS_COMPLIER = arm-linux-

CC = $(CROSS_COMPLIER)gcc

CFLAGS = -I$(HEAD_DIR)


CUR_DIR = $(shell pwd)
HEAD_DIR = $(CUR_DIR)/head

$(TGT):$(SRCS:.c=.o)
	$(CC) $^ $(CFLAGS) -o $@

%.o: %.c
	$(CC) $< -c

%.d: %.c
	$(CC) -MM $< > $@

#include $(SRCS:.c=.d)
#-include $(SRCS:.c=.d)
sinclude $(SRCS:.c=.d)

clean:
	rm -f $(TGT) $(SRCS:.c=.o) $(SRCS:.c=.d)

.PHONY: clean



