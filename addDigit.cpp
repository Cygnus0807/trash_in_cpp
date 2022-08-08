# include <iostream>
using namespace std ;

int main() {
    int n , rem;
    
    cout << "enter value :" ;
    cin >> n ;

    int sum =0 , prod=1;
    while (n==0) {
        rem = n % 10 ;
        sum= sum+ rem ;
        prod= prod *rem ;

        n=n/10 ;
    }

    return 0 ;
}