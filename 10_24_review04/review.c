#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() {
//	typedef int a;  //��int������Ϊaʹ��
//	a x = 0;
//	printf("%d", x);
//
//	return 0;
//}

//staic�ؼ���
//1.���ξֲ��������ӳ��ֲ�������������
//2.����ȫ�ֱ�����ʹȫ�ֱ����޷�����
//3.���κ�����ʹ�����޷�����
//test() {
//	int a = 0;
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		test();
//	}
//
//	return 0;
//}
//int add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d",&a,&b) != EOF) {
//		printf("%d\n", add(a, b));
//	}
//	return 0;
//}

//#define �������/��

//#define  M 100
//
//int main() {
//	int a = M;
//	printf("%d\n", M);
//	printf("%d", a);
//
//	return 0;
//}
//2.define����ĺ�

//int max(int x,int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//   //return (x>y?x:y);
//}

//#define max(x,y) (x>y?x:y)  //��Ŀ�����  max��x,y���� (x>y?x:y)����
//
//int main() {
//	int a = 2;
//	int b = 0;
//	printf("%d", max(a, b));
//	return 0;
//}

//ָ��

int main() {
	int a = 1;
	printf("%p", &a);

	return 0;
}