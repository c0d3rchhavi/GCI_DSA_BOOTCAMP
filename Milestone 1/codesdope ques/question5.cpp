#include <iostream>
using namespace std;


void oe(int A){
    if (A%2==0)
    {
        cout<<"even"<<endl;
    }
    else
        cout<<"odd"<<endl;  

}

int main(){
    int a;
    cin>>a;
    oe(a);

    return 0;
}