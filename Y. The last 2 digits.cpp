#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,d,e;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    e=(a*b*c*d)%100;
    if(e<10){
        cout<<0<<e<<endl;
    }
    else{
        cout<<e<<endl;
    }

}
