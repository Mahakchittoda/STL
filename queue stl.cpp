#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<string>q;
	q.push("Mahak");
	q.push("Chittoda");
	cout<<"Size before pop : "<<q.size()<<endl;
	cout<<"First element : "<<q.front()<<endl;
	q.pop();
	cout<<"Size after pop : "<<q.size()<<endl;
	cout<<"First element : "<<q.front()<<endl;
	return 0;
	
}