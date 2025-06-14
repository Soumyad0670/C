#include<stdio.h>
int main()
{
    char ch;
    printf("enter character by the user\n");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("uppercase\n");
    }
    else if(ch>= 'a' && ch<= 'z')
    {
        printf("lower case\n");
    }
    else{
        printf("default");
    }
    return 0;
}