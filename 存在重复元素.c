/*
217. �����ظ�Ԫ��
����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�

�������һֵ�������г����������Σ��������� true �����������ÿ��Ԫ�ض�����ͬ���򷵻� false ��

 

ʾ�� 1:

����: [1,2,3,1]
���: true
ʾ�� 2:

����: [1,2,3,4]
���: false
ʾ�� 3:

����: [1,1,1,3,3,4,3,2,4,2]
���: true
*/
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
bool containsDuplicate(int* nums, int numsSize)
{
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i = 0;i < numsSize-1; i++)
    {
        if(nums[i] == nums[i+1])
        {
            return true;
        }
    }
    return false;
}