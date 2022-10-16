#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() {
//	int a = 10 % 4; //取余符号
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	int M = 0;
//	/*printf("请输入一个数值，我来帮你判断它能否被5整除：");*/
//	scanf("%d", &M);
//	if (M % 5 == 0) {  //%取余符号，顾名思义取余数
//		printf("YES");
//	}
//	else {
//		printf("NO");
//	}
//	return 0;
//}
//tips:关键在于条件的设定，通过取余符号实现，当x % 5 == 0时代表能被整除，反之则代表不能。

//int main() {
//	int x = 0;
//	printf("请输入x,我来帮你求解：");
//	scanf("%d", &x);
//	if (x < 0) {
//		printf("%d", 1);
//	}
//	else if (x == 0) {
//		printf("%d", 0);
//	}
//	else {
//		printf("%d", -1);
//	}
//	return 0;
//}

//int main() {
//	int a, b = 0;
//	printf("请输入两个数字，我来帮你计算商和除数：");
//	scanf("%d %d", &a, &b);
//	printf("%d %d",a/b,a%b);
//
//	return 0;
//}

int main() {
	int a= 0;
	double b = 0;
	printf("请输入两个数字，我来帮你计算商和除数：");
	scanf("%d %lf", &a, &b);
	float c = a / b;
	printf("%f", c );

	return 0;
}