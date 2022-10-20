#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BC56 线段图案
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) { //要有循环终止条件
//        for (int i = 0; i < a; i++) {
//            printf("*");
//        }
//        printf("\n");   //完成一行的输出要换行
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//	float a, b, c, d, e;
//	while (scanf("%f %f %f %f %f", &a, &b, &c, &d, &e) != EOF) {
//		printf("%.f %.f %.f %.f %.f %.f\n", a, b, c, d, e, a + b + c + d + e);
//	}
//	return 0;
//}
////输入时一般不要规定小数位数

//int main() {
//	int a = 0;
//	printf("请输入你想打印的*的个数：");
//	while (scanf("%d", &a) != EOF) {
//		for (int i = 0; i < a; i++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//	int hour = 0;
//	int min = 0;
//	int second = 0;
//	printf("请输入秒数我来帮你转换：");
//	while (scanf(" %d", &second) != EOF) {
//		hour = second / 3600;//小时数=秒数/3600
//		min = second / 60 % 60; //分钟数=秒数/60%60（去掉小时数）
//		second = second % 3600%60;//秒数=秒数%3600%60（去掉小时数分钟数）
//		printf("等于%d小时%d分%d秒\n", hour,min,second);
//	}
//
//	return 0;
//}

//int main() {
//	int t = 0;
//	while (scanf("%d", &t) != EOF) {
//		if (t > 0) {
//			t = 1;
//		}
//		else if (t == 0) {
//			t = 0.5;
//		}
//		else
//			t = 0;
//		printf("%d\n", t);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	int t = 0;
//	while (scanf("%d", &t) != EOF) {
//		if (t > 0) {
//			printf("%d\n", 1);
//		}
//		else if (t == 0) {
//			t = (float)t;
//			printf("%.1f\n", 0.5);
//		}
//		else
//			printf("%d\n", 0);
//
//	}
//
//	return 0;
//}

