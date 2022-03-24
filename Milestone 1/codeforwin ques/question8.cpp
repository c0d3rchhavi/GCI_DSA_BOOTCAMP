#include <iostream>
#include <math.h>
using namespace std;
int isarmstrong(int num);
void armstrong(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "All armstrong number b/w a and b: ";
    armstrong(a, b);
    return 0;
}

void armstrong(int a, int b)
{
    while (a<=b)
    {
        if (isarmstrong(a))
        {
            cout<<a<<", ";
        }
        
    }
    
}

int isarmstrong(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum += pow(lastdigit, 3);
        num = num / 10;
    }
    if (num == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}