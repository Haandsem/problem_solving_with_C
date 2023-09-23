#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin>>a>>b;
    if ((b%a==0)or(a%b==0)){
        cout<<"Multiples"<<endl;
    }
    else{
        cout<<"No Multiples"<<endl;
    }
}
