#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,area;
	scanf("%f %f %f",&a,&b,&c);
	p = 1.0/2*(a+b+c);
	if(a+b>c&&b+c>a&&c+a>b)
	{
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("area = %.2f",area);
	}
	return 0;

}