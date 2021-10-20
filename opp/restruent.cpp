#include<iostream>
using namespace std;
class restruent
{
	public:
		void disptch()
		{
			cout<<"menu\n\n";
		}
};
class   home1:public restruent
{
	public:
			void disptch()
		{
			cout<<"biryani\n\n";
		}
};
class home2:public restruent
{
	public:
		void disptch()
		{
			cout<<"pizza \n\n";
		}
};
class home3:public restruent
{
	public:
		void disptch()
		{
			cout<<"soft drinks \n\n";
		}
};
int main()
{
restruent a;
a.disptch();
home1 b;
b.disptch();
home2 c;
c.disptch();
home3 d;
d.disptch();

}
