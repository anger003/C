#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int a = 8;
	int b = 10;

	a ^= b;	//�ҵ������:1.��ȡa��b����ͬ�Ķ�����λ (a���)
	b ^= a; //2.b��ȥ�յõ��Ĳ�(a),�͵���ԭ��a��ֵ
	a ^= b; //3.a����b(ԭ��a��ֵ)

	printf("%d %d", a, b);

	return 0;
}

