#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//作业1第5题
//scanf的返回值是输入值的个数
//int main()
//{
//    int iq = 0;
//    //printf("请输入你的智商：")
//    while (scanf("%d", &iq) != EOF) {//用户输入数字  //多组输入
//        if (iq >= 140) {   //选择分支判断iq的值
//            printf("Genius");
//
//        }
//    }
//    return 0;
//}

//int main() {
//	int x, y = 0;
//	scanf("%d", &x);
//	if (x < 0) {
//		y = 1;
//	}
//	else if(x==0){
//		y = 0;
//	}
//	else {
//		y = -1;
//	}
//	printf("%d", y);
//	return 0;
//}

//函数
//数学f(x)
//z = f(x, y);
#include <stdio.h>
//int add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//scanf("%d %d",&num1,&num2);
//	scanf("%d %d",&num1,&num2);
//	sum = add(num1, num2);
//	//printf("%d", num1 + num2);
//    printf("%d",sum);
//	//用函数add()实现
//	add(num1, num2);
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,34,4 };//不完全初始化，剩下的默认为0
//	char ch[4] = { 'e' };//不完全初始化，剩下默认为\0
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <=9; i++) {
//		printf("%d ", arr1[i]);
//
//	}
//
//	return 0;
//}

//操作符
//int main() {
//	int a = 17 / 4;
//	int b = 17 % 4;
//	double n = 17 / 4.0;  //操作符/两个数至少有一个是浮点数，才能进行浮点数运算
//
//	return 0;
//}
//
//int main()
//{
//	int flag = 5;
//	if (flag) {   //5非零为真，进入选择语句
//		printf("hehe");
//	}
//	if (!flag) {  //!逻辑反为假，不进入
//		printf("haha");
//	}
//	return 0;
//}