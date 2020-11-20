#include <stdio.h>


int main()
{
    int prime ;
    int number ;
    scanf("%d", &number );



    for(int i = 2 ; i <= number ; ++i)
    {
        if( number % i == 0)
        {
            printf("%d ", i);
        }
    }




    return(0);
}
