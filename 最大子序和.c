/*53. 最大子序和
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

示例:

输入: [-2,1,-3,4,-1,2,1,-5,4]
输出: 6
解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。*/
#include<stdio.h>
int maxSubArray(int* nums, int numsSize)
{
    int sum=-2147483647,t = 0,i;
    for(i=0;i<numsSize;i++)
    {
        t = t+nums[i];
        if(sum<t) sum = t;
        if(t<0) t = 0;
    }      
    return sum;
}
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("%d",maxSubArray(a,n));
	return 0;
}