/*520. 检测大写字母
给定一个单词，你需要判断单词的大写使用是否正确。

我们定义，在以下情况时，单词的大写用法是正确的：

全部字母都是大写，比如"USA"。
单词中所有字母都不是大写，比如"leetcode"。
如果单词不只含有一个字母，只有首字母大写， 比如 "Google"。
否则，我们定义这个单词没有正确使用大写字母。

示例 1:

输入: "USA"
输出: True
示例 2:

输入: "FlaG"
输出: False*/
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