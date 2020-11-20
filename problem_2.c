#include <stdio.h>


int main()
{
    int n ;
    scanf("%d", &n );

    int arr[n] ;
    int sum = 0 ;
    int value ;
    for(int i = 0 ; i < n ; ++i )
    {
        scanf("%d", &value );
        arr[i] = value ;
    }

    for(int i = 0 ; i < n ; ++i)
    {
        sum += arr[i];
    }

    printf("sum of all elements is = %d", sum );




    return(0);
}
