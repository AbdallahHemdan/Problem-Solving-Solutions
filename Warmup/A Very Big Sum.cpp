#include <iostream> 
using namespace std ; 
int main () 
{ 
int n ; 
cin >> n ; 

long long sum = 0 ; 
long long arr[n] ;
 for (int i=0 ; i<n ; i++)
     cin >> arr[i] ;
 for (int i=0 ; i<n ; i++) 
     sum+= arr[i] ; 
 cout <<sum ;    
}
