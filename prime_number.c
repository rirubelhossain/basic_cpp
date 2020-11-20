#include <stdio.h>

int main()
{
    int number ;
    int flag = 0 ;

    scanf("%d", &number );

    for(int i = 2 ; i <= number/2 ; ++i)
    {
        if(number % i == 0)
        {
            flag = 1 ;
            break ;
        }
    }

    if( flag == 1 )
        printf("Not prime\n");
    else
        printf("Prime");

    return(0);
}
