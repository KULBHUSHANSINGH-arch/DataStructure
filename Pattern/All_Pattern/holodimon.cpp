#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        /* spaces print */
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << ' ';
        }
        /* Start print */
    }
}