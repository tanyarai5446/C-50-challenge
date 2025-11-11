// Maximum Product Subarray
#include <stdio.h>
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int maxProduct(int arr[], int n) {
    int max_so_far = arr[0];
    int max_ending_here = arr[0];
    int min_ending_here = arr[0];

    for (int i = 1; i < n; i++)
    {
        // If current element is negative, swap max and min
        if (arr[i] < 0) 
        {
            int temp = max_ending_here;
            max_ending_here = min_ending_here;
            min_ending_here = temp;
        }

        // Update max and min ending here
        max_ending_here = max(arr[i], max_ending_here * arr[i]);
        min_ending_here = min(arr[i], min_ending_here * arr[i]);

        // Update overall max
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxProduct(arr, n);
    printf("Maximum Product Subarray = %d\n", result);

    return 0;
}

