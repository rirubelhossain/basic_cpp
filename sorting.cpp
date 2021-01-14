#include <bits/stdc++.h>
using namespace std ;


void swapthe(int *a , int *b )
{
    int tmp ;
    tmp = *a ;
    *a = *b ;
    *b = tmp ;
}

void sort_the_function(int ar[] , int size )
{
    for(int i = 0 ; i < size - 1 ; ++i )
    {
        for(int j = i + 1 ; j < size ; ++j )
        {
            if( ar[i] > ar[j])
            {
                swapthe(&ar[i] , &ar[j]);
            }
        }
    }
}

int main()
{
    int number ;
    cin>>number ;

    int array[number] ;

    for(int i = 0 ; i < number ; ++i )
        cin>>array[i] ;

    sort_the_function(array , number );
    for(int i = 0 ; i < number ; ++i )
        cout<<array[i]<<" " ;

    return(0) ;
}
