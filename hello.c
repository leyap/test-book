#include <stdio.h>

void printHello();
void printWorld();
void printHelloWorld();

int main () {
	printf("hello world\n");
	printHello();
	return 0;
}

//
void printHello(void) {
	printf ("hello\n");
}

//
void printWorld() {
	printf ("hello\n");
}

//
void printHelloWorld() {
	printf ("hello world\n");
}
