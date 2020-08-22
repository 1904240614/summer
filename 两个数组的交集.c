/*349. ��������Ľ���
�����������飬��дһ���������������ǵĽ�����

 

ʾ�� 1��

���룺nums1 = [1,2,2,1], nums2 = [2,2]
�����[2]
ʾ�� 2��

���룺nums1 = [4,9,5], nums2 = [9,4,9,8,4]
�����[9,4]*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    if (!nums1 || !nums2) {
        *returnSize = 0;
        return NULL;
    }
    int *ans = (int *) malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int count = 0;
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);

    for (int i = 0, j = 0; i < nums1Size && j < nums2Size; ) {
        if (nums1[i] < nums2[j])
            i++;
        else if (nums1[i] > nums2[j])
            j++;
        else {
            ans[count++] = nums1[i];
            i++;
            j++;
            if (count > 1 && ans[count-1] == ans[count-2])
                count--;
        }
    }
    *returnSize = count;
    return ans;
}
