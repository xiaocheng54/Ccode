#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int a, b = 0;
//	int max = 0;
//	printf("�������������֣��ÿո����������������Ƚϴ�С��");
//	scanf("%d %d",&a,&b);
//	if (a != b) {
//		if (a > b) {
//			max = a;
//		}
//		else if (a < b) {
//			max = b;
//		}
//		printf("%d��%d�нϴ����%d", a, b, max);
//	}
//	else
//		printf("%d��%d����һ����",a,b);
//	return 0;
//}


//��żУ��
//˼·������������ֶ�2ȡ������Ϊ0����ż����Ϊ1�����������÷�֧ѡ�����ʵ��
//int main() {
//	int num = 0;
//	/*printf("������һ�����֣����������ж���ż�ԣ�")*/
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
//	printf("��������ĳɼ���0-100����");
//	while (scanf("%d",&grade) != EOF) {
//		if (grade < 0 || grade>100)
//			printf("����ֵ������Χ");
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
	printf("��������ĳɼ���0-100����");
	while (scanf("%d", &grade) != EOF) {
		if (grade < 0 || grade>100)
			printf("����ֵ������Χ");
		else if (grade >= 90)
			printf("Perfect\n");
	}

	return 0;
}