#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<string>S;
	S.push("Mahak");
	S.push("Ravindra");
	S.push("Chittoda");
	cout<<"Stack : ";
	cout<<"Size of stack : "<<S.size()<<endl;
	cout<<"Top element : "<<S.top()<<endl;
	S.pop();
	cout<<"Size of stack : "<<S.size()<<endl;
	cout<<"Empty or not : "<<S.empty()<<endl;
	cout<<"Top element : "<<S.top()<<endl;
	return 0;
}