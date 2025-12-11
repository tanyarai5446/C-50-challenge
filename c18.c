//18. Trapping Rain Water
#include <stdio.h>
int trapRainWater(int height[], int n) 
{
    if (n <= 2) return 0;

    int leftMax[n];
    int rightMax[n];
    int waterTrapped = 0;

    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) 
    {
        leftMax[i] = (height[i] > leftMax[i - 1]) ? height[i] : leftMax[i - 1];
    }

    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) 
    {
        rightMax[i] = (height[i] > rightMax[i + 1]) ? height[i] : rightMax[i + 1];
    }

    for (int i = 0; i < n; i++) 
    {
        waterTrapped += (leftMax[i] < rightMax[i] ? leftMax[i] : rightMax[i]) - height[i];
    }

    return waterTrapped;
}
int main() {
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(height[0]);

    int result = trapRainWater(height, n);
    printf("Total water trapped: %d\n", result);

    return 0;
}