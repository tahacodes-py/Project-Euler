#include <iostream>
using namespace std;
int main ()
{
    int x;
    for(int i = 21; ; i++)
    {
        int j;
        for(j= 1; j <= 20; j++)
        {
            if(i % j != 0)
            {
                break;
            }
        }    
        if(j == 21)
        {
            cout << "smallest number to be divisble from 1 to 20 is:  " << i;
            break;
        }
    }
}