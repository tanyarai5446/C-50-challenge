//reverse an array in place
#include<stdio.h>
int ReverseArray(int a[],int n){
    for(int i=0,j=n-1;i<=n/2,j>=n/2;i++,j--)
    {
    int temp = a[i];
    a[i]=a[j];
    a[j]= temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}
int main()
{
    int a[]={7,6,5,4,3};
    int n= sizeof(a)/sizeof(a[0]);
    ReverseArray(a,n);
}
