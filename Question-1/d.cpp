#include <iostream>
using namespace std;
int main(){
    cout<<"enter values";
    int a,b,res;
    cin>>a;cin>>b;
    a=20;b=10;
    a+b=res;
    cout<<"res ="<<res;
    return 0;
}

// Error : .cpp:8:9: error: lvalue required as left operand of assignment a+b=res;
// In 8 line " Assign value has to be right side " eg= 'res=a+b'

// Output : none
