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
using namespace std ;
int main(){

int money , n , m ; 
cin >>money >> n >> m ; 
int key[n] ; 
int usb[m]; 
int sum =0; 
for(int i=0 ; i<n ; i++)
    cin >> key[i] ; 
for (int i=0 ; i<m ; i++)
    cin >> usb[i] ; 
sort(key,key+n) ; 
sort(usb,usb+m) ; 
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<m ;j++)
        if(key[i]+usb[j]<=money)
            if(key[i]+usb[j]>sum)
                sum=key[i]+usb[j] ;           
}
if(sum==0)
    cout << -1 << endl ;
else 
    cout << sum << endl ;
}
