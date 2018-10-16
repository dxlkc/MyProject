
CC=gcc
LIB_PATH=-Wl,-rpath=/usr/local/mysql/lib
INCLUDE=-I./Module_class -I./Module_stu -I./Include -I/usr/local/mysql/include 
LIBRARY=-L/usr/local/mysql/lib
LIBFILE=-lmysqlclient

./RELEASE/main : *.c
	make -C ./Module_class
	make -C ./Module_stu
	$(CC) -o ./RELEASE/main *.c $(INCLUDE) $(LIBRARY) $(LIB_PATH) $(LIBFILE) -L./RELEASE -lstudent -lclass 

.PHONY : clean
clean :
	rm -f ./Module_class/*.o ./Module_stu/*.o ./RELEASE/*.a
