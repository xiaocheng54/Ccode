#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() 
//{
////����Ԫ�ظ���=������ռ�ڴ�/����Ԫ����ռ�ڴ� n
//												 //�������һ��Ԫ��С��=Ԫ�ظ���-1
//	int mid = 0; //��¼�м�Ԫ���±꣬���ڱȽ�
//	int target = 0;  //��Ҫ���ҵ���
//	while (scanf("%d", &target) != EOF) {
//		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//		int left = 0;
//		int right = sizeof(arr) / sizeof(arr[0]) - 1;
//		while (left <= right) {
//			/*mid = (left + right) / 2;*/
//			mid = left + (right - left) / 2;  //����midԽ��
//			if (arr[mid] < target)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > target)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("�ҵ��ˣ��±��ǣ�%d", mid);
//				break;
//			}
//		}
//		if (left > right)
//			printf("�Ҳ���");
//	}
//	return 0;
//}

//�ػ�С����
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1) {
		printf("��ĵ��Խ���60���ڹػ������룺������  ȡ���ػ���\n");
		scanf("%s", &input);
		if (0 == strcmp(input, "������")) {
			system("shutdown -a");
			printf("�õģ�����������Ϊ��ȡ���ػ�>_<");
			break;
		}
	}
	return 0;
}