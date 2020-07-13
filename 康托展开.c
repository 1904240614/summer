#include<stdio.h>
static const int FAC[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
int cantor(int a[], int n)
{
	int i,j,x = 0;
	for (i = 0; i < n; ++i) 
	{
		int count = 0; 
		for (j = i + 1; j < n; ++j) 
		{
			if (a[j] < a[i])
				count++;
		}
		x = x + FAC[n - i - 1] * count;
	}
	return x; 
}

int main()  
{  
    int a[] = {3, 5, 7, 4, 1, 2, 9, 6, 8};  
    printf("¿µÍÐÕ¹¿ª:%d\n", 1 + cantor(a, sizeof(a) / sizeof(*a)));
}  



