//Check if array is sorted and rotated
#include<stdio.h>
int checkArrayType(int arr[], int n) 
{
    int inc_breaks = 0, dec_breaks = 0;

    for (int i = 0; i < n-1; i++) 
    {
        if (arr[i] > arr[i+1])
            inc_breaks++;
        else if (arr[i] < arr[i+1])
            dec_breaks++;
    }
    
    if (inc_breaks == 0)
        return 1; // Sorted increasing
    else if (dec_breaks == 0)
        return 2; // Sorted decreasing
    else if (inc_breaks == 1 && arr[n - 1] <= arr[0])
        return 3; // Sorted and rotated (increasing)
    else if (dec_breaks == 1 && arr[n - 1] >= arr[0])
        return 4; // Sorted and rotated (decreasing)
    else
        return 0; // Not sorted

}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   int result = checkArrayType(arr, n);

    switch (result) 
    {
    case 1:
        printf("✅ Array is sorted in increasing order (not rotated)\n");
        break;
    case 2:
        printf("✅ Array is sorted in decreasing order (not rotated)\n");
        break;
    case 3:
        printf("✅ Array is sorted and rotated (increasing)\n");
        break;
    case 4:
        printf("✅ Array is sorted and rotated (decreasing)\n");
        break;
    default:
        printf("❌ Array is not sorted\n");

    return 0;
    }
}