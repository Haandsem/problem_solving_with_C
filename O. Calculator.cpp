#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    char c;
    cin>>A>>c>>B;
    if (c=='+'){
        cout<<(A+B)<<endl;
    }
    else if (c=='*'){
        cout<<(A*B)<<endl;
    }
    else if (c=='-'){
    cout<<(A-B)<<endl;
    }
    else if (c=='/'){
    cout<<(A/B)<<endl;
    }
}
