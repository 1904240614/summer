/*��������
��Ŀ����
����һ���ַ���������С�ڵ���200��Ȼ���������������*/
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