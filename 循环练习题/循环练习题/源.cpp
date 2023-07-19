#define _CRT_SECURE_NO_WARNINGS 1

//编写代码，演示多个字符从两端移动，向中间汇聚。
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    char arr1[] = "welcome to bit...";
//    char arr2[] = "#################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//    //while循环实现
//    while (left <= right)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    //for循环实现
//    for (left = 0, right = strlen(arr1) - 1;
//        left <= right;
//        left++, right--)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//    }
//    return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。）
////代码2
//#include<string.h>
//int main()
//{
//    char psw[10] = "";
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; ++i)
//    {
//        printf("please input:");
//        scanf("%s", psw);
//        if (strcmp(psw, "password") == 0)
//            break;
//    }
//    if (i == 3)
//        printf("exit\n");
//    else
//        printf("log in\n");
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//    int a = 100;
//    Sleep(3000);// 滞停3s打印a
//    printf("%d", a);
//    return 0;
//}




//编写代码，演示多个字符从两端移动，向中间汇聚。
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    char arr1[] = "how are you?";
//    char arr2[] = "############";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n\n", arr2);
//    //while循环实现
//    while (left <= right)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚。
#include <stdio.h>
#include <windows.h>
int main()
{
    char arr1[] = "How are you?";
    char arr2[] = "############";
    int left = 0;
    int right = strlen(arr1) - 1;
    printf("%s\n\n", arr2);
    //for循环实现
    for (left = 0, right = strlen(arr1) - 1;
        left <= right;
        left++, right--)
    {
        Sleep(1000);
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
    }
    return 0;
}