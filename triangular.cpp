#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int i = 0;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    if (1)
    {
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                cout << j - n + i <<" ";
                j++;
            }

            cout << endl;
            i++;
        }
    }
    return 0;
}