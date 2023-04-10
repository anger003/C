#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//0 1 2 3 4 5 6 7 8 9 10 11 
void pour(int* arr, int y) {
	int i = 0;
	int x = y - 1;

	int a = 0;
	while (i < x) {
		a = arr[i];
		arr[i] = arr[x];
		arr[x] = a;
		i++;
		x--;
	}
}

int main() {
	int a = 0;
	 
	printf("输入2个数\n");
	scanf("%d", &a);
	//储存a的32位二进制
	int arr[32] = {0};
	//临时储存二进制的单个数
	int aee = 0;
	//计算偶数个数
	int even = 0;
	//计算奇数个数
	int odd = 0;

	int i = 0;
	for (i = 0; i < 32;i++) {
		aee = (a >> i) & 1;
		arr[i] = aee;
		if (aee % 2 == 0) {
			even++;
		}
		else if (aee % 2 == 1) {
			odd++;
		}
	}

	int y = sizeof(arr) / sizeof(arr[0]);
	pour(arr, y);

	printf("a的二进制为:");
	for (i = 0; i < 32; i++) {
		printf("%d", arr[i]);
	}

	printf("\n偶数的个数为:%d\n", even);
	printf("奇数的个数为:%d\n", odd);
	
	return 0;
}

