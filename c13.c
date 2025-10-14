//Find all pairs with a given sum
#include<stdio.h>
int pairs_of_sum(int a[],int n,int sum)
{  
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==sum)
        printf("(%d,%d)\n",a[i],a[j]);
    }
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=5;
    printf("pairs with whose sum = %d are:\n",sum);
    pairs_of_sum(a,n,sum);
}