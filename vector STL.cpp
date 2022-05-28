#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	cout<<"Capacity-->"<<v.capacity()<<endl;
	v.push_back(23);
	cout<<"Capacity-->"<<v.capacity()<<endl;
	v.push_back(34);
	cout<<"Capacity-->"<<v.capacity()<<endl;
	v.push_back(50);
	cout<<"capacity-->"<<v.capacity()<<endl;
	cout<<"size-->"<<v.size()<<endl;
	cout<<"Element at index 1 : "<<v.at(1)<<endl;
	cout<<"Front -->"<<v.front()<<endl;
	cout<<"Back -->"<<v.back()<<endl;
	cout<<"Before poping"<<endl;
	for(int i:v)
	{
		cout<<i<<" ";		
	}
	cout<<endl;
	v.pop_back();
	v.pop_back();
	cout<<"after pop "<<endl;
	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"before clear size : "<<v.size()<<endl;
	v.clear();
	cout<<"after clear size : "<<v.size()<<endl;
	cout<<"capacity will remain same :-->"<<v.capacity();
	return 0;
}