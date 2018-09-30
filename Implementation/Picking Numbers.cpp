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
#define fori(s,n) for(int i=s ; i<n ; i++)
using namespace std ;
int main(){

int size ;
cin >> size ; 
vector<int> v(size) ;
for(int i=0 ; i<size ; i++)
    cin>>v[i] ; 
sort(v.begin(),v.end()) ; 
vector<int> counter(size,1) ;
for(int i=0 ; i<size ;i++)
    for(int j=i+1 ; j<size ;j++)
        if(abs(v[i]-v[j])<=1)
            ++counter[i] ; 
        else 
            break ; 
 
cout << *max_element(counter.begin(),counter.end()) << endl ;
}
