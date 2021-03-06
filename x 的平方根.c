/*69. x 的平方根
实现 int sqrt(int x) 函数。

计算并返回 x 的平方根，其中 x 是非负整数。

由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

示例 1:

输入: 4
输出: 2
示例 2:

输入: 8
输出: 2
说明: 8 的平方根是 2.82842..., 
     由于返回类型是整数，小数部分将被舍去。*/
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
/*牛顿法
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