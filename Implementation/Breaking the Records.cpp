#include <iostream> 
using namespace std ; 
int main() {     
int maxcount = 0 ; 
int mincount =0 ; 
int maxnum , minnum ; 
int n ; 
cin >> n ; 
int arr[n] ; 

for (int i=0 ;i< n ; i++) 
    cin >> arr[i] ; 

maxnum = arr[0] ;
minnum = arr[0] ;
for (int k =0;k<n;k++)
    if (arr[k] > maxnum ){
        maxnum = arr[k] ; 
        maxcount ++ ;
      }
    else if (arr[k] < minnum ){
        minnum = arr[k] ; 
        mincount ++ ; 
        }
cout << maxcount << " " << mincount ; 
    
}
