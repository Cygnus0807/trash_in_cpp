#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i++;
    //     // i=i++ ;
    //     //  is there any diference between i++ ; i=i+1
    // }
    // cout << endl; 

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    while (i<=n) {
        int j=1 ;
        while (j<=i) {
            cout<<"x"  ;
            j=j+1 ;

        }
        cout << endl ;
        i=i+1 ;
    }
    return 0;
}