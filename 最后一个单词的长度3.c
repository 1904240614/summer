/*58. ���һ�����ʵĳ���
����һ����������Сд��ĸ�Ϳո� ' ' ���ַ��� s�����������һ�����ʵĳ��ȡ�����ַ����������ҹ�����ʾ����ô���һ�����ʾ��������ֵĵ��ʡ�

������������һ�����ʣ��뷵�� 0 ��

˵����һ��������ָ������ĸ��ɡ��������κοո��ַ��� ������ַ�����

 

ʾ��:

����: "Hello World"
���: 5*/
#include<stdio.h>
#include<string.h>
int lengthOfLastWord(char * s)
{
    int len = strlen(s),count = 0;
    if(len==0) return 0;
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]!=' ') count++;
        if(s[i]==' '&&count>0) break;
    }
    return count;
}
int main()
{
	char s[100];
	scanf("%s",s);
	printf("%d",lengthOfLastWord(s));

	return 0;
}