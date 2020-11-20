#include <stdio.h>


int main()
{
    int n ;
    scanf("%d", &n );

    int arr[n] ;

    int value ;

    for(int i = 0 ; i < n ; ++i )
    {
        scanf("%d", &value);
        arr[i] = value ;
    }

    printf("The reverse order is:\n");
    for(int i = n -1 ; i >= 0 ; --i )
        printf("%d ", arr[i]);



    return(0);
}
