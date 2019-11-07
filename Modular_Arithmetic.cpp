/*
	  @algorithm   : Modular Arithmetic
    @author      : Amirul Islam
	  @problem     : 100! % 97
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int mx = 1e5+4;

/*
    two formula
    -----------
    1. (a + b) % m = ( (a % m) + (b % m) ) % m
    2. (a * b) % m = ( (a % m) * (b % m) ) % m 
    
*/

int main() {
    //freopen("in", "r", stdin);

    int n = 100, m = 97;
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = ( (fact % m) * (i % m) ) % m;
    }
    printf("%d\n", fact); // fact = 0
    return 0;
}
