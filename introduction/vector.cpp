//https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// using namespace std;

#include<vector>
using namespace std;

int main() {
    int n, q, k;
    cin >> n >> q;
    vector <vector <int> > a(n);
    for(int i=0; i<n; i++){
        cin >> k;
        a[i].resize(k);
        for(int j=0; j<k; j++){
            cin >> a[i][j];
        }
    }
    int x1, y1;
    for(int i=0; i<q; i++){
        cin >> x1 >> y1;
        cout << a[x1][y1] << endl;
    }
    return 0;
}
