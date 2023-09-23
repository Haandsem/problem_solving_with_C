#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long m;
    long long n;
    cin>>m>>n;
    string M=to_string(m);
    string N=to_string(n);
    string a;
    a=(M.back());
    string b;
    b=(N.back());
    cout<< (stoi(a)+stoi(b))<<endl;
}
