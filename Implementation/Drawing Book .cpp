#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <assert.h>
#include <vector>
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <numeric>
#include<array>
#include<tuple>
#include <utility>
#include <functional> 
#include <locale>  
typedef long long int ll ; 
using namespace std ;
int main(){
    
ll n , p  ; 
cin >> n >> p ;
if(n%2==0)
    n++ ; 
if(p%2==0)
    p++ ; 
int min = ((n-p)/2 >(p-1)/2)?(p-1)/2:(n-p)/2 ;
cout << min << endl ;
    
}
