# include <iostream>
using namespace std ;

int main() {

    int a =4 ;
    int b = 6 ;


    cout << "a&b" << (a&b) << endl ;
    cout << "a|b" << (a|b) << endl ;
    cout << "~a" << (~a) << endl ;
    cout << "~b" << (~b) << endl ;
    cout << "a^b" << (a^b) << endl ;

    cout << (17<<1) << endl; 
    cout << (17<<2) << endl;
    cout << (19>>1) << endl; 
    cout << (21>>2) << endl;

    cout << (17>>1) << endl; 
    cout << (17>>2) << endl;
    cout << (19<<1) << endl; 
    cout << (21<<2) << endl;

    int i =7 ;
    cout << (i++) <<  endl ;
    // i = 7 ~8
    cout << (++i) <<  endl ;
    // i = 9 
    cout << (i--) <<  endl ;
    // i= 9 ~ 8
    cout << (--i) <<  endl ;
    // i= 7

     b =1 ;
    a=10 ;
    if ( ++a )
        cout<< b;
    else 
        cout << ++b ;
    
    a=1 ;
    b=2 ;
    if ( a-- >0 && ++b >2 ) {
        cout << " stage 1 - inside it" << endl  ;
    }
    cout <<  a << " " << b << endl;



    int no = 3 ;
    cout << ( 25 * ( ++no)) <<  endl ; 

    cout <<   




    return 0 ;
}