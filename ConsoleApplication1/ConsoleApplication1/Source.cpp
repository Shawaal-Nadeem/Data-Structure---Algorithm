#include <unordered_map>
#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
	ifstream fin("input.txt");
	if (!fin)
		cout << "File doesnt exist" << endl;
	else
	{
		unordered_map<string, int> ump;
		string para;

		/*int num = 0;
		++num;*/

		while (fin >> para){
			++ump[para];
			//cout << ++ump[word];
		}

		fin.close();

		ofstream fout("output.txt");
		for (auto pair : ump){
			fout << pair.first << ": " << pair.second << endl;
			cout << pair.first << ": " << pair.second << endl;
		}
		cout << "Code ran successfully" << endl;
	}
	return 0;
}