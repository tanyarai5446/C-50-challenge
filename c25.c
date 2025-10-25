//Check if a string is a rotation of another string
#include <stdio.h>
#include <string.h>
int isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Check if lengths are equal
    if (len1 != len2) {
        return 0; // Not rotations
    }

    // Create a new string by concatenating str1 with itself
    char concat[2 * len1 + 1];
    strcpy(concat, str1);
    strcat(concat, str1);

    // Check if str2 is a substring of the concatenated string
    return strstr(concat, str2) != NULL;
}
int main() {
    const char *str1 = "waterbottle";
    const char *str2 = "erbottlewat";

    if (isRotation(str1, str2)) {
        printf("\"%s\" is a rotation of \"%s\".\n", str2, str1);
    } else {
        printf("\"%s\" is not a rotation of \"%s\".\n", str2, str1);
    }
    return 0;
}