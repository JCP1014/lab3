#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int amount;
	int i;
	int total=0;
	vector<int> cow;
	ifstream in("file.in",ios::in);

	in >> amount;
	cow.resize(amount);
	for(i=0;i<cow.size();i++)
		in >> cow[i];
	sort(cow.begin(),cow.end());
	for(i=cow.size()-1;i>cow.size()-6;i--)
		total+=cow[i];
    cout << total << endl;

	return 0;
}
