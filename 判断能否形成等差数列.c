/*1502. �ж��ܷ��γɵȲ�����
����һ���������� arr ��

���һ�������У�������������Ĳ��ܵ���ͬһ����������ô������оͳ�Ϊ �Ȳ����� ��

��������������������γɵȲ����У��뷵�� true �����򣬷��� false ��

 

ʾ�� 1��

���룺arr = [3,5,1]
�����true
���ͣ���������������õ� [1,3,5] ���� [5,3,1] ��������������Ĳ�ֱ�Ϊ 2 �� -2 �������γɵȲ����С�
ʾ�� 2��

���룺arr = [1,2,4]
�����false
���ͣ��޷�ͨ����������õ��Ȳ����С�*/
int cmp(const void *a, const void *b)
{
    return *(int *)a-*(int *)b;
}
bool canMakeArithmeticProgression(int* arr, int arrSize)
{
   qsort(arr,arrSize,sizeof(int),cmp);
   int i;
   int diff = arr[1]-arr[0]; 
   for(i = 1; i < arrSize-1; i++)
   {
       if(arr[i+1]-arr[i] != diff)
       {
           return false;
       }
   }
   return true;

}