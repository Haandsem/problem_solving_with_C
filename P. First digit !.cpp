#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cin>>x;
    float c=x/1000;
    if ((int(floor(c))%2)==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }

}
