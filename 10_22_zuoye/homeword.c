#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//写一个代码打印1-100之间所有3的倍数的数字
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//作业内容
//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1

int main() {
	int a, b, c = 0;
	int max = 0;
	int middle = 0;
	int min = 0;
	printf("请输入三个数字：");
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if (a > b) {
			if (a > c) {
				max = a;
				if (b >c) {
					middle = b;
					min = c;
				}
				else {
					middle = c;
					min = b;
				}
			}
			else if (a < c) {
				max = c;
				middle = a;
				min = c;
			}
		}
		else if (a < b) {
			if (b > c) {
				max = b;
				if (a> c) {
					middle = a;
					min = c;
				}
				else {
					middle = a;
					min = c;
				}
				
			}
			else if (b < c) {
				max = c;
				middle = b;
				min = a;
			}
		}
		printf("%d %d %d", max, middle, min);
	}

	return 0;
}