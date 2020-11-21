#include <stdio.h>

int main()
{
    char ch ;

    scanf("%c", &ch );

    switch(ch)
    {
    case 'a':
    printf("the character is vowel");
    break ;

    case 'e':
    printf("the character is vowel");
    break ;
    case 'i':
    printf("the character is vowel");
    break ;

    case 'o':
    printf("the character is vowel");
    break ;

    case 'u':
    printf("the character is vowel");
    break ;

    default:
        printf("the character is consonant");
    }

    return(0) ;
}
