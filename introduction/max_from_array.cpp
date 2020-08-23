// https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int max_of_four(int a,int b,int c,int d){
    int arr[] = {a , b, c, d };
    //part of std max_element
    // int* place_holder;
    int n = sizeof(arr) / sizeof(arr[0]);

    // place_holder =  max(arr);

    return *max_element(arr,arr+n);

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
//    int arr[] = {12, 45, 74, 32, 66, 96, 21, 32, 27};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    cout << "Array is like: ";
//    for (int i = 0; i < n; i++)
//       cout << arr[i] << " ";
//    cout << "\nMax Element is: " << *max_element(arr, arr + n);
// }