/*63. 不同路径 II
一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为“Start” ）。

机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为“Finish”）。

现在考虑网格中有障碍物。那么从左上角到右下角将会有多少条不同的路径？



网格中的障碍物和空位置分别用 1 和 0 来表示。

说明：m 和 n 的值均不超过 100。

示例 1:

输入:
[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]
输出: 2
解释:
3x3 网格的正中间有一个障碍物。
从左上角到右下角一共有 2 条不同的路径：
1. 向右 -> 向右 -> 向下 -> 向下
2. 向下 -> 向下 -> 向右 -> 向右
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
	printf("最后结果为%d\n",uniquePathsWithObstacles(grid,m,&n));

	return 0;
	
}