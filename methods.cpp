#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		string subject;
		//method
		void inputdata() //member function
		{
			cout<<"enter id:"<<endl;
			cin>>id;
			cout<<"enter name:"<<endl;
			cin>>name;
			cout<<"enter subject:"<<endl;
			cin>>subject;
		}
		void displaydata()
		{
			cout<<"id:"<<id<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"subject:"<<subject;
		}
};
main()
{
	student obj;
	obj.inputdata();
	obj.displaydata();
}
