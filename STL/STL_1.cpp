//https://www.hackerrank.com/challenges/cpp-lower-bound/problem?h_r=next-challenge&h_v=zen
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,arr_len,j;
    cin >> arr_len;
    int arr[arr_len]; 

    for (i=0;i<arr_len;i++){
        cin >> arr[i];
    }

    int num_queries,temp_num;
    cin >> num_queries;

    for (i=0;i<num_queries;i++){
        cin >> temp_num;
        for (j=0;j<arr_len;j++){
            if (temp_num<=arr[j]){
                if (temp_num==arr[j]){
                    cout << "Yes "<<j+1 <<endl;
                }
                else{
                    cout <<"No " <<j+1<<endl;
                }
                break;
            }
        //     else{
        //         break;
        //     }
        }
    }
    return 0;
}
