/*9. ������
�ж��Ƿ��ǻ�������
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i=0,j=0;
    printf("�������ַ���:\n");
    scanf("%s",&a);
    while(a[i]!='\0')
    i++;
    i--;
    for(;j<=i;i--,j++)
   	{
    	if(a[i]!=a[j])
    	{
    			break;
    	}
   	}
    if(j<=i)
   	{
    	printf("���ǻ��Ĵ�\n",a);
    }
    else
   	{
    	printf("�ǻ��Ĵ�\n",a);
    }
}

