/*64. ��С·����
����һ�������Ǹ������� m x n �������ҳ�һ�������Ͻǵ����½ǵ�·����ʹ��·���ϵ������ܺ�Ϊ��С��

˵����ÿ��ֻ�����»��������ƶ�һ����

ʾ��:

����:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
���: 7
����: ��Ϊ·�� 1��3��1��1��1 ���ܺ���С��*/
#include<stdio.h>
int minPathSum(int** grid, int gridSize, int* gridColSize) 
{
    int rows = gridSize, columns = gridColSize[0];
    if (rows == 0 || columns == 0) 
    {
        return 0;
    }
    int dp[rows][columns];
    dp[0][0] = grid[0][0];
    for (int i = 1; i < rows; i++) 
    {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    for (int j = 1; j < columns; j++) 
    {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }
    for (int i = 1; i < rows; i++) 
    {
        for (int j = 1; j < columns; j++)
        {
            dp[i][j] = fmin(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }
    return dp[rows - 1][columns - 1];
}
int main()
{
	int grid[10][10];
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++)
        {
			scanf("%d",&grid[i][j]);
		}
	}
	printf("��С·����%d\n",minPathSum(grid,m,&n));

	return 0;
	
}