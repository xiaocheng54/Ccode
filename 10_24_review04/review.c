#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() {
//	typedef int a;  //将int重命名为a使用
//	a x = 0;
//	printf("%d", x);
//
//	return 0;
//}

//staic关键字
//1.修饰局部变量，延长局部变量生命周期
//2.修饰全局变量，使全局变量无法外链
//3.修饰函数，使函数无法外链
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

//#define 定义符号/宏

//#define  M 100
//
//int main() {
//	int a = M;
//	printf("%d\n", M);
//	printf("%d", a);
//
//	return 0;
//}
//2.define定义的宏

//int max(int x,int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//   //return (x>y?x:y);
//}

//#define max(x,y) (x>y?x:y)  //三目运算符  max（x,y）宏 (x>y?x:y)宏体
//
//int main() {
//	int a = 2;
//	int b = 0;
//	printf("%d", max(a, b));
//	return 0;
//}

//指针

int main() {
	int a = 1;
	printf("%p", &a);

	return 0;
}