#include <iostream> 
using namespace std ; 
int main () { 

int sum = 0 ;
int n , no ; 
int ask , realask ; 
cin >> n >> no ; 
int arr[n] ; 

for (int i =0; i<n ; i++ )
    cin >> arr[i] ; 

cin >> ask ; 

for (int k =0 ; k< n ; k++)
    sum += arr[k] ; 

realask = (sum - arr[no] )/2 ;
if (ask == realask ) 
    cout << "Bon Appetit" ; 
else 
    cout << ask - realask ; 
}
