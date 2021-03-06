//https://www.hackerrank.com/challenges/deque-stl/problem?isFullScreen=false
//The code borrows heavily from this tutorial at geeks for greeks 
// https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/


#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    std::deque<int> Qi(k); 
  
    /* Process first k (or first window) elements of array */
    int i; 
    for (i = 0; i < k; ++i) { 
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back(); // Remove from rear 
  
        // Add new element at rear of queue 
        Qi.push_back(i); 
    } 
  
    for (; i < n; ++i) { 
        cout << arr[Qi.front()] << " "; 
        while ((!Qi.empty()) && Qi.front() <= i - k) 
            Qi.pop_front(); // Remove from front of queue 

        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back();  
        Qi.push_back(i); 
    } 
  
    cout << arr[Qi.front()] << endl; 
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