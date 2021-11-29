$(CC)=gcc
main: main.o add.o sub.o mul.o
	$(CC) -o main main.o add.o sub.o mul.o
add.o: add.c 
	$(CC) -c -o add.o add.c 
sub.o: sub.c 
	$(CC) -c -o sub.o sub.c
mul.o: mul.c 
	$(CC) -c -o mul.o mul.c
clean:
	rm -rf * .o main 