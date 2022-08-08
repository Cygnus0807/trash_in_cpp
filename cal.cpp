#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    printf("enter the value a\n");
    scanf("%d", &a);
    cout << "enter the operator + _ * /" << endl;
    cin >> c;
    cout << "enter the value b" << endl;
    cin >> b;

    switch (c)
    {
    case +:
    {
        cout << a + b << endl;
        break;
    }
    case -:
        cout << a - b << endl;
        break;
    case *:
        cout << a * b << endl;
        break;
    case /:
        cout << a / b << endl;
        break;
    }
}