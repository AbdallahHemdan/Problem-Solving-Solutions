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

int size ; 
cin >> size ; 
int arr[size] ; 

for (int i=0 ;i< size ;i++)
    cin >> arr[i] ; 
    
sort(arr,arr+size) ;
int counter = 0 ;

for (int i=0 ;i<size;)       
    if (arr[i]==arr[i+1]){
        counter++ ;
        i = i+2 ;
    }
    else 
        i++ ;

cout << counter << endl ;

}
