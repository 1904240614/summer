/*题目：合并数组
请实现一个函数，功能为合并两个升序数组为一个升序数组 */
#include <stdio.h>
#define M 2
#define N 2
int main()
{	
	int a[M]={1,3},b[N]={2,4};
	int i,j,k;
	int c[M+N];
	merge(a,b,c,M,N,&k);
	for(i=0;i<k;i++)
		printf("%d ",c[i]);
    return 0;
}
void merge(int *a,int *b,int *c,int m,int n,int *t)
{
	int i=0,j=0,k=0;
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++; 
		}
		else
		{
			if(a[i]>b[j])
			{
				c[k]=b[j];
				k++;
				j++;
			}	
			else
			{
				c[k]=a[i];
				k++;
				i++;
				j++;
			}
		}
	}
	if(i==m)	
	{
		while(j<n)
		{
			c[k]=b[j];
         	k++;
			j++;
		}		
	}	
	else
	{
		while(i<m)
		{
			c[k]=a[i];
			k++;
			i++;	
		}	
	}	
	*t=k;
} 