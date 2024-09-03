#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /** Full Pyramid */
    for (int row = 0; row < n; row = row + 1)
    {
        // star printed
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        // space print
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "4 ";
        }
        cout << endl;
    }

    /** Inverted Pyramid */
    for (int row = 0; row < n; row = row + 1)
    {
        // space
        for (int col = 0; col < row; col = col + 1)
        {
            cout << ' ';
        }
        // Star
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "4 ";
        }
        cout << endl;
    }
}