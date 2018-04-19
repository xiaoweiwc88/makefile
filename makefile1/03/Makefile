TGT = a.out
SRCS = test.c tst.c
#OBJ = test.o tst.o
CC = gcc


#$(TGT): $(OBJ)
#	$(CC) $^ -o $@

$(TGT): $(SRCS:.c=.o)
	$(CC) $^ -o $@

#可以使用make -p打印出make的所有隐含规则
#如果我们没有显式的写明某写规则，那么make回去隐含规则中查询是否有生成这个规则中的目标的规则存在，如果存在就调用，不存在就报错退出

#test.o: test.c
#	$(CC) $^ -c -o $@

#tst.o: tst.c
#	$(CC) $^ -c -o $@

#test.o tst.o: test.c tst.c

#下面的规则称为模式规则 %会匹配.c文件的前面部分
#模式规则执行时，是一个循环取出的规程，每次去除一个.c，调用下面的命令生成对应.o 直到将所有的.c取完为止
%.o: %.c
	$(CC) $< -c

clean:
	rm -f $(TGT) $(OBJ)
