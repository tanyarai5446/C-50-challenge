// Count and say problem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* countAndSay(int n) 
{
    if (n == 1) 
    {
        char* base = (char*)malloc(2);
        strcpy(base, "1");
        return base;
    }

    char* prev = countAndSay(n - 1);
    int len = strlen(prev);
    char* result = (char*)malloc(len * 2 + 1); // Safe buffer
    int index = 0;

    for (int i = 0; i < len;) 
    {
        char digit = prev[i];
        int count = 0;

        while (i < len && prev[i] == digit) 
        {
            count++;
            i++;
        }

        result[index++] = count + '0'; // convert int to char
        result[index++] = digit;
    }

    result[index] = '\0';
    free(prev); // free memory from previous call
    return result;
}

int main() 
{
    int n = 5;
    char* output = countAndSay(n);
    printf("Count and Say term %d: %s\n", n, output);
    free(output);
    return 0;
}