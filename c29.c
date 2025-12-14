// Implement strstr() (substring search)
#include<stdio.h>
char *myStrStr(const char *string, const char *substr) 
{   //cost-> "read only"
    if (!*substr) return (char *)string;//(char *)to remove const char temporarily and match expected return type

    for (int i = 0; string[i] != '\0'; i++) 
    {
        int j = 0;
        while (substr[j] != '\0' && string[i + j] == substr[j]) 
        {
            j++;
        }
        if (substr[j] == '\0') 
        {
            return (char *)(string + i);
        }
    }

    return NULL;
}

int main() 
{
    const char *text = "codecraX mentors juniors";
    const char *search = "mentors";

    char *result = myStrStr(text, search);

    if (result)
        printf("Found at: %s\n", result);  // Output: mentors juniors
    else
        printf("Not found\n");

    return 0;
}