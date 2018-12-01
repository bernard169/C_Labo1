#include <stdio.h>
#include <ctype.h>

int main() {
	
	int a;
	int b;
	int c;
	#define a 12
	#define b -2
	c = a + b;
	printf("a = %d, b = %d, c = %d", a, b, c);
	return 0;
}
