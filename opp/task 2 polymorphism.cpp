#include<iostream>
using namespace std;
class Organization
{
	public:
		void office_assistant()
		{
			cout<<"The scale of Orgainzation Office_Assistant is 17 \n\n";
		}
};
class Department1:public Organization
{
	public:
			void office_assistant()
		{
			cout<<"The scale of Department1 Office_Assistant is 14 \n\n";
		}
};
class Department2:public Organization
{
	public:
		void office_assistant()
		{
			cout<<"The scale of Department2 Office_Assistant is 12 \n\n";
		}
};
class Department3:public Organization
{
	public:
		void office_assistant()
		{
			cout<<"The scale of Department3 Office_Assistant is 16 \n\n";
		}
};
int main()
{
Organization a;
a.office_assistant();
Department1 b;
b.office_assistant();
Department2 c;
c.office_assistant();
Department3 d;
d.office_assistant();

}
