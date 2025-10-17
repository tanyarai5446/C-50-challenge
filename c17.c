// Find intersection of two sorted array
#include <stdio.h>
void intersectionOfSortedArrays(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;

    printf("Intersection elements are:\n");
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    intersectionOfSortedArrays(arr1, n1, arr2, n2);
    return 0;
}