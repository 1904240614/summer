/*367. ��Ч����ȫƽ����
����һ�������� num����дһ����������� num ��һ����ȫƽ�������򷵻� True�����򷵻� False��

˵������Ҫʹ���κ����õĿ⺯������  sqrt��

ʾ�� 1��

���룺16
�����True
ʾ�� 2��

���룺14
�����False*/
#include<stdio.h>
bool isPerfectSquare(int num)
{
    if(num<2) return true;
    long x = num/2;
    while(x*x>num)
    {
        x = (x+num/x)/2;
    }
    return x*x == num;
}
int main()
{
	int num;
	scanf("%d",&num);
	if(isPerfectSquare(num))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}