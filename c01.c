//find max and min element in an array
#include <stdio.h>
int findminmax(int a[],int *max,int *min)
{   
    *max=a[0];
    *min=a[0];
    for(int i=1;i<9;i++)
    {
        if(a[i]>*max){
        *max=a[i];}
        else if(a[i]<*min){
        *min=a[i];}
    }
}
int main()
{
    int a[9],i,max,min;
    printf("enter 9 elements of array:\n");
    for(int i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }
    findminmax(a,&max,&min);
    printf("max is : %d\n",max);
    printf("min is : %d",min);
}