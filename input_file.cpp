#include <iostream>
#include <fstream>
using namespace std ;


int main()
{
    ifstream var ;
    var.open("in.txt");
    if(var.fail())
    {
        cout<<"can't open"<<endl;
    }
    else{

        char word[20];
        while( !var.eof())
        {
            var>>word ;
            int counter = 0 ;
            for(int i = 0 ; word[i] != '\0' ; ++i)
                ++counter ;

            if( word[0] !='\n')
            {

                for(int i = counter -1 ; i >= 0  ; --i)
                    cout<<word[i];
            }
        }
    }
    var.close();

    return(0);
}
