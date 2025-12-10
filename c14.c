//Subarray with given sum (Two pointer / Sliding window)
#include <stdio.h>
void subarrayWithSum(int arr[], int n, int target) 
{
    int start = 0, end = 0, curr_sum = 0;

    while (end < n) 
    {
        curr_sum += arr[end];

        // Shrink window from left if sum exceeds target
        while (curr_sum > target && start < end) 
        {
            curr_sum -= arr[start];
            start++;
        }

        // Check if current window matches target
        if (curr_sum == target) 
        {
            printf("Subarray found from index %d to %d:\n", start, end);
            for (int i = start; i <= end; i++)
                printf("%d ", arr[i]);
            printf("\n");
            return;
        }

        end++;
    }
    printf("No subarray with sum %d found.\n", target);
}

int main() 
{
    int arr[] = {1, -4, 20, -3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    subarrayWithSum(arr, n, target);
    return 0;
}