/*��ָ Offer 49. ����
���ǰ�ֻ���������� 2��3 �� 5 ��������������Ugly Number�����󰴴�С�����˳��ĵ� n ��������

 

ʾ��:

����: n = 10
���: 12
����: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 ��ǰ 10 ��������*/
#include<stdio.h>
#define min(a, b) a>b?b:a

int nthUglyNumber(int n){
    int *dp = (int *)malloc(sizeof(int) * n),i;
    int a = 0;
    int b = 0;
    int c = 0;
    dp[0] = 1;
    for (i = 1; i < n; i++)
    {
        int temp_1 =  dp[a] * 2;
        int temp_2 = dp[b] * 3;
        int temp_3 = dp[c] * 5;
        dp[i] = min((min(temp_1, temp_2)), temp_3);
        if (dp[i]== temp_1) a++;
        if (dp[i]== temp_2) b++;
        if (dp[i]== temp_3) c++;
    }
    return dp[n - 1];
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",nthUglyNumber(n));

	return 0;
}