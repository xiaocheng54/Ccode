#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//��ӡ1-100֮�������

//int main()
//{
//    for (int i = 0; i <= 100; i++) {
//        if (i % 3 != 0) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//	for (int i = 3; i <= 100; i+=3) {
//		
//		printf("%d ", i);
//	}
//	return 0;
//}

//д���뽫�������������Ӵ�С�����

//���磺
//���룺2 3 1

//�����3 2 1

//ͨ��swap����ʵ����������

//void swap(int *x,int *y) {
//	int t = 0;
//
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//
//int main() {
//    int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//		//�����Ƚϣ�С�˾ͽ���
//		if (a < b) {
//			swap(&a, &b);
//		}
//		if (a < c) {
//			swap(&a, &c);
//		}
//		if (b < c) {
//			swap(&b, &c);
//		}
//		printf("%d %d %d", a, b, c);
//	}
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������

//int main() {
//	for (int x = 100; x <= 200; x++)    //100-200����
//	{
//		for (int i = 2; i <= x; i++)    //����2-200�ĳ���,�ֶ������ų�1�ĸ�����
//		{
//			if (x == i)
//			{
//				printf("%d ", x); //��x==iʱ�����x;�÷���ǰ�棬�����޷��������ֱ���˳�ѭ��
//			}
//			if ((x % i)==0)   //������������˳�ѭ��
//			{
//				break;
//			}
//
//		}
//	}
//}

// ��ӡ1000�굽2000��֮�������

//int main()
//{
//    for (int i = 1000; i <= 2000; i++)
//    {
//        if (i % 4 == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    printf("���У���Ҫ�ú�Ŭ����(0/1)��");
//    while (scanf("%d", &n) != EOF) {
//        if (1 == n)
//        {
//            for (int i = 0; i <= 180; i++) {
//                if (180 == i) {
//                    printf("\n");
//                    printf("\n");
//                    printf("��ϲ���ϰ��ˣ�����");
//                }
//                else
//                    printf("Ŭ��Ŭ����Ŭ����");
//            }
//        }
//        else
//            printf("\n��שҲ�����õ�δ��~");
//    }
//    return 0;
//}

//���������������������������Լ��

//���磺

//���룺20 40

//�����20

//int main() {
//	int arr[11] = {0};
//	int max = 0;
//	for (int i = 0; i <= 10;i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i <= 10; i++) {
//		if (arr[i] < arr[i + 1]) 
//		{
//			max = arr[i + 1];
//		}
//	}
//	printf("%d", max);
//}
//int main()
//{
//	int a, b;
//	int i;
//	while (scanf("%d %d", &a, &b) != EOF) 
//	{
//			for (i=a<b?a:b; i > 1; i--)
//			{
//				if (a % i == 0 && b % i == 0)
//				{
//					printf("%d", i);
//					break;  //���������˳�ѭ��
//				}
//			}
//
//	}
//	return 0;
//}
int main() {
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9 ; j++) 
		{
			if(i<=j)  //�Ż��������ӡ�ظ��Ĳ���
			printf("%d*%d=%d ",i,j, i * j);
		}

	}
	return 0;
}
