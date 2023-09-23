#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char a;
    cin>>a;
    if (isupper(a)==true)
    {
        cout<<char(int(a)+32)<<endl;
    }
    else{
        cout<<char(int(a)-32)<<endl;
    }
}
