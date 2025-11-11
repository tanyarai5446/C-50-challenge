//Valid Palindrome after removing at most one character
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char s[], int left, int right) {
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

bool validPalindrome(char s[]) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        } else {
            // Try skipping one character from either side
            return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
        }
    }
    return true;
}

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    if (validPalindrome(s))
        printf("Valid palindrome after at most one removal\n");
    else
        printf("Not a valid palindrome\n");

    return 0;
}