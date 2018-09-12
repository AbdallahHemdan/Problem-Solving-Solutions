#include <iostream> 
using namespace std ; 
int main ()
{ 
    int p1=0 , p2=0 ; 
    int arr1[3] ; 
    int arr2 [3] ; 
    for (int i=0;i < 3 ; i++) 
        cin >> arr1[i] ; 
    for (int i=0;i < 3 ; i++) 
        cin >> arr2[i] ; 
    for (int i=0;i < 3 ; i++) 
        if (arr1[i]>arr2[i])
             p1++ ; 
        else if (arr1[i]<arr2[i])
            p2++ ; 
cout << p1 << " " << p2 ;     
}
