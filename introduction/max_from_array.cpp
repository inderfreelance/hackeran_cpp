// https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

// defining a for loop once 
#define for_loop(upper_lim,act_arr) for(int i=0;i<upper_lim;i++)

int max_of_four(int a,int b,int c,int d){
    int arr[] = {a , b, c, d };
    //part of std max_element
    // int* place_holder;

    int count = 0;

    cout << sizeof(arr[0]);



    // why it runs 16 times https://www.educative.io/edpresso/how-to-find-the-length-of-an-array-in-cpp
    for_loop(sizeof(arr),arr){
    
        cout << "I RAN " << count << endl;
        count+=1;
    }

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