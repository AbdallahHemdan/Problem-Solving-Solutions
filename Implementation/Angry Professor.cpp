#include <iostream> 
using namespace std ; 
int main () {
int t , n , k ;
cin >> t ; 
for (int o=0 ; o<t ; o++) {   
    int counter = 0 ;
    cin >> n >> k ;
    int arr[n];
    for (int p =0 ; p<n ;p++)
        cin >>arr[p] ; 
    for (int l =0 ; l<n ; l++)
        if (arr[l] <=0)
            counter++  ;
    if (counter<k)
        cout << "YES" << endl ;
    else 
        cout<< "NO" <<endl ;
    }
}
