#include <iostream>
using namespace std ;
int main (){
int n , k ;
int count =0  ;
cin >> n >> k ;
int arr[n] ;

for(int i = 0 ; i< n ; i++ )
    cin >> arr[i] ;

for (int f = 0 ; f < n ; f++)
    for (int h =f+1 ; h <n ; h++)
        if ( (arr[f]+arr[h]) % k ==0 )
            count ++ ;
cout << count ;
}
