//Rearrange array in alternating positive & negative items
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n],i=0;
  while(i<n)
  {
    scanf("%d",&a[i]);
    i++;
  }
  int pos[n],neg[n];
  int p=0,q=0;
  //sepparate +ve and -ve elements
  for(i=0;i<n;i++)
  {
    if(a[i]>=0)
    pos[p++]=a[i];
    else 
    neg[q++]=a[i];
  }
  //merge 2 array alternatively
  i=0;
  int j=0,k=0;
  while(i<p&&j<q)
  {
    a[k++]=pos[i++];
    a[k++]=neg[j++];
  }
  //fill remaining +ve
  while(i<p)
  a[k++]=pos[i++];
  //fill remaining -ve
  while(j<q)
  a[k++]=neg[j++];
  printf("rearranged array: { ");
  for(int m=0;m<n;m++)
  {
    printf("%d",a[m]);
    if(m<n-1)
    printf(", ");
  }
  printf("}");
  return 0;
}