/*剑指 Offer 17. 打印从1到最大的n位数
输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。

示例 1:

输入: n = 1
输出: [1,2,3,4,5,6,7,8,9]*/
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