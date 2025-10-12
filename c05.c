 //5. Move all negative numbers to beginning and positive to end
#include<stdio.h>
int main()
{
  int n;
  printf("enter n : ");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int k=0;
  for(int i=0;i<n;i++)
{
    if(a[i]<0)
    {
    
    int temp=a[i];
    a[i]=a[k];
    a[k]=temp;
    k++;
    } 
}
for(int k=0;k<n;k++)
{
    printf("%d\t",a[k]);
}
  
}