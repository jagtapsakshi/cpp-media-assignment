#include <iostream>
using namespace std;
int main(){
    int a,b,c,x;
    cout << "Enter first number:";
    cin >> a; 
    cout << "Enter second number:";
    cin>> b;
    cout<<"Enter value for taking modulus:";
    cin >> c;
    
    x = (a * b) % c;
    cout << "Result:" << x;
}
