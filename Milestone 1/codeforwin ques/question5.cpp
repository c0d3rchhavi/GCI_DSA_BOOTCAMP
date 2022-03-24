#include <iostream>
#include<math.h>
using namespace std;

int prime(int n);
int armstrong(int n);
int perfect(int n);

int main(){
    int n;
    cin>>n;

    if(prime(n))
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime numbber"<<endl;}

    if (armstrong(n))
    {
        cout<<n<<" is a armstrong number"<<endl;
    }
    else{ 
        cout<<n<<" is not a armstrong number"<<endl;}

    if (perfect(n))
    {
        cout<<n<<" is a perfect number"<<endl;
    }
    else{
        cout<<n<<" is not a perfect number"<<endl;}
    
    return 0;
}

int prime(int n){
    int i;
    for ( i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            return 0;
        }     
    }
    return 1;
}

int armstrong(int n){
    int sum=0;
    int originaln=n;
    while (n>0)
    {
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if (sum==originaln)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int perfect(int n){
    int sum=0;
    int num=n;
    for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }
        
    }
    if (sum==n)
    {
        return 1;
    }
        return 0;
    
}

