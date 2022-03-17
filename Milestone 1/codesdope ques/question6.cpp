#include <iostream>
using namespace std;

void vote(int age){
     if (age>=18)
     {
         cout<<"eligible to vote\n";
     }
     else  
        cout<<"not eligible o vote\n";  

}

int main(){
    int age;
    cin>>age;
    vote(age);

    return 0;
}