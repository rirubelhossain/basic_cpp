#include <iostream>

using namespace std;

int main()
{
    cout<<12.345<<endl;
    cout.setf(ios :: scientific);
    cout<<12.345<<endl;
    cout.unsetf(ios :: scientific);
    cout<<12.345<<endl;

    cout.unsetf(ios :: basefield);
    cout.setf(ios :: hex);
    cout<<100<<endl;

    cout.setf(ios :: showbase);
    cout<<100<<endl;

    ios :: fmtflags fla;

    fla = cout.flags();

    if( fla & ios :: showbase)
        cout<<"showbase is set"<<endl;
    else
        cout<<"isn't set"<<endl;

    cout.unsetf(ios :: showbase);
    fla = cout.flags();
    if( fla & ios :: showbase)
        cout<<"showbase is set"<<endl;
    else
        cout<<"isn't set"<<endl;

    return (0);
}
