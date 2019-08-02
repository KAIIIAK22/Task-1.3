#include <iostream>
using namespace std;

int main()
{
    double a,b,c;
    cout<<"a= b= c=(1,2,3,4) ";
    cin>>a>>b>>c;
    switch((int)c)
    {
        case 1:
            cout<<"a+b="<<a+b;
            break;
        case 2:
            cout<<"a-b="<<a-b;
            break;
        case 3:
            cout<<"a*b="<<a*b;
            break;
        case 4:
            (b!=0?cout<<"a/b="<<a/b:cout<<"b=0 can't divide to 0");
            break;
        default:
            cout<<"Third value - not correct";
            break;
    }
    return 0;
}

