#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int a=N/365;
    N-=365*a;
    int b=N/30;
        N-=30*b;
    cout<<a<<" years"<<endl;
    cout<<b<<" months"<<endl;
    cout<<N<<" days"<<endl;

}

