# include <iostream>
using namespace std ;

int main() {
    int n ;
    cin >> n ;
    //cout<<  for display
    //cin>>   for input
    cout << n << endl;
    cout << "value of n is :" << endl ;

    if (n>0) {
        cout << "A is positive" << endl ;
    }
    else{
        cout << "A is negative" << n <<  endl ;
    }
    int a, b;
        cout << "value of a and b is "<<a << " " << b << endl;
    // here  \n \t space is not regonised by  cin >>
    a= cin.get();
    a = 1;          // -> 49 as ASCII value
    cout << " value of a and b is " << a << endl ; 
    
    return 0 ;
}