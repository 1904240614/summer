/*��ָ Offer 17. ��ӡ��1������nλ��
�������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��

ʾ�� 1:

����: n = 1
���: [1,2,3,4,5,6,7,8,9]*/
#include<stdio.h>
#include<math.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* printNumbers(int n, int* returnSize)
{
    int size = pow(10,n)-1,i;
    int *res = (int*)malloc(sizeof(int)*size);
    for(i = 0;i < size;i++)
    {
        res[i] = i+1;
    } 
	* returnSize = size;
    return res;  
}
int main()
{
	int n,i;
	scanf("%d",&n);
}