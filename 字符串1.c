/*709. ת����Сд��ĸ
ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str���������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ�����

 

ʾ�� 1��

����: "Hello"
���: "hello"
ʾ�� 2��

����: "here"
���: "here"
ʾ�� 3��

����: "LOVELY"
���: "lovely"*/
#include<stdio.h>
char * toLowerCase(char * str)
{
    int i = 0;
    while(*str)
    {
        if('A'<=str[i]&&str[i]<='Z')
        {
            str[i] = str[i]-'A'+'a';
        }
        i++;
    }   
    return str;
}
int main()
{
	char a[100];
	scanf("%s",a);
	printf("%s",toLowerCase(a));
}