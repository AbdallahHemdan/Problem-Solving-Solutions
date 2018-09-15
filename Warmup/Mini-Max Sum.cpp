#include <iostream> 
using namespace std ; 
int main (){
long minsum = 0 ;
long  maxsum = 0 ;
long sum = 0 ;
long arr[5] ; 
for (int i = 0 ; i< 5 ; i++)
    cin >> arr[i] ; 
for (int i =0 ; i< 5 ; i++)
    sum = sum + arr[i] ;
minsum = sum - arr[0] ; 
maxsum = sum - arr[0] ; 
for (int i =1; i <5 ; i++){
     if (sum -arr[i] < minsum)
         minsum = sum- arr[i] ;
     if  (sum-arr[i] > maxsum)
         maxsum = sum - arr[i] ;    
 }
    cout << minsum << " " << maxsum ;   
}
