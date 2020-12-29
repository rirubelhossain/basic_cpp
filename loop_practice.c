#include <stdio.h>


int main()
{
//    int a , b ;
//
//    scanf("%d%d" , &a,&b );
//
//    for(int i = 1 ; i <= b ; ++i )
//    {
//        printf("%d x %d = %d\n" , a , i , i*a );
//    }
    int array[5] ;
    for(int i = 0 ; i < 5 ; ++i )
        scanf("%d", &array[i]) ;

    double avg = 0 ;
    for(int i = 0 ; i < 5 ; ++i )
    {
        avg += array[i] ;
    }
        printf("%f \n", avg / 5 );







    return(0) ;
}
