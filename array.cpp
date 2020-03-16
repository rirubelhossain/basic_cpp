#include <iostream>
#include <cstdio>

using namespace std;

class spam{

	int a ;
public:

	spam(int n ) { a = n ;}
	int get_a(){ return (a);}
};
int main(int argc, char const *argv[])
{
	spam ob[4] = { 1 , 4 , 6 ,7};
	int i ;

	for( i = 0 ; i < 4 ; ++i) cout<<ob[i].get_a()<<endl;	
	return 0;
}