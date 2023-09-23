#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    if (a>=b && a>=c){
        if(b>c){
            cout<<a<<" "<<c<<endl;
        }
        else {
            cout<<a<<" "<<b<<endl;
            }
    }
    else if (b>=c && b>=a){
        if(c>a){
            cout<<b<<" "<<a<<endl;
        }
        else{
            cout<<b<<" "<<c<<endl;
        }
    }
    else if (c>=a && c>=b){
        if(a>b){
            cout<<c<<" "<<b<<endl;
        }
        else{
            cout<<c<<" "<<a<<endl;
        }
    }
}
