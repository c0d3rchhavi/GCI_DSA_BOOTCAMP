#include<iostream>
#include<math.h>
using namespace std;
int isprime(int a);

void printprime(int a,int b){
    cout<<"The prime numbers between a and b are :";
    while (a<=b)
    {
        if (isprime(a))
        {
            cout<<a<<", ";
        }   
        a++;
    }
}

int isprime(int a){
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a%i==0)
        {
            return 0;
        }   
    }
    return 1;
}


int main(){
    int a,b;
    cin>>a>>b;

    printprime(a,b);

    return 0;
}