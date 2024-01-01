#include <iostream>
using namespace std;

    int main(){
    int x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    
    x+=y; //2+3=5
    x-=y; //5-3=2
    x%=y; //2%3=2
    
    cout<<x;
}
