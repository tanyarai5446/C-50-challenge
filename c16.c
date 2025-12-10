// Find duplicate number in array
#include<stdio.h>
int findDuplicate(int arr[], int size) 
{
    int freq[size];
    
    // Initialize frequency array
    for (int i = 0; i < size; i++) 
    {
        freq[i] = 0;
    }

    // Check for duplicates
    for (int i = 0; i < size; i++) 
    {
        if (freq[arr[i]] == 1) 
        {
            return arr[i];  // Duplicate found
        }
        freq[arr[i]] = 1;
    }

    return -1;  // No duplicate found
}

int main() 
{
    int nums[] = {3, 1, 4, 2, 5, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    int duplicate = findDuplicate(nums, size);
    if (duplicate != -1)
        printf("Duplicate number is: %d\n", duplicate);
    else
        printf("No duplicate found.\n");

    return 0;
}
