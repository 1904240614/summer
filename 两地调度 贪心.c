/*1029. ���ص���
��˾�ƻ����� 2N �ˡ��� i �˷��� A �еķ���Ϊ costs[i][0]������ B �еķ���Ϊ costs[i][1]��

���ؽ�ÿ���˶��ɵ�ĳ�����е���ͷ��ã�Ҫ��ÿ�����ж��� N �˵ִ

 

ʾ����

���룺[[10,20],[30,200],[400,50],[30,20]]
�����110
���ͣ�
��һ����ȥ A �У�����Ϊ 10��
�ڶ�����ȥ A �У�����Ϊ 30��
��������ȥ B �У�����Ϊ 50��
���ĸ���ȥ B �У�����Ϊ 20��

����ܷ���Ϊ 10 + 30 + 50 + 20 = 110��ÿ�����ж���һ����������ԡ�*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
     return(*(int *)a-*(int *)b);
}
int twoCitySchedCost(int** costs, int costsSize, int* costsColSize)
{
    int sum = 0;
    int a[costsSize+1];
    for(int i = 0;i < costsSize; i++)
    {
        sum = sum+costs[i][1];
        a[i] = costs[i][0]-costs[i][1];
    }
    qsort(a,costsSize,sizeof(int),cmp);
    for(int i = 0;i < costsSize/2;i++)
    {
        sum = sum+a[i];
    }
    return sum;
}
int main()
{
	int a[100][100];
	int m,n;
	scanf("%d %d",&m,&n);
    for(int i = 0;i < m; i++)
	{
		for(int j = 0;j < n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int flag = twoCitySchedCost(a,m,&n);
	printf("%d",flag);

	return 0;
 
}