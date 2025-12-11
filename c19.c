// Merge two sorted arrays without using extra space
#include <stdio.h>
int main() {
    int arr1[] = {1, 3, 5, 9};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int i = 0, j = 0, k = n1 - 1;
    
    while (i <= k && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else {
            // Swap arr1[k] and arr2[j]
            int temp = arr1[k];
            arr1[k] = arr2[j];
            arr2[j] = temp;
            k--;
            j++;
        }
    }
    
    // Sort both arrays
    for (int x = 0; x < n1 - 1; x++) {
        for (int y = 0; y < n1 - x - 1; y++) {
            if (arr1[y] > arr1[y + 1]) {
                int temp = arr1[y];
                arr1[y] = arr1[y + 1];
                arr1[y + 1] = temp;
            }
        }
    }
    
    for (int x = 0; x < n2 - 1; x++) 
    {
        for (int y = 0; y < n2 - x - 1; y++) 
        {
            if (arr2[y] > arr2[y + 1]) 
            {
                int temp = arr2[y];
                arr2[y] = arr2[y + 1];
                arr2[y + 1] = temp;
            }
        }
    }
    
    // Print merged arrays
    printf("First Array: ");
    for (i = 0; i < n1; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond Array: ");
    for (j = 0; j < n2; j++) 
    {
        printf("%d ", arr2[j]);
    }
    
    return 0;
}