#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;
    if (int(x)>=97 && int(x)<=122){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if(int(x)>=65 && int(x)<=90){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else{
        cout<<"IS DIGIT"<<endl;
    }
}
