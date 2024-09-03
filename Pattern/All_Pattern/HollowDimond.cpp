/**
       *
      * *
    *     *
  *        *
 *           *
 *           *
   *        *
    *     *
      *  *
       *



 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        /**  Space */
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << ' ';
        }

        /*  Star */
        for (int col = 0; col < 2 * n + 1; col = col + 1)
        {
            // if first character or last character
            if (col == 0)
            {
                // first character
                cout << "*";
            }
            else if (col == 2 * row)
            {
                // second Character
                cout << '*';
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    /** reverse the whole hollow dimond */

    for (int row = 0; row < n; row = row + 1)
    {
        /**  Space */
        for (int col = 0; col < row; col = col + 1)
        {
            cout << ' ';
        }

        /*  Star */
        for (int col = 0; col < 2 * n - 2 * row - 1; col = col + 1)
        {
            // if first character or last character
            if (col == 0 || col == 2 * n - 2 * row - 2)
            {
                // first character
                cout << "*";
            }
            // else if (col == 2 * row)
            // {
            //     // second Character
            //     cout << '*';
            // }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}