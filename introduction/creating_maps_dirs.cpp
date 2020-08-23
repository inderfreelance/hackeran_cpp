// https://chryswoods.com/beginning_c++/lists.html
#include <map>
#include <iostream>

using namespace std;

map<int,int> my_map;

int main()
{
	my_map[1] = 31;

	for (auto item : my_map){
		cout << item.second;
	}

	return 0;
};