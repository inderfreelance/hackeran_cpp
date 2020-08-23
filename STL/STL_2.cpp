//https://www.hackerrank.com/challenges/cpp-sets/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>new_set;

    int num_queries,i,temp_1,temp_2;
    cin >> num_queries;

    for (i=0;i<num_queries;i++){
        cin >> temp_1;
        cin >> temp_2;
        // cout<<"DEBUG::"<<temp_1<<"::";
        if (temp_1==1){
            new_set.insert(temp_2);
        }
        if(temp_1==2){
            new_set.erase(temp_2);
        }
        else if(temp_1==3){
            if (new_set.count(temp_2)){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }

    return 0;
}



