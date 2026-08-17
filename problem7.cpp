#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int count = 0;
    for(int i = 2; ; i++)
    {
        bool x = false;
        for(int j = 2 ; j <= sqrt(i); j++ )
        {
            if(i % j == 0)
            {
                x = true;
                break;
            }
            else 
            {
                continue;
            }
        }
        if(x == false)
        {
            count++;
        }
        if(count == 10001)
        {
            cout << i;
            break;
        }
    }
}