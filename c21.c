//Print all permutations of a string
#include <stdio.h>
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
    
}
void permute(char *a, int l, int r) {
    if (l == r) {
        printf("%s\n", a);
    } else {
        for (int i = l; i <= r; i++) {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i)); // backtrack
        }
    }
}
int main() {
    char str[] = "tanya";
    int n = 5; // Length of the string
    permute(str, 0, n - 1);
    return 0;
}
