/*53. ��������
����һ���������� nums ���ҵ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡�

ʾ��:

����: [-2,1,-3,4,-1,2,1,-5,4]
���: 6
����: ���������� [4,-1,2,1] �ĺ����Ϊ 6��*/
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