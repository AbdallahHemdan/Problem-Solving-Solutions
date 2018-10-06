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
int day = 0 ; 
cin >> day ;
int counter = 2 ; 
int total = 2 ;
for (int i=0 ;i<day-1 ;i++){
    total = total * 3 ; 
    counter = counter + total/2 ; 
    total = total / 2 ;
}
cout << counter << endl ;
}
