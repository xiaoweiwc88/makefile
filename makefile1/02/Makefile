#a.out:  tst.c test.c
#	gcc tst.c test.c

TGT = a.out
SRCS = test.c tst.c

$(TGT): $(SRCS)
	gcc $^ -o $@

#下面的规则，用来清理之前生成的文件，以备下一次重新编译
clean:
	rm -f  $(TGT)

