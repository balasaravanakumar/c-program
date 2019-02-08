#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        
        {
            printf("alphabet");
}
    else
    printf("no");

    return 0;
}
