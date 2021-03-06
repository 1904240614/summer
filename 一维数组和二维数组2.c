/*7-55 矩阵运算 (20分)
给定一个n×n的方阵，本题要求计算该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。副对角线为从矩阵的右上角至左下角的连线。

输入格式:
输入第一行给出正整数n（1<n≤10）；随后n行，每行给出n个整数，其间以空格分隔。

输出格式:
在一行中给出该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。*/
#include<stdio.h>
int main()
{
    int n;
	int sum=0;
    scanf("%d",&n);
    int a[11][11];
    for(int i=0;i<n;i++)
	{
        for(int j=0;j<n;j++)
		{
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
	{
        for(int j=0;j<n;j++)
		{
            if(i+j!=n-1 && j!=n-1 && i!=n-1)
			{
                sum+=a[i][j];
            }        
        }
    }
    printf("%d",sum);
    return 0;
}