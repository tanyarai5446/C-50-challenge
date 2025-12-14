#include<stdio.h>
#include<string.h>
int myAtoi(const char *s)
{
    int i=0;//to traverse string
    int sign=1;//default positive
    int result=0;
    while(s[i]==' ')//skip spaces
    i++;
    while(s[i]=='-'||s[i]=='+')//ensuring sign
    {
        sign=(s[i]=='-')?-1:1;
        i++;
    }
    while(s[i]>='0'&&s[i]<='9')
    {
        result=result*10+(s[i]-'0');//doesnt converts char to int and for char like '1' we use s[i]-'0'i.e. 56-55=1;
        i++;
    }
    return sign*result;

}
int main()
{
    printf("%d\n", myAtoi("   -1234"));  // Output: -1234
    printf("%d\n", myAtoi("42"));       // Output: 42
    printf("%d\n", myAtoi("+99abc"));   // Output: 99
    return 0;

}