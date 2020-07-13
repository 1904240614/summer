#include<stdio.h>
void fun(int a,int b,int *x,int *y)
{
    int t;
    fun(b,a%b,x,y);
    t = *x;
    *x = *y;
    *y = t-a/b*(*y);
}

int main()
{
    int a,b;
    int x,y;
    scanf("%d %d",&a,&b);
    fun(a,b,&x,&y);
    while(x < 0)
	{
		x = x+b;
	}
    printf("%d\n",x);
    return 0;
}

