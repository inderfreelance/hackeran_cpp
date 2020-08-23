//https://www.hackerrank.com/challenges/preprocessor-solution/problem
#include <vector>
using namespace std;

#define INF 8888888
// replacing the for loop
#define foreach(v,i) for(int i=0;i<n;i++)
//replacing the further ops that will load into vector
#define io(v) int len=0;cin>>len;vector <int>vv(v.size());vv[i] = len;v[i]=vv
#define toStr(s) #s

//writing the function
// as inputs we get opearation and greater or less than sign
//..pretty much like a decorator in python
#define FUNCTION(a,b) void a(int& x, int& y){if (y b x)x=y;}


#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}