#include <iostream>
using namespace std ; 
    int main () 
    {  
int n ; 
int sum1 =0 ,sum2 =0 ; 
cin >> n ; 
int arr[n][n] ; 
for (int i=0 ; i<n ; i++)
    for (int k=0 ; k<n ; k++) 
        cin >> arr[i][k]  ;   
for (int i=0 ; i<n ; i++) 
    for (int k=0 ; k<n ; k++) {
        if (i==k) 
            sum1+= arr[i][k] ; 
        if  ((k+i) == n-1 )
            sum2 += arr[i][k] ;    
    } 
        cout <<  abs(sum1 - sum2 )  ;    
    }
    
