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
	 
	printf("����2����\n");
	scanf("%d", &a);
	//����a��32λ������
	int arr[32] = {0};
	//��ʱ��������Ƶĵ�����
	int aee = 0;
	//����ż������
	int even = 0;
	//������������
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

	printf("a�Ķ�����Ϊ:");
	for (i = 0; i < 32; i++) {
		printf("%d", arr[i]);
	}

	printf("\nż���ĸ���Ϊ:%d\n", even);
	printf("�����ĸ���Ϊ:%d\n", odd);
	
	return 0;
}

