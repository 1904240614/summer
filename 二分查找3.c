/*441. ����Ӳ��
���ܹ��� n öӲ�ң�����Ҫ�����ǰڳ�һ��������״���� k �оͱ��������� k öӲ�ҡ�

����һ������ n���ҳ����γ����������е���������

n ��һ���Ǹ�������������32λ�з������͵ķ�Χ�ڡ�

ʾ�� 1:

n = 5

Ӳ�ҿ����г����¼���:
��
�� ��
�� ��

��Ϊ�����в����������Է���2.
ʾ�� 2:

n = 8

Ӳ�ҿ����г����¼���:
��
�� ��
�� �� ��
�� ��

��Ϊ�����в����������Է���3.*/
#include<stdio.h>
int arrangeCoins(int n)
{
    int low = 1,high = n;
    while(low<=high)
    {
        long mid = low+(high-low)/2;
        long sum = mid*(mid+1)/2;
        if(sum<n)
        {
            low = mid+1;
        }
        else if(sum == n)
        {
            return mid;
        }
        else
        {
            high = mid-1;
        }
    }        
    return low-1;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",arrangeCoins(n));

	return 0;
}
