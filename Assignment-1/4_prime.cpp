#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            return 0;
        }
    }
    if (i == n)
        cout << "Prime";

    return 0;
}