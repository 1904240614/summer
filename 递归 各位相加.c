/*258. ��λ���
����һ���Ǹ����� num������������λ�ϵ�������ӣ�ֱ�����Ϊһλ����

ʾ��:

����: 38
���: 2 
����: ��λ��ӵĹ���Ϊ��3 + 8 = 11, 1 + 1 = 2�� ���� 2 ��һλ�������Է��� 2��*/
#include<stdio.h>
int addDigits(int num)
{
    return (num-1)%9+1;
}
int main()
{
	int n;
	scanf("%d",&n);

	printf("%d",addDigits(n));

	return 0;
}