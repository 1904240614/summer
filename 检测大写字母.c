/*520. ����д��ĸ
����һ�����ʣ�����Ҫ�жϵ��ʵĴ�дʹ���Ƿ���ȷ��

���Ƕ��壬���������ʱ�����ʵĴ�д�÷�����ȷ�ģ�

ȫ����ĸ���Ǵ�д������"USA"��
������������ĸ�����Ǵ�д������"leetcode"��
������ʲ�ֻ����һ����ĸ��ֻ������ĸ��д�� ���� "Google"��
�������Ƕ����������û����ȷʹ�ô�д��ĸ��

ʾ�� 1:

����: "USA"
���: True
ʾ�� 2:

����: "FlaG"
���: False*/
#include<stdio.h>
#include<stdbool.h>
bool detectCapitalUse(char * word)
{
    int count = 0;
    for(int i = 0;i < strlen(word); i++)
    {
        if('A'<=word[i]&&word[i]<='Z')
        {
            count++;
        }
    }
    if(count == strlen(word)||count == 0)
    {
        return true;
    }
    if(count == 1&&word[0]<='Z'&&word[0]>='A')
    {
        return true;
    }
    return false;
}
int main()
{
	char s[50];
	scanf("%s",s);
	if(detectCapitalUse(s))
	{
		printf("true");
	}
	else
		printf("false");
	return 0;
}