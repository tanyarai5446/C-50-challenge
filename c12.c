// Count the number of occurrences of an element
#include<stdio.h>
int countOcc(int a[],int n,int target)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(target==a[i])
    count++;
  }
  return count;
}
int main()
{
    int a[]={1,2,3,1,4,1,2};
    int n=sizeof(a)/sizeof(int);
    int target;
    printf("target: ");
    scanf("%d",&target);
    printf("%d occured %d times",target,countOcc(a,n,target));
}