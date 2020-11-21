#include <stdio.h>

int main()
{
    int n ;
    scanf("%d", &n );
    int arr[n] ;


    for(int i = 0 ; i < n ; ++i)
        scanf("%d", &arr[i]);


    int duplicate = 0 ;
    int dup[n];
    for(int i = 0 ; i < n ; ++i )
    {
        if( arr[i] == arr[i+1])
        {
            dup[i] = 0 ;
        }
        else{
            dup[i] = arr[i];
        }
    }

    for(int i = 0 ; i < n ; ++i)
        printf("%d", dup[i]);

    return(0);
}

