#include <iostream> 
#include <cmath> 

using namespace std ; 
int main () {
    
int num , x , y ,z ; 
cin >> num ;
for (int i=1 ; i<=num ; i++) {  
cin >> x >> y >>z ; 
if (abs(z-x) < abs(z-y))
    cout << "Cat A" <<endl ; 
else if (abs(z-x) > abs(z-y))
    cout << "Cat B" <<endl ; 
else 
    cout << "Mouse C"  << endl ;    
}
}
