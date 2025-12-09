//Leaders in an array
// leaders are elements which are not smaller than any  element in its right
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int leader=a[n-1];
    printf("leaders:%d\t",leader);
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>leader)
        {
        leader=a[i];
        printf("%d\t",leader);
        }
    }
}