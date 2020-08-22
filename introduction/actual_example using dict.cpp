//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>
#include <map>
using namespace std;

map<int,string>my_map;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    my_map[1]="one";
    my_map[2]="two";
    my_map[3]="three";
    my_map[4]="four";
    my_map[5]="five";
    my_map[6]="six";
    my_map[7]="seven";
    my_map[8]="eight";
    my_map[9]="nine";

    if (n <= 9){
        for (auto item : my_map){
            if (item.first == n){
                cout << item.second;
            };
        };
    }
    else {
        cout <<"Greater than 9";
    }

    return 0;
}