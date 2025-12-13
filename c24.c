// Check if two strings are anagrams
#include <stdio.h>
int areAnagrams(const char *str1, const char *str2) 
{
    int count[256] = {0}; // ASCII character set

    // Count characters in str1
    for (int i = 0; str1[i] != '\0'; i++) 
    {
        count[(unsigned char)str1[i]]++;
    }

    // Subtract counts using str2
    for (int i = 0; str2[i] != '\0'; i++) 
    {
        count[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; // Not anagrams
        }
    }
    return 1; // Anagrams
}
int main() 
{
    const char *str1 = "listen";
    const char *str2 = "silent";

    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }
    return 0;
}