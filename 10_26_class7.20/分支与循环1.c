#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main() {
//    for (int i = 1; i < 100; i+=2) {
//        printf("%d ", i);
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int main() {
//	for (int i = 0; i <= 100; i++) {
//		if (i % 2 == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main() {
	int w = 0;
	while (scanf("%d", &w) != EOF) {
		switch (w)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	}
	return 0;
}