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
int arr[26] ; 
for (int i=0 ;i< 26 ;i++)
    cin >> arr[i] ;
string s ; 
cin >> s ;
int max = 0 ;
for (int i=0 ;i<s.size();i++) 
    if(arr[(s[i]-'a')]> max )
        max = arr[(s[i]-'a')] ;
    
cout << max * s.size() * 1 << endl ;
}

