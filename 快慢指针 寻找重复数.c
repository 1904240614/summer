/*287. Ѱ���ظ���
����һ������ n + 1 ������������ nums�������ֶ��� 1 �� n ֮�䣨���� 1 �� n������֪���ٴ���һ���ظ�������������ֻ��һ���ظ����������ҳ�����ظ�������

ʾ�� 1:

����: [1,3,4,2,2]
���: 2
ʾ�� 2:

����: [3,1,3,4,2]
���: 3*/
int findDuplicate(int* nums, int numsSize)
{
    int slow = 0,fast = 0;
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow!=fast);
    slow = 0;
    while(slow!=fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main()
{
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",findDuplicate(a,n));

	return 0;
}