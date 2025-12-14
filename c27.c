//Longest common prefix
#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 10
#define MAX_LENGTH 100

int main() {
    // Input words
    char words[MAX_WORDS][MAX_LENGTH] = {
                                          "flower",
                                          "flow",
                                          "flowing"
                                                   };
    int size = 3;

    char prefix[MAX_LENGTH];
    int i, j;

    // Start with the first word as prefix
    strcpy(prefix, words[0]);

    for (i = 1; i < size; i++) 
    {
        // Compare prefix with current word
        for (j = 0; j < strlen(prefix); j++) {
            if (prefix[j] != words[i][j]) {
                break; // mismatch found
            }
        }
        prefix[j] = '\0'; // cut the prefix at mismatch
    }

    printf("Longest Common Prefix: %s\n", prefix);
    return 0;
}
