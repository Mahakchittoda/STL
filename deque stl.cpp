#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>d;
	d.push_back(2);
	d.push_back(4);
	d.push_front(6);
	cout<<"Deque : "<<endl;
	for(int i:d)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	d.pop_back();
	cout<<"Deque after popping one element : "<<endl;
	for(int i:d)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	d.pop_front();
	cout<<"Deque after popping second element : "<<endl;
	for(int i:d)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	d.push_back(5);
	cout<<"Element at index 1 : "<<d.at(1)<<endl;
	cout<<d.empty()<<endl;
	cout<<d.size()<<endl;
	d.erase(d.begin(),d.begin()+1);
	cout<<"eliminate 1st element-->size  : "<<d.size()<<endl;
	cout<<"remaining :"<<endl;
	for(int i :d)
	{
		cout<<i<<" "<<endl;
	}
	return 0;
	
	
	
}