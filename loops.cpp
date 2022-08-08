# include <iostream>
using namespace std ;

int main () {
    int sum=0 , i=1, n;
    cout << "enter num :" ;
    cin >> n ;

    while ( i<=n ) {
        sum=sum+i ;
        cout << sum << i << endl ;
        i=i+1 ;
        }
    i=0 ;
    while ( i<= n ) {
        cout << i << endl;
        i=i+1 ;
    }
}