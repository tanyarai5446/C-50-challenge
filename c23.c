//Remove duplicates from a string
#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int seen[256] = {0};  // ASCII character set
    int i, j = 0;
    char result[strlen(str) + 1];

    for (i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    strcpy(str, result);  // Copy back to original string
}

int main() {
    char str[] = "programming";
    removeDuplicates(str);
    printf("After removing duplicates: %s\n", str);
    return 0;
}