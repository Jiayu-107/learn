TARGET:=lcd    #可执行文件名字
SOURCES:=./USR/main.c 		#指定所有源文件
OBJS:=          #指定所有的中间文件.o
CC:=arm-linux-gcc  #指定编译器
INCS:=-I ./HEADER #指定头文件的搜索路径
LIBS:=-L ./ #指定库文件的搜索路径
LIBNAME:= #指定库名字

SOURCES+=$(wildcard ./SOURCE/*.c) #展开所有的.c文件 赋值给SOURCES
OBJS+=$(patsubst %.c,%.o,$(SOURCES))

$(TARGET):$(OBJS)
	$(CC) $^ -o $@ $(INCS) $(LIBS) $(LIBNAME)
%.o:%.c
	$(CC) -c $^ -o $@ $(INCS) $(LIBS) $(LIBNAME)
	
clean:
	rm -rf $(TARGET) $(OBJS) #递归删除 删除文件夹