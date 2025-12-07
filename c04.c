//4. Sort an array of 0s, 1s and 2s (Dutch National Flag Problem)
#include<stdio.h>
void sort0s1s2s(int a[],int n)
{
    int i=0,m=0,j=n-1;
    while(m<=j){
        if(a[m]==0)
        {
            int temp =a[m];
            a[m]=a[i];
            a[i]=temp;
            i++;
            m++;
        }
        else if(a[m]==1)
        m++;
        else
        {
            int temp=a[m];
            a[m]=a[j];
            a[j]=temp;
            j--;
        }
    }
    printf("sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
int main(){
    int a[]={1,0,1,1,2,0,0,2};
    int n=sizeof(a)/sizeof(a[0]);
    sort0s1s2s(a,n);
}