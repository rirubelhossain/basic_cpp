#include <stdio.h>

int main()
{
    int n ;
    scanf("%d", &n );
    int arr[n] ;


    for(int i = 0 ; i < n ; ++i)
        scanf("%d", &arr[i]);


    int duplicate = 0 ;
    int catch_value = 0 ;
    for(int i = 0 ; i < n ; ++i )
    {
        if( arr[i] == arr[i+1])
        {
            ++duplicate;
            catch_value = arr[i];
        }
    }
    printf("the duplicate value is = %d\n",catch_value);

    return(0);
}
