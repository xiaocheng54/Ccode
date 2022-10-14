#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int iq = 0;
    //printf("请输入你的智商：")
    scanf("%d", &iq);//用户输入数字
    if (iq >= 140) {   //选择分支判断iq的值
        printf("Genius");
    }

    return 0;
}