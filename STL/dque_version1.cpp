// Not passing all test cases
// https://www.hackerrank.com/challenges/deque-stl/problem?isFullScreen=false
#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	int j,max;

    for(int i=0;i<=n-k;i++){
        max=arr[i];

        for(j=1;j<k;j++){
            if (arr[i+j]>max){
                max = arr[i+j];
            }
        }
        cout << max << " ";
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}