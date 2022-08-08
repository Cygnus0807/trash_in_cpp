# include <iostream>
using namespace std ;

int main() {
    
    int a = 'a';
    cout << a << endl ;

    char ch = 98 ;
    cout << ch << endl ;

    char ch1 = 123456 ;
    cout << ch1 << endl ;    
    /* warning: overflow in conversion from 'int' to 'char' changes value from '123456' to ''@'' [-Woverflow]
     char ch1 = 123456
        @   */ 

   unsigned int a1 =-112 ;
   cout << a1 << endl ;
   // here -integer is converted into unsigned integer
   //    so significant 1st bit 1 is treated as no's binary form so it is large
    
   // operators
   int a2 = 2/5 ;
   int a3 = 2.0/5 ;
   cout << a2 << endl << a3 << endl;
    float a4 = 2/5 ;
    cout << a4 << endl ;

    int a5 = 4 ;
    int a6 = 3 ;

    bool first = ( a5 == a6 );
    cout << first << endl ;

    bool second = ( a5 > a6 );
    cout << second << endl ;

    bool third = ( a5 < a6 );
    cout << third << endl ;

    bool fourth = ( a5 <= a6 );
    cout << fourth << endl ;

    bool fifth = ( a5 >= a6 );
    cout << fifth << endl ;

    bool sixth = ( a5 != a6 );
    cout << sixth << endl ;

    // logical operator && || !

    int b = 0 ;
    cout << !b << endl ;

    //int c =1 ;
    //cout <<   << endl ; 


    
}