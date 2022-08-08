#include <iostream>
using namespace std;

int main()
{

    cout << "hey lets start" << endl;

    cout << " mera lap pagla gya ha" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "F" << endl;
    cout << " U" << endl;
    cout << "  C" << endl;
    cout << "   K" << endl;

    cout << endl;
    cout << endl;
    cout << "  y" << endl;
    cout << " O" << endl;
    cout << "U" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n;
    cin >> n;
    int row;

    while (row <= n)
    {

        // print space 1st triangle
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print 2nd triangle
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j = j + 1;
        }

        // print 3rd triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }

        cout << endl;
        row = row + 1;
    }

    
}