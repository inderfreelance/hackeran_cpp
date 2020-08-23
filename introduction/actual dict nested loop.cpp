#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

map<int,string>my_map;



int main() {
    my_map[1]="one";
    my_map[2]="two";
    my_map[3]="three";
    my_map[4]="four";
    my_map[5]="five";
    my_map[6]="six";
    my_map[7]="seven";
    my_map[8]="eight";
    my_map[9]="nine";

    int a,b,i=0;
    cin >> a >> b;
    for (i=a;i<=b;i++){
        if (i<=9){
            for (auto item:my_map){
                if (item.first == i){
                    cout << item.second << endl;
                };
            };
        }else{
            if (i%2 == 0){
                cout<<"even"<<endl;
            }else{
                cout<<"odd" << endl;
            }
        }

    }
    return 0;
}