#include <iostream>

using namespace std;

int main()
{
    char s,q;
    int a,b,c;
    cin>>a>>s>>b>>q>>c;
    if (q=='='){
        if (s=='+'){
            if ((c==a+b)==true){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<(a+b)<<endl;
            }
        }
        else if (s=='-'){
                if ((c==a-b)==true){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<(a-b)<<endl;
            }
        }
        else if (s=='*'){
            if ((c==a*b)==true){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<(a*b)<<endl;
            }
    }

    }
    }
