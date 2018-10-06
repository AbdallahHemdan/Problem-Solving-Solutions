#include <iostream>
#include<cmath>
#include <string>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<iomanip>
#include<assert.h>
#include<vector>
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
using namespace std;
int reve (int num){
int new_num = 0;
while(num > 0){
    new_num = new_num*10 + (num % 10);
    num = num/10;
}
return new_num ;
}
int main(){
int i , j, k ;
cin >>i>>j>>k;
int counter =0 ;
for (int h=i ;h<=j ;h++){
    int temp =  reve(h) ;
    if (abs(temp-h)%k==0)
        counter ++ ;
}
cout << counter << endl ;
}
