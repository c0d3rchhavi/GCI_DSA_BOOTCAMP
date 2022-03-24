#include <iostream>
using namespace std;
int isstrong(int num);
void strong(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The strong numbers are: ";
    strong(a, b);
    return 0;
}
int isstrong(int num){  
    int fact = 1;
    int sum = 0;
    while (num > 0)
        {
            int rem = num % 10;
            for (int i = 1; i <= rem; i++)
            {
                fact = fact * i;
            }
            sum = sum + fact;
            fact = 1;
            num = num / 10;
            if (num == sum)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
}


void strong(int a, int b)
{
    while (a<=b)
    {
        if (isstrong(a))
        {
            cout<<a<<", ";
        }   
    }  
}