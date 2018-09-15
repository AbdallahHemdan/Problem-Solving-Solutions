#include <iostream> 
using namespace std ; 
int main () 
{
    int n , maxheight , count =1    ; 
    cin >> n ; 
    int arr[n] ; 
    for (int i =0 ; i< n ; i++)
        cin >> arr[i] ;  
    maxheight = arr[0] ;  
    for (int i =1 ; i< n ; i++) 
        if (arr[i]== maxheight)
            count ++ ; 
        else if (arr[i] > maxheight)
            maxheight = arr[i] ; 
    
    cout << count ; 
}
