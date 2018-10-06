#include <iostream> 
using namespace std  ; 
int main () {
int n , k ; 
cin >> n >> k ; 

int arr[n] ; 
for (int i =0 ; i< n ; i++) 
    cin >>arr[i] ; 
int max  = arr[0];
for (int i=1 ; i<n ; i++)
    if (arr[i]>max) 
        max = arr[i] ; 
if (max>k)
    cout << max-k ; 
else 
    cout << 0 ;
}
