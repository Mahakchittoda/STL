#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string>m;
	m[1]="Mahak";
	m[2]="Ravindra";
	m[3]="Sunita";
	m.insert({4,"Chittoda"});
	cout<<"before erase"<<endl;
	for(auto i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<"finding 14 -> "<<m.count(14)<<endl;
	cout<<"after erase "<<endl;
	m.erase(3);
	for(auto i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
		
	}
	cout<<endl;
	auto it=m.find(2);
	for(auto i=it;it!=m.end();i++)
	{
		cout<<(*i).first<<" "<<(*i).second<<endl;
	}
	return 0;
}