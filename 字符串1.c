/*709. 转换成小写字母
实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。

 

示例 1：

输入: "Hello"
输出: "hello"
示例 2：

输入: "here"
输出: "here"
示例 3：

输入: "LOVELY"
输出: "lovely"*/
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