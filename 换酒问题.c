/*1518. ��������
С�����������ڴ������� numExchange ���վ�ƿ���Զһ�һƿ�¾ơ��㹺���� numBottles ƿ�ơ�

����ȵ��˾�ƿ�еľƣ���ô��ƿ�ͻ��ɿյġ�

������� ��� �ܺȵ�����ƿ�ơ�

 

ʾ�� 1��



���룺numBottles = 9, numExchange = 3
�����13
���ͣ�������� 3 ���վ�ƿ�һ� 1 ƿ�ơ�
��������ܺȵ� 9 + 3 + 1 = 13 ƿ�ơ�*/
#include<stdio.h>
int numWaterBottles(int numBottles, int numExchange)
{
    return (numBottles*numExchange-1)/(numExchange-1);
}
int main()
{
	int n,e;
	scanf("%d %d",&n,&e);
	int flag = numWaterBottles(n,e);
	printf("%d",flag);

	return 0;
}