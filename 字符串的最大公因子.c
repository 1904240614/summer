/*1071. 字符串的最大公因子
对于字符串 S 和 T，只有在 S = T + ... + T（T 与自身连接 1 次或多次）时，我们才认定 “T 能除尽 S”。

返回最长字符串 X，要求满足 X 能除尽 str1 且 X 能除尽 str2。

 

示例 1：

输入：str1 = "ABCABC", str2 = "ABC"
输出："ABC"
示例 2：

输入：str1 = "ABABAB", str2 = "ABAB"
输出："AB"
示例 3：

输入：str1 = "LEET", str2 = "CODE"
输出：""*/
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