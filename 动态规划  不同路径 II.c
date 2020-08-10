/*63. ��ͬ·�� II
һ��������λ��һ�� m x n ��������Ͻ� ����ʼ������ͼ�б��Ϊ��Start�� ����

������ÿ��ֻ�����»��������ƶ�һ������������ͼ�ﵽ��������½ǣ�����ͼ�б��Ϊ��Finish������

���ڿ������������ϰ����ô�����Ͻǵ����½ǽ����ж�������ͬ��·����



�����е��ϰ���Ϳ�λ�÷ֱ��� 1 �� 0 ����ʾ��

˵����m �� n ��ֵ�������� 100��

ʾ�� 1:

����:
[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]
���: 2
����:
3x3 ��������м���һ���ϰ��
�����Ͻǵ����½�һ���� 2 ����ͬ��·����
1. ���� -> ���� -> ���� -> ����
2. ���� -> ���� -> ���� -> ����
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize)
{
    int n = obstacleGridSize,m = obstacleGridColSize[0];
    int f[m];
    memset(f,0,sizeof(f));
    f[0] = (obstacleGrid[0][0]==0);
    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < m; j++)
        {
            if(obstacleGrid[i][j]==1)
            {
                f[j] = 0;
                continue;
            }
            if (j - 1 >= 0 && obstacleGrid[i][j - 1] == 0) 
            {
                f[j] += f[j - 1];
            }
        }
    }
    return f[m-1];
    
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
	printf("�����Ϊ%d\n",uniquePathsWithObstacles(grid,m,&n));

	return 0;
	
}