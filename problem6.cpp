#include <iostream>
using namespace std;
int pow(int x)
{
    return x*x;
}
int main ()
{
    //finding sum of square of first 100 natural numbers 
    long long  sum = 0;
    for(int i = 0; i <= 100 ; i++)
    {
        sum = sum + pow(i);
    }
    //finding ssqaure of sum
    long long  x = 0;
    for(int i = 0; i <= 100 ; i++)
    {
        x = x+i;
    }
    long long sqaure = pow(x);
    cout << "difference between sum of square and square of sum is:  " << sqaure - sum;
}