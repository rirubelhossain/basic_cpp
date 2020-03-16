#include <iostream>
/// IO ios member Use
using namespace std;

int main()
{
    cout<<12.345<<endl;;
    cout.setf(ios::scientific);
    cout.setf(ios::uppercase);
    cout<<12.345<<endl;;
    cout.setf(ios::showpos);
    cout<<12.345<<endl;
    return(0);
}
