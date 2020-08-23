//https://www.hackerrank.com/challenges/c-class-templates/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/

//T basically here is the data type of anything
//..therefore below also we will be passing T for 
//..all of our functions
template <typename T>

class AddElements{
    T ele_1;
    public:
        //See this is what makes class callable
        AddElements(T ele){
            ele_1 = ele;
        }
        T add(T ele_2){
            return ele_1 + ele_2;
            }
};

//meaning specific type of templace class is going in
template <>

class AddElements<string>{
    string ele_1;
    public:
        //See this is what makes class callable
        AddElements(string ele){
            ele_1 = ele;
        }
        string concatenate(string ele_2){
            return ele_1 + ele_2;
            }
};


int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
