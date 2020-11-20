#include <stdio.h>

int main()
{
    int number ;
    scanf("%d", &number);

    int fact = 1 ;

    for(int i = 1 ; i <= number ; ++i )
    {
        fact *= i ;
    }
    printf("The factorial number is = %d \n", fact );


    return(0);
}
