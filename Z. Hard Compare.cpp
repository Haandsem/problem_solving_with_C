#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long x=b*log(a);
    long long y=d*log(c);
    if (x>y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
