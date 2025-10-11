//find kth max and min element in array 
#include <stdio.h>
int sortingarray(int a[],int n){
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
        
        }
}
int main()
{  
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a[n],i,max,min;
    printf("enter  elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    printf("\nenter k: ");
    scanf("%d",&k);
    sortingarray(a,n);
    printf("sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    //findkthminmax(a,n,k,&max,&min);
    printf("\n%d max is : %d\n",k,a[n-k]);
    printf("%d min is : %d",k,a[k-1]);
}