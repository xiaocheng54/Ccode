#define _CRT_SECURE_NO_WARNINGS 1

//EOF ���ļ��Ľ�����־
//end of file

#include<stdio.h>

//int main() {
//	int a = 0;
//	int b = 0;
//	int ret = scanf("%d %d", &a, &b);
//	//scanf��ȡʧ�ܵ�ʱ��᷵��EOF(-1)
//	//�����ȡ�ɹ����ص��Ƕ�ȡ�����ݵĸ���
//
//	printf("%d", ret);
//
//
//
//	return 0;
//}

//register
//int main()
//{
//	//�������ã��Ž��Ĵ�����������
//	register int a = 10;
//
//	return 0;
//}

//typedef ����������

//typedef unsigned int uint;
//int main() {
//	unsigned int age;
//	uint age2;
//
//	return 0;
//}

//staic ��̬��
//�����÷�
//1.

//BC101�༶�ɼ��������

//int main() {
//	//������ѭ�������
//	//����ѭ��������
//	double arr[] = { 0.0 };
//	printf("������ɼ���");
//
//		for (int i = 0; i < 25; i++) {
//			while (scanf("%lf", &arr[i]) != EOF);
//		}
// 
//	//ѭ�������ͨ��if��֧������\n
//	for (int a = 0; a < 25; a++) {
//		if (a % 4 != 0) {
//			printf("%lf", arr[a]);
//		}
//		else 
//			printf("%lf", arr[a]);
//		printf("\n");
//	}
//
//	return 0;
//}
#include<stdio.h>

int main() {
    float a, b, c, d, e;
    while (scanf("%f%f%f%f%f", &a, &b, &c, &d, &e)!=EOF) 
    {
        printf("%.1f %.1f %.1f %.1f %.1f %.1f\n", a, b, c, d, e, a + b + c + d + e);
    }
    return 0;
}