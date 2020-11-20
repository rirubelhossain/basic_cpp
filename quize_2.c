#include <stdio.h>


int main()
{
    int n ;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0 ; i < n ; ++i )
        scanf("%d", &arr[i]);

    int key = arr[0];
    int store ;
    for(int i = 0 ; i < n ; ++i )
    {
        if( arr[i] <= key )
        {
            store = arr[i];
        }
    }
    printf("the minimum value is = %d", store);

    return(0);
}

