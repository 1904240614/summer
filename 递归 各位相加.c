/*258. 各位相加
给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。

示例:

输入: 38
输出: 2 
解释: 各位相加的过程为：3 + 8 = 11, 1 + 1 = 2。 由于 2 是一位数，所以返回 2。*/
#include<stdio.h>
int addDigits(int num)
{
    return (num-1)%9+1;
}
int main()
{
	int n;
	scanf("%d",&n);

	printf("%d",addDigits(n));

	return 0;
}