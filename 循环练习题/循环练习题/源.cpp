#define _CRT_SECURE_NO_WARNINGS 1

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    char arr1[] = "welcome to bit...";
//    char arr2[] = "#################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//    //whileѭ��ʵ��
//    while (left <= right)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    //forѭ��ʵ��
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


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳����򡣣�
////����2
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
//    Sleep(3000);// ��ͣ3s��ӡa
//    printf("%d", a);
//    return 0;
//}




//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    char arr1[] = "how are you?";
//    char arr2[] = "############";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n\n", arr2);
//    //whileѭ��ʵ��
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

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
#include <stdio.h>
#include <windows.h>
int main()
{
    char arr1[] = "How are you?";
    char arr2[] = "############";
    int left = 0;
    int right = strlen(arr1) - 1;
    printf("%s\n\n", arr2);
    //forѭ��ʵ��
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