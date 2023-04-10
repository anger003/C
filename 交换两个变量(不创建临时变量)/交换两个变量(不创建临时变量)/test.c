#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int a = 8;
	int b = 10;

	a ^= b;	//我的理解是:1.提取a跟b不相同的二进制位 (a获得)
	b ^= a; //2.b减去刚得到的差(a),就等于原先a的值
	a ^= b; //3.a加上b(原先a的值)

	printf("%d %d", a, b);

	return 0;
}

