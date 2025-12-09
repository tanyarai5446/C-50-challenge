//Kadane's Algorithm - Maximum Subarray Sum
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max_sum = a[0];
    int curr_sum = a[0];
    for(int i=1; i<n; i++)
    {
        if(curr_sum < 0)
            curr_sum = a[i];
        else
            curr_sum += a[i];
        if(curr_sum > max_sum)
            max_sum = curr_sum;
    }
    printf("Maximum subarray sum: %d\n", max_sum);
}
