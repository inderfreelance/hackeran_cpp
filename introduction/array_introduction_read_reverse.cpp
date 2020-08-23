//https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numbers;
    cin >> numbers;
    int r_i;
    int arr[numbers];
    int temp;
    for (r_i=0;r_i<numbers;r_i++){
        cin >> temp;
        arr[r_i]=temp;
    };    
    int i;
    for (i=numbers-1;i>=0;i--){
        cout << arr[i] <<' ';
    };
    
    return 0;
}