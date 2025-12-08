//Find Union and Intersection of two arrays
#include<stdio.h>
int unioon(int a[],int b[],int n,int m){
    int c[n+m];
    int k=0;
    for(int i=0;i<n;i++)
    {
        c[k++]=a[i];
    }
    for (int j = 0; j < m; j++) 
    {
        int found = 0;
        for (int i = 0; i < n; i++) 
        {
            if (b[j] == a[i]) 
            {
                found = 1;
                break;
            }
        }
        if (!found) 
        {
            c[k++] = b[j];
        }
    }
    printf("union:\n");
    for(int i=0;i<k;i++)
    {
        printf("%d\t",c[i]);
    }
    printf("\n");
}
int intersection(int a[],int b[],int n,int m)
{
    int d[n+m];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
           if(a[i]==b[j]){
            //check duplicates
            int found =0;
            for(int x=0;x<k;x++)
            {
                if(d[x]==a[i]){
                found=1;
                break;}
            }
            if(!found){
            d[k++]=a[i];
            }
          }
        }
      }
    printf("\n intersection:\n");
    for(int i=0;i<k;i++){
        printf("%d\t",d[i]);
      }

}
int main(){
    int n,m;
    printf("enter n: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter m: ");
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    unioon(a,b,n,m);
    intersection(a,b,n,m);

}