#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	//printf("%d\n", 100);
//	//printf("%d\n", sizeof(char));     //1
//	//printf("%d\n",sizeof(short));     //2  //\n换行符  转义字符  sizeof()操作符
//	//printf("%d\n", sizeof(int));      //4
//	//printf("%d\n", sizeof(long));     //4/8
//	//printf("%d\n", sizeof(long long)); //8
//	//printf("%d\n", sizeof(float));    //4
//	//printf("%d\n", sizeof(double));   //8
//	//printf("%d\n", sizeof(long double)); //8
//
//	//char ch = 'w';
//	//int weigh = 198;
//	//int salary = 20000;
//	//printf("%c\n", ch);
//	//printf("%d\n", weigh);
//	//printf("%d\n", salary);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    printf("V   V\n");
//    printf(" V V\n");
//    printf("  V");
//
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    printf("v  v\n v v\n  v");
//    return 0;
//}
#include<stdio.h>
int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j || j + i ==4)
                printf("v");
            else
                printf(" ");
        }
        printf("\n");
    }
}