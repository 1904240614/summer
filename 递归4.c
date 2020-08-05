/*50. Pow(x, n)
ʵ�� pow(x, n) �������� x �� n ���ݺ�����

ʾ�� 1:

����: 2.00000, 10
���: 1024.00000
ʾ�� 2:

����: 2.10000, 3
���: 9.26100
ʾ�� 3:

����: 2.00000, -2
���: 0.25000
����: 2-2 = 1/22 = 1/4 = 0.25*/
#include<stdio.h>
double myPow(double x, int n)
{
    if(n==1) return x;
    if(n==-1) return 1/x;
    if(n==0) return 1;
    double sum = myPow(x,n/2);
    return sum*sum*myPow(x,n%2);
}
int main()
{
	double x;
	int n;
	scanf("%d %lf",&n,&x);
	printf("%lf",mypow(x,n));
}