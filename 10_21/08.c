#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//struct Stu 
//{
//	char name[20];
//	char sex[5];
//	int age;
//};
//
//int main() 
//{
//	int num;
//	struct Stu s = { "张三","男",20 };
//	printf("%s\n", s.name);
//	printf("%s\n", s.sex);
//	printf("%d\n", s.age);
//
//
//   
//
//	return 0;
//}

int main() {
	int num = 0;
	while (scanf("%d", &num) != EOF) {
		switch (num) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
			printf("睡觉日\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;

		}
	}


	return 0;
}