#define _CRT_SECURE_NO_WARNINGS 1

//EOF 是文件的结束标志
//end of file

#include<stdio.h>

//int main() {
//	int a = 0;
//	int b = 0;
//	int ret = scanf("%d %d", &a, &b);
//	//scanf读取失败的时候会返回EOF(-1)
//	//如果读取成功返回的是读取到数据的个数
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
//	//建议作用，放进寄存器，操作快
//	register int a = 10;
//
//	return 0;
//}

//typedef 类型重命名

//typedef unsigned int uint;
//int main() {
//	unsigned int age;
//	uint age2;
//
//	return 0;
//}

//staic 静态的
//三种用法
//1.

//BC101班级成绩输入输出

//int main() {
//	//用数组循环存五个
//	//再用循环存五组
//	double arr[] = { 0.0 };
//	printf("请输入成绩：");
//
//		for (int i = 0; i < 25; i++) {
//			while (scanf("%lf", &arr[i]) != EOF);
//		}
// 
//	//循环输出，通过if分支来换行\n
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