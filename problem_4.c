#include <stdio.h>

int main()
{
    int n ;
    scanf("%d", &n );

    int arr[n] ;

    for(int i = 0 ; i < n ; ++i )
        scanf("%d", &arr[i]);

    int new_arr[n];
    for(int i = 0 ; i < n ; ++i )
    {
        new_arr[i] = arr[i];
    }

    printf("the new array is blew \n");
    for(int i = 0 ; i < n ; ++i )
        printf("%d ", new_arr[i]);



    return(0);
}
