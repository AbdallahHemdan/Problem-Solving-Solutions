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
int main (){

int size  ; 
cin >> size ; 
int arr[size] ; 

for (int i=0 ;i< size ; i++) 
    cin >> arr[i] ; 

sort(arr,arr+size) ;

int counter = 1 ;
int arrofcount[size] = {0} ;
int arr2[size] = {0} ;

for (int i=0 ;i<size ;i++)        
    if (arr[i]==arr[i+1])
        counter++ ; 
    else{
        arrofcount[i]= counter ;  
        counter = 1 ;  
    }

int save=0 ;
int max = arrofcount[0] ;
for (int i=1 ;i< size ; i++)
    if (arrofcount[i]>max)
    {
        max=arrofcount[i] ;
         save = i ;
    }
cout << arr[save] << endl ;
}
