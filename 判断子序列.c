/*392. �ж�������
�����ַ��� s �� t ���ж� s �Ƿ�Ϊ t �������С�

�������Ϊ s �� t �н�����Ӣ��Сд��ĸ���ַ��� t ���ܻ�ܳ������� ~= 500,000������ s �Ǹ����ַ��������� <=100����

�ַ�����һ����������ԭʼ�ַ���ɾ��һЩ��Ҳ���Բ�ɾ�����ַ������ı�ʣ���ַ����λ���γɵ����ַ����������磬"ace"��"abcde"��һ�������У���"aec"���ǣ���

ʾ�� 1:
s = "abc", t = "ahbgdc"

���� true.

ʾ�� 2:
s = "axc", t = "ahbgdc"

���� false.

������ս :

����д�������� S������S1, S2, ... , Sk ���� k >= 10�ڣ�����Ҫ���μ�������Ƿ�Ϊ T �������С�����������£���������ı���룿*/
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
bool isSubsequence(char * s, char * t)
{
    int slen = strlen(s),tlen = strlen(t),i=0,j=0;
    while(i<slen&&j<tlen)
    {
        if(s[i] == t[j])
        {
            i++;
        }
        j++;
    }
    return i == slen;
}
int mian()
{
	char s[100],t[500000];
	gets(s);
	getchar();
	gets(t);
	getchar();
	puts("isSubsequence(s,t)");
}