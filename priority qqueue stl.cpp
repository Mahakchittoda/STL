#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int>maxi;
	priority_queue<int,vector<int>,greater<int>>mini;
	maxi.push(100);
	maxi.push(201);
	maxi.push(450);
	maxi.push(580);
	cout<<"Size : "<<maxi.size()<<endl;
	int n=maxi.size();
	for(int i=0;i<n;i++)
	{
		cout<<maxi.top()<<" ";
		maxi.pop();
	}
	cout<<endl;
	mini.push(78);
	mini.push(56);
	mini.push(34);
	mini.push(456);
	int m=mini.size();
	for(int i=0;i<m;i++)
	{
		cout<<mini.top()<<" ";
		mini.pop();
	}
	cout<<endl;
	return 0;
}