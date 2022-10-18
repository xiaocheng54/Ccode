#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int a, b = 0;
//	int max = 0;
//	printf("请输入两个数字（用空格隔开），我来帮你比较大小：");
//	scanf("%d %d",&a,&b);
//	if (a != b) {
//		if (a > b) {
//			max = a;
//		}
//		else if (a < b) {
//			max = b;
//		}
//		printf("%d和%d中较大的是%d", a, b, max);
//	}
//	else
//		printf("%d和%d两个一样大",a,b);
//	return 0;
//}


//奇偶校验
//思路，对输入的数字对2取余数，为0则是偶数，为1则是奇数，用分支选择语句实现
//int main() {
//	int num = 0;
//	/*printf("请输入一个数字，我来帮你判断奇偶性：")*/
//	while (scanf("%d", &num) != EOF) {
//		if (num % 2 == 0)
//			printf("Even\n");
//		else
//			printf("Odd\n");
//	}
//
//	return 0;
//}

//int main() {
//	int grade = 0;
//	printf("请输入你的成绩（0-100）：");
//	while (scanf("%d",&grade) != EOF) {
//		if (grade < 0 || grade>100)
//			printf("输入值超过范围");
//		else if (grade >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//
//	}
//
//	return 0;
//}
int main() {
	int grade = 0;
	printf("请输入你的成绩（0-100）：");
	while (scanf("%d", &grade) != EOF) {
		if (grade < 0 || grade>100)
			printf("输入值超过范围");
		else if (grade >= 90)
			printf("Perfect\n");
	}

	return 0;
}