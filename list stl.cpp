#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>l;
	l.push_back(1);
	l.push_front(2);
	l.push_front(3);
	l.push_front(4);
	cout<<"List : ";
	for(int i :l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	l.pop_back();
	cout<<"List becomes after popping one element : ";
	for(int i:l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	l.erase(l.begin());
	cout<<"Eliminating second element : size = "<<l.size()<<endl;
	cout<<"Remaining : ";
	for(int i:l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
