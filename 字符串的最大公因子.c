/*1071. �ַ������������
�����ַ��� S �� T��ֻ���� S = T + ... + T��T ���������� 1 �λ��Σ�ʱ�����ǲ��϶� ��T �ܳ��� S����

������ַ��� X��Ҫ������ X �ܳ��� str1 �� X �ܳ��� str2��

 

ʾ�� 1��

���룺str1 = "ABCABC", str2 = "ABC"
�����"ABC"
ʾ�� 2��

���룺str1 = "ABABAB", str2 = "ABAB"
�����"AB"
ʾ�� 3��

���룺str1 = "LEET", str2 = "CODE"
�����""*/
#include<stdio.h>
#include<string.h>
char * gcdOfStrings(char * str1, char * str2)
{
    char *p1 = strlen(str1) > strlen(str2) ? str1 : str2;
    char *p2 = strlen(str1) > strlen(str2) ? str2 : str1;
    if(strcmp(p1,p2)==0)
    {
        return p2;
    }
    if(strncmp(p1,p2,strlen(p2))!=0)
    {
        return "";
    }
    return gcdOfStrings(p1+strlen(p2),p2);
}
int main()
{
	char a[100],b[100];
	scanf("%s %s",a,b);
	printf("%s",gcdOfStrings(a,b));

	return 0;
}