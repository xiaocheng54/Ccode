#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个数字，我帮你计算：\n");
//	scanf("%d %d", &num1, &num2);
//	printf("%d+%d=%d", num1, num2, num1 + num2);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	{
//		int a = 102;  //局部变量a作用域在{}内
//	}
//	printf("%d", a);
//	return 0;
//
//}

#include<stdio.h>
//
//int g_a = 2000;
//void test() {
//	printf("test:%d\n",g_a);
//}
//
//int main()
//{
//	printf("test:%d\n",g_a);
//	test();
//
//	return 0;
//}
//extern int g_a;
//int main() 
//{
//	printf("test:%d\n", g_a);
//}


//2.const
//int main() {
//	//3.14;
//	//'a';
//	//"abcd";//这些都是字面常量
//	////const int num = 100;
//
//	//printf("%d", num);
//
//	int arr[5] = { 0 };
//
//
//	return 0;
//
//}

//3.宏定义
//#define M 100
//int main() {
//	printf("%d", M);
//	int arr[M] = { 2 };
//	return 0;
//}

//4.枚举常量

//int main()
//{
//	printf("abc\ndef");
//	printf("c:\code\test\.c\n");
//	return 0;
//}

//int main()
//{
//    //printf("\a");//警告字符。alarm
//    //printf("%s","\"");
//    printf("%c\n",'\073');//打印;出来，ascll码59
//    printf("%c\n", '\x46');
//}

//注释
//int main() {
//	int a = 10; //创建一个整型变量a，赋值于10
//
//	return 0;
//}

//6.选择语句<分支选择>

//int main()
//{
//	int input = 0;
//	printf("加入比特，你要好好学习吗？(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("好好努力，拿好offer");
//	}
//	else if (input == 0)
//	{
//		printf("卖红薯");
//	}
//	else
//		printf("输入错误");
//	return 0;
//	
//}

//int main()
//{
//	int line = 0;
//	while (line <= 200) {
//		printf("敲代码\n");
//		line++;
//	}
//	if (line == 201) {
//		printf("头发，没了");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}
