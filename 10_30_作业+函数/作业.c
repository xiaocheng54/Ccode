#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////��ǰ100���ʽ��
//int main() 
//{
//	double sum = 0;
//	for(int i =1;i<=100;i++)
//	{
//		if (1 == i % 2) 
//		{
//			sum = sum + (1.0 / i);  //�������
//		}
//		else
//		{
//			sum = sum - (1.0 / i);  //ż�����
//		}
//	}
//	printf("%f", sum);
//	return 0;
//}

//��1-100��9�ĸ���
//#include<stdio.h>
//int main() 
//{
//	int count = 0;  // �Ƹ���
//	for(int i =0;i<=100;i++)  //1-100����
//	{
//		if(9==i%10)
//		{
//			count++;
//		}
//	}
//	printf("1-100����9�ĸ���Ϊ��%d", count);
//	return 0;
//}

//���ֲ���
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) /sizeof(arr[0]) - 1;//����Ԫ�ظ�������������ռ�ڴ�/����Ԫ����ռ�ڴ�
//	          							 //βԪ�������±�=Ԫ�ظ���-1
//	int mid = 0;
//	int target = 0;
//	scanf("%d", &target);
//	mid = left + (right - left) / 2;    //mid=��left+right�����ܻ��������
//
//	while (left <= right) {
//		if (arr[mid] > target)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] < target)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ������±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("û�ҵ�");
//	return 0;
//}
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
	char arr1[] ="########";
	char arr2[] = "bitabbit";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (1) {
		if (left <= right)
		{
			arr1[left] = arr2[left];
			arr1[right] = arr2[right];
			printf("%s\n", arr1);
			Sleep(1000);
			left++;
			right--;
		}
		if (left > right)
		break;
	}
	return 0;
}  */ 

#include<stdio.h>
#include"add.h"

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", add(a, b));
	

	return 0;
}