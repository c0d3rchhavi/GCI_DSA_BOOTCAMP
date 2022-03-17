#include <iostream>
using namespace std;
#include <math.h>

float circumference(int r){
    return 2*(M_PI)*(r);
}

int main(){
    int r;
    cin>>r;
    cout<<circumference(r)<<endl;

    return 0;
}