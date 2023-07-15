#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
	unordered_map<string, int> umap;
	umap["Ali"] = 90;
	umap["Shawaal"] = 10;
	umap["Nancy"] = 30;
	
	for (auto x : umap)
	{
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}