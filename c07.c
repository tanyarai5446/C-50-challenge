 //Cyclically rotate an array by one
#include<stdio.h>
void rotateByOne(int a[],int n)
{
    int last = a[n - 1];  // Store the last element

    // Shift all elements one position to the right
    for (int i = n - 1; i > 0; i--) 
    {
        a[i] = a[i - 1];
    }

    a[0] = last;  // Place the last element at the front

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
  rotateByOne(a,n);
    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
 