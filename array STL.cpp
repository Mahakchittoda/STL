#include<array>
#include<iostream>
using namespace std;
int main()
{
	array<int,5> a={1,2,3,4,5};
	int size=a.size();
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Element at index 3 --> "<<a.at(3)<<endl;
	cout<<"Empty or not --> "<<a.empty()<<endl;
	cout<<"First element --> "<<a.front()<<endl;
	cout<<"Last element --> "<<a.back()<<endl;
return 0;
}