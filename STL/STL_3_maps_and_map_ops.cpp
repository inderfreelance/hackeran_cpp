//https://www.hackerrank.com/challenges/cpp-maps/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {

    map<string,int>new_map;

    int num_queries,i,temp_1,temp_3;
    string temp_2;
    cin >> num_queries;

    for (i=0;i<num_queries;i++){
        cin >> temp_1;
        // cout<<"DEBUG::"<<temp_1<<"::";
        if (temp_1==1){
            
            cin >> temp_2;
            cin >> temp_3;
            
            //works as the intial values are all initialized with 0 which is
            //....the garbage value
            new_map[temp_2]=temp_3+new_map[temp_2];
            // new_set.insert(temp_2);
        }
        if(temp_1==2){
            cin >> temp_2;
            new_map.erase(temp_2);
        }
        else if(temp_1==3){
            cin >> temp_2;
            cout<<new_map[temp_2]<<endl;
        }
    }

    return 0;
}



