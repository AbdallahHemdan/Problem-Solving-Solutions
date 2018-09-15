#include <iostream> 
using namespace std ; 
int main ()
{
    int n ; 
    cin >> n ;
    int arr[n] ; 
    for (int i=0 ; i< n ; i++)
        cin >> arr[i] ;
    for (int i=0 ; i< n ; i++)
        if (arr[i]<38)
            arr[i] = arr[i]; 
        else {
            int c = ( arr[i] /5 ) + 1 ;
            if ((c*5)- arr[i] < 3)
                arr[i] = c* 5 ; 
            } 
    for (int i=0 ; i<n ; i++)
        cout <<  arr[i] << endl ;
}
