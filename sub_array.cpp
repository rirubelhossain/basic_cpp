#include <stdio.h>



int main()
{

    int n ;
    cin>>n ;

    int array[n] ;
    for(int i = 0 ; i < n ; ++i )
    {
        cin>>array[i];
    }
    int missing = 0 ;
    for(int i = 0 ; i < n ; ++i )
    {
        if( (array[i+1] - array[i]) == 1 )
        {

        }
        else{

            printf("%d ", i );
        }

        }

    }

}
