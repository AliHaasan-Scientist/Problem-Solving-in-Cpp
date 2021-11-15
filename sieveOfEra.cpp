#include <iostream>
using namespace std;
void sievePrime(int n)
{
    int arr[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)

        {
            for (int j = i*i; j <=  n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
        }
    }
}
int main(int argc, char const *argv[])
{
sievePrime(50);
    return 0;
}
