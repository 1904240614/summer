/*数组逆置
题目描述
输入一个字符串，长度小于等于200，然后将数组逆置输出。*/
#include<stdio.h>
int main()
{
    char s[200],*p;
    scanf("%s",s);
    p = s+strlen(s)-1;
    for(int i = 0;i < strlen(s);i++)
    {
        printf("%c",*p--);
    }
    
}