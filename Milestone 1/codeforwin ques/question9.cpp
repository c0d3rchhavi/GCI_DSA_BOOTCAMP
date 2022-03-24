#include <iostream>
using namespace std;
void printperfect(int a, int b);

int perfect(int num)
{
    int sum = 0;
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        if (sum == num)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Perfect numbers between a and b:";
    printperfect(a,b);
    return 0;
}

void printperfect(int a, int b){

    while (a<=b)
    {
        if (perfect(a))
        {
            cout<<a<<", ";
        }  
    } 
}