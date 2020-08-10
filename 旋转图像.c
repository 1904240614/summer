/*48. ��תͼ��
����һ�� n �� n �Ķ�ά�����ʾһ��ͼ��

��ͼ��˳ʱ����ת 90 �ȡ�

˵����

�������ԭ����תͼ������ζ������Ҫֱ���޸�����Ķ�ά�����벻Ҫʹ����һ����������תͼ��

ʾ�� 1:

���� matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

ԭ����ת�������ʹ���Ϊ:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
ʾ�� 2:

���� matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
], 

ԭ����ת�������ʹ���Ϊ:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]*/
#include<stdio.h>
void rotate(int** matrix, int matrixSize, int* matrixColSize)
{
    int n = matrixSize;
    for(int i = 0;i < matrixSize; i++)
    {
        for(int j = i;j < matrixColSize[0]; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int i = 0;i < matrixSize; i++)
    {
        for(int j = 0;j < matrixColSize[0]/2;j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n-j-1];
            matrix[i][n-j-1] = temp;
        }
    }
    return matrix;
}
int main()
{
	int a[10][10];
	int i,j,n;
	int count = 0;
	scanf("%d",&n);
	for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
        {
			scanf("%d",a[i][j]);
		}
	}
	rotate(a,n,&n);
	for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
        {
			printf("%d ",a[i][j]);
			count++;
			if(count == 3)
			{
				printf("\n");
			}
		}
	}
	return 0;
	
}