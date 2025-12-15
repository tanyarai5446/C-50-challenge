//Remove duplicates from a string
#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) 
{
    int seen[256] = {0};  // ASCII character set if not seen 0 and if seen 1 or non zero
    int i, j = 0;
    char result[strlen(str) + 1];

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (!seen[(unsigned char)str[i]]) 
        {   //if not seen i.e. 0 and if seen skip if()
            seen[(unsigned char)str[i]] = 1;//if seen then 0->1
            result[j++] = str[i];//add it to result the one not seen 
        }
    }
    result[j] = '\0';
    strcpy(str, result);  // Copy back to original string
}

int main() 
{
    char str[] = "programming";
    removeDuplicates(str);
    printf("After removing duplicates: %s\n", str);
    return 0;
}