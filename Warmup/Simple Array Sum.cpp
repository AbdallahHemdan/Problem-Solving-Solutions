#include <iostream> 
using namespace std ; 
int main () 
{  
    int sum  =0 ; 
    int size ; 
    cin >> size ; 
    int arr[size] ;
    for (int i=0 ; i<size ; i++) 
        cin >> arr [i] ; 
    for (int i =0 ; i<size ;i++)
         sum += arr[i] ; 
    cout << sum ;  
}
