#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int a = 8;
	int b = 10;

	a ^= b;
	b ^= a;
	a ^= b;

	printf("%d %d", a, b);

	return 0;
}

