#include <iostream>
using namespace std;

int factorial(int n){
    int fac=n;
    while(n>1){
         n--;
         fac*=n;
    }
    return fac;
    

}

int main(){
    int n;
    cin>>n;
    cout<<n<<"! = "<<factorial(n);

    return 0;
}