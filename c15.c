//Missing number in array [1 to n]
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n-1];
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int total=n*(n+1)/2;
    printf("missing element are:%d",total-sum);
}
/*
//for multiple missing elements;
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];  // Input array
    int freq[n + 1];  // Frequency array to track presence

    // Initialize frequency array
    for (int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    // Read input and mark presence
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] >= 1 && a[i] <= n) {
            freq[a[i]]++;
        }
    }

    // Print missing numbers
    printf("Missing numbers are: ");
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}*/