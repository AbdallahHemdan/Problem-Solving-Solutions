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


using namespace std ;

int main ()
{
    int hour , m , s ;
    char ch ;
    scanf(" %d : %d : %d%c " , &hour , &m , &s ,&ch ) ;
    if (ch =='P')
        if (hour!=12)
            hour += 12 ;
    else if (hour==12)
        hour = 0 ;
    
    printf("%02d:%02d:%02d",hour,m,s) ;
}
