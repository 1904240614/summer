/*42. ����ˮ
���� n ���Ǹ�������ʾÿ�����Ϊ 1 �����ӵĸ߶�ͼ�����㰴�����е����ӣ�����֮���ܽӶ�����ˮ��



������������ [0,1,0,2,1,0,1,3,2,1,2,1] ��ʾ�ĸ߶�ͼ������������£����Խ� 6 ����λ����ˮ����ɫ���ֱ�ʾ��ˮ���� ��л Marcos ���״�ͼ��

ʾ��:

����: [0,1,0,2,1,0,1,3,2,1,2,1]
���: 6*/
#include<stdio.h>
#include<string.h>
int trap(int* height, int heightSize)
{
    int l = 0, r = heightSize - 1;
    int ans = 0;
    int l_max = 0, r_max = 0;
    while (l < r) {
        if (height[l] < height[r]) {
            if(height[l]>=l_max)
            {
                l_max = height[l];
            }
            else
            {
                ans = ans+(l_max-height[l]);
            }
            ++l;
        }
        else 
        {
            if(height[r]>=r_max)
            {
                r_max = height[r];
            }
            else
            {
                ans = ans+(r_max-height[r]);
            }
            --r;
        }
    }
    return ans;
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
	printf("%d",trap(a,n));

	return 0;
}


