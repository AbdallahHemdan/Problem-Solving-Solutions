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


using namespace std ; 
int main()
{
int n,updown = 0,res = 0;
char c;
cin >> n;

for(int i = 0; i< n;i++){
    cin >> c;
if(c == 'U')
    updown++;
else 
    updown--;
if(updown == 0 && c == 'U')
    res++;
}
cout << res << endl;
return 0;
}
