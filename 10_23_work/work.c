#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//写一个代码打印1-100之间所有3的倍数的数字

//int main() {

//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//
//}
//int main() {
//	int a, b, c = 0;
//	int max = 0;
//	int middle = 0;
//	int min = 0;
//	printf("请输入三个数字：");
//	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//		if (a > b) {
//			if (a > c) {
//				max = a;
//	     		if (b > c) {
//					middle = b;
//					min = c;
//				}
//				else {
//					middle = c;
//				    min = b;
//				}
//			}
//			else if (a < c) {
//				max = c;
//				middle = a;
//				min = c;
//			}
//		}
//		else if (a < b) {
//			if (b > c) {
//				max = b;
//				if (a > c) {
//					middle = a;
//					min = c;
//				}
//				else {
//					middle = a;
//					min = c;
//				}
//			}
//			else if (b < c) {
//				max = c;
//				middle = b;
//				min = a;
//			}
//		}
//		printf("%d %d %d", max, middle, min);
//	}
//	return 0;
//}
//打印素数

#include<stdio.h>

int main(){
	int i, j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) //循环打印100~200
	{
		for (j = 2; j < i; j++) { //循环打印除数，并进行比较
			if (i % j == 0) { //当整除除数时，跳出循环
				break;
			}
		}
		if (i == j) { //当且仅当i==j时，说明i是质数
			printf("%d ", i);
			count++;//计数
		}

	}
	printf("\n%d", count);
	return 0;
}

//打印闰年
int main(){
	int y = 0;
	int count = 0;
	for (y = 1000; y < 2001; y++) { // 生成1000~2000的数
		if (y % 4 == 0) {
			printf("%d ", y);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;

}

#include<stdio.h>

int main(){
	  int a, b = 0;
	  int min = 0;//a,b小的值作为被除数起始的值

	  printf("请输入两个数字，我来帮你计算他俩的最大公约数：");
	  while (scanf("%d %d", &a, &b) != EOF){
		if (a > b) {
			min = b;
		}
		else {
			min = a;
		}
		for(int i = min; i > 0; i--){
			if(a % i == 0 && b % i == 0){
				printf("%d", i);
				break; //找到一个就结束循环
			}
		}
	  }
	return 0;
}