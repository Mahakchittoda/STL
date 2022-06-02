#include<iostream>
#include<set>
using namespace std;
int main()
{ 
	set<int>s;
	s.insert(34);
	s.insert(5);
	s.insert(56);
	s.insert(100);
	s.insert(77);
	s.insert(120);
	
	for(auto i:s)
	{
		cout<<i<<endl;
	}
	cout<<endl;
	cout<<"After erasing 3rd element : "<<endl;
	set<int>::iterator it=s.begin();
	
	it++;
	it++;
	s.erase(it);
	for(auto i:s){
		cout<<i<<endl;
	}
	cout<<endl;
	cout<<"-5 is present or not  :"<<s.count(-5)<<endl;
	set<int>::iterator itr=s.find(34);
	for(auto it=itr;it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}