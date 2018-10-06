#include <iostream> 
using namespace std ; 
int main () {
int n ; 
cin>> n ;
int h = 1 ;
int numofsesion ; 
for (int j=0 ; j<n ; j++){
    h =1 ;
    cin >> numofsesion ; 
    for (int i =1 ; i<=numofsesion ; i++){   
        if (i%2==0)
            h=h+1 ;
        else 
            h=h*2 ;
        }
cout << h <<endl  ; 
    }
}
