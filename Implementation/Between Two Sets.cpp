#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
int n, m;
cin >> n >> m ;
int a[n], b[n];
for (int i=0; i<n; i++)
    cin >> a[i] ; 
for (int i=0; i<m; i++)
     cin >> b[i];
int cnt = 0;
sort(a,a+n);
sort(b,b+m);
for (int k=a[0] ; k <= b[m-1] ; k++ ){
    int flag = 1;
     for (int i=0; i<n; i++)
        if (k % a[i] != 0)
            flag = 0;
        for (int i=0; i<m; i++)
            if (b[i] % k != 0)
                flag = 0;
        if (flag == 1)
            cnt ++;
    }
    cout << cnt << endl ;
}
