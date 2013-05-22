//============================================================================
// Name        : testC.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<climits>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int p;
	cout<<"input a value:"<<endl;
	cin>>p;
	cout<<p<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<i<<endl;
	}
	cout<<"done"<<" "<<endl;
	cout<<INT_MAX<<endl;
	cout<<INT_MAX+1<<endl;
	cout<<INT_MIN<<endl;
	cout<<-INT_MIN<<endl;
	return 0;
}
