/*42. 接雨水
给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。



上面是由数组 [0,1,0,2,1,0,1,3,2,1,2,1] 表示的高度图，在这种情况下，可以接 6 个单位的雨水（蓝色部分表示雨水）。 感谢 Marcos 贡献此图。

示例:

输入: [0,1,0,2,1,0,1,3,2,1,2,1]
输出: 6*/
#include<stdio.h>
#include<string.h>
int trap(int* height, int heightSize)
{
    int l = 0, r = heightSize - 1;
    int ans = 0;
    int l_max = 0, r_max = 0;
    while (l < r) {
        if (height[l] < height[r]) {
            if(height[l]>=l_max)
            {
                l_max = height[l];
            }
            else
            {
                ans = ans+(l_max-height[l]);
            }
            ++l;
        }
        else 
        {
            if(height[r]>=r_max)
            {
                r_max = height[r];
            }
            else
            {
                ans = ans+(r_max-height[r]);
            }
            --r;
        }
    }
    return ans;
}
int main()
{
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",trap(a,n));

	return 0;
}


