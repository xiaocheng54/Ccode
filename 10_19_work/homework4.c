#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BC56 �߶�ͼ��
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) { //Ҫ��ѭ����ֹ����
//        for (int i = 0; i < a; i++) {
//            printf("*");
//        }
//        printf("\n");   //���һ�е����Ҫ����
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
////����ʱһ�㲻Ҫ�涨С��λ��

//int main() {
//	int a = 0;
//	printf("�����������ӡ��*�ĸ�����");
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
//	printf("������������������ת����");
//	while (scanf(" %d", &second) != EOF) {
//		hour = second / 3600;//Сʱ��=����/3600
//		min = second / 60 % 60; //������=����/60%60��ȥ��Сʱ����
//		second = second % 3600%60;//����=����%3600%60��ȥ��Сʱ����������
//		printf("����%dСʱ%d��%d��\n", hour,min,second);
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

