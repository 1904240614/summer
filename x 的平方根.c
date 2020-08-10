/*69. x ��ƽ����
ʵ�� int sqrt(int x) ������

���㲢���� x ��ƽ���������� x �ǷǸ�������

���ڷ������������������ֻ���������Ĳ��֣�С�����ֽ�����ȥ��

ʾ�� 1:

����: 4
���: 2
ʾ�� 2:

����: 8
���: 2
˵��: 8 ��ƽ������ 2.82842..., 
     ���ڷ���������������С�����ֽ�����ȥ��*/
int mySqrt(int x)
{
    int i = 0, j = x, ans = -1;
    while (i <= j) 
    {
        int mid = i + (j - i) / 2;
        if ((long long)mid * mid <= x)
        {
            ans = mid;
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
        return ans;
}
/*ţ�ٷ�
int mySqrt(int x)
{
    long a = x;
    while(a*a>x)
    {
        a = (a+x/a)/2;
    }
    return (int)a;
}*/
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",mySqrt(x));

	return 0;
}