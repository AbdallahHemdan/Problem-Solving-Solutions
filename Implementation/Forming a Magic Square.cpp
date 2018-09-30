#include <bits/stdc++.h>
using namespace std;
 
// Return if given vector denote the magic square or not.
bool is_magic_square(vector<int> v)
{
    int a[3][3];
 
    // Convert vector into 3 X 3 matrix
    for (int i = 0; i < 3; ++i) 
        for (int j = 0; j < 3; ++j) 
            a[i][j] = v[3 * i + j];       
 
    int s = 0;
    for (int j = 0; j < 3; ++j)
        s += a[0][j];
 
    // Checking if each row sum is same
    for (int i = 1; i <= 2; ++i) {
        int tmp = 0;
        for (int j = 0; j < 3; ++j)
            tmp += a[i][j];
        if (tmp != s)
            return 0;
    }
 
    // Checking if each column sum is same
    for (int j = 0; j < 3; ++j) {
        int tmp = 0;
        for (int i = 0; i < 3; ++i)
            tmp += a[i][j];
        if (tmp != s)
            return 0;
    }    
 
    // Checking if diagonal 1 sum is same
    int tmp = 0;
    for (int i = 0; i < 3; ++i)
        tmp += a[i][i];
    if (tmp != s)
        return 0;    
 
    // Checking if diagnol 2 sum is same
    tmp = 0;
    for (int i = 0; i < 3; ++i)
        tmp += a[2 - i][i];
    if (tmp != s)
        return 0;
    return 1;
}
 
// Generating all magic square
void find_magic_squares(vector<vector<int> >& magic_squares)
{
    vector<int> v(9);
 
    // Initialing the vector
    for (int i = 0; i < 9; ++i)
        v[i] = i + 1;
 
    // Producing all permutation of vector
    // and checking if it denote the magic square or not.
    do {
        if (is_magic_square(v)) {
            magic_squares.push_back(v);
        }
    } while (next_permutation(v.begin(), v.end()));
}
 
// Return sum of difference between each element of two vector
int diff(vector<int> a, vector<int> b)
{
    int res = 0;
 
    for (int i = 0; i < 9; ++i)
        res += abs(a[i] - b[i]);
 
    return res;
}
 
// Wrapper function
int wrapper(vector<int> v)
{
    int res = INT_MAX;
    vector<vector<int> > magic_squares;
 
    // generating all magic square
    find_magic_squares(magic_squares);
 
    for (int i = 0; i < magic_squares.size(); ++i) {
 
        // Finding the difference with each magic square
        // and assigning the minimum value.
        res = min(res, diff(v, magic_squares[i]));
    }
    return res;
}
 
// Driven Program
int main()
{
    // Taking matrix in vector in rowise to make 
    // calculation easy
    vector<int> v;
    int x ;
    for(int i=0 ;i<9 ;i++)
    {
        cin >> x ; 
        v.push_back(x);
    }
    cout << wrapper(v) << endl;
}
