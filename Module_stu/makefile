
CC=gcc
INCLUDE=-I./ -I../Include -I/usr/local/mysql/include
F=-fPIC -shared

../RELEASE/libstudent.so : *.o
	$(CC) $(F) $(INCLUDE) $< -o $@

*.o : 
	$(CC) -fPIC $(INCLUDE) -c *.c

.PHONY:clean
clean:
	-rm -f *.o
