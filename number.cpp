# include <iostream>
using namespace std ;

int main() {
    int n;
    cin >> n ;

    if( n>0 ) {
        cout << n << "is positive no. " << endl ;
    }
    else {
        if ( n<0 ) {
            cout << n << " is negative no. "<< endl ;
        }
        else {
            cout << n << " is 0 "<< endl ;
        }
    }


    //alter     if -> elseif -> else
    if ( n>0 )
        cout << n << " is +ve no. "<< endl ;
    else if ( n<0 )
        cout << n << " is negative no. "<< endl ;
    else 
         cout << n << " is 0 "<< endl ;


         //task
    int a ;
    cin >> a ;
    if( a==9 ) {
        cout << " NINEY "<< endl ;
    }
    if ( a>0 ) {
        cout << " POSITIVE " << endl;
    }
    else {
        cout << " NEGATIVE "<< endl ;
    }

    // TASK 2
    int c ;
    cin >> c ;
    int b=c+1 ;
    if (( c=3 )==b ) {
        cout << c << endl;
    }
     else {
         cout << c+1 << endl;
     }
     

     // TASK3
     int d ;
     cin >> d ;
    if ( d>20 ) {
        cout << "Love"<< endl;
    }
    else if ( d==24 ) {
        cout << "Lovely" << endl;
    }
    else {
        cout << " Babbar" << endl;
    }
    cout << d ;

    return 0 ;
} 