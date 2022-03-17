#include <iostream>
using namespace std;

void grades(int marks)
{
    switch (marks)
    {
    case 91 ... 100:
        cout<<"AA"<<endl;
        break;
    case 81 ... 90:
        cout<<"AB"<<endl;
        break;
    case 71 ... 80:
        cout<<"BB"<<endl;
        break;
    case 61 ... 70:
        cout<<"BC"<<endl;
        break;
    case 51 ... 60:
        cout<<"CD"<<endl;
        break;
    case 41 ... 50:
        cout<<"DD"<<endl;
        break;            
    default:
        cout<<"FAIL"<<endl;
        break;
    }

}
int main(){
    int marks;
    cin>>marks;
    grades(marks);

    return 0;
}