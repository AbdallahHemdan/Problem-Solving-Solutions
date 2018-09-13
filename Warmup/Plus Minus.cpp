#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ; 
int main () {
int n ;
float pos_count=0 , neg_count=0 , zero_count=0 ; 
cin >> n ; 
float arr [n] ;
for (int i =0 ; i< n ; i++)
    cin >> arr[i] ; 
for (int i=0;i<n; i++)
    if (arr[i]> 0)
        pos_count ++ ; 
    else if (arr[i]<0)
        neg_count ++ ; 
    else 
        zero_count ++ ;     

    cout << fixed<< setprecision(6) << pos_count / n << endl ;
    cout << fixed<< setprecision(6) << neg_count / n << endl ;
    cout << fixed<< setprecision(6) << zero_count / n << endl ;
}
