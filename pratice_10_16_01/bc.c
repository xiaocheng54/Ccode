#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() {
//	int a = 10 % 4; //ȡ�����
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	int M = 0;
//	/*printf("������һ����ֵ�����������ж����ܷ�5������");*/
//	scanf("%d", &M);
//	if (M % 5 == 0) {  //%ȡ����ţ�����˼��ȡ����
//		printf("YES");
//	}
//	else {
//		printf("NO");
//	}
//	return 0;
//}
//tips:�ؼ������������趨��ͨ��ȡ�����ʵ�֣���x % 5 == 0ʱ�����ܱ���������֮������ܡ�

//int main() {
//	int x = 0;
//	printf("������x,����������⣺");
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
//	printf("�������������֣�������������̺ͳ�����");
//	scanf("%d %d", &a, &b);
//	printf("%d %d",a/b,a%b);
//
//	return 0;
//}

int main() {
	int a= 0;
	double b = 0;
	printf("�������������֣�������������̺ͳ�����");
	scanf("%d %lf", &a, &b);
	float c = a / b;
	printf("%f", c );

	return 0;
}