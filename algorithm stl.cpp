#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(10);
	v.push_back(20);
	//binary search
	cout<<binary_search(v.begin(),v.end(),10)<<endl;
	cout<<"Lower bound--> "<<lower_bound(v.begin(),v.end(),10)-v.begin()<<endl;
	cout<<"upper bound--> "<<upper_bound(v.begin(),v.end(),10)-v.begin()<<endl;
	cout<<endl;
	//find min and max
	int a=56;
	int b=78;
	cout<<"min : "<<min(a,b)<<endl;
	cout<<"max : "<<max(a,b)<<endl;
	//swaping
	swap(a,b);
	cout<<"a-> "<<a<<"b-->"<<b<<endl;
	//reverse string
	string s="mahak";
	reverse(s.begin(),s.end());
	cout<<"string->"<<s<<endl;
	//rotate
	rotate(v.begin(),v.begin()+1,v.end());
	cout<<"after rotate : "<<endl;
	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	sort(v.begin(),v.end());
	cout<<"Sorted vector : ";
	for(int i:v)
	{
		cout<<i<<" ";
	}
	return 0;
}