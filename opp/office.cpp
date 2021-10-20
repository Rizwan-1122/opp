#include<iostream>
using namespace std;
 class organization{
 	public:
 		void office_assitant()
 		{
 			cout<<"the scale of officer department is 17\n\n";
		 }
 };
 
 class department_1 :public organization
 {
 	public:
 		void office_assistant()
 		{
 			cout<<"the scale of affice departmeni is 14\n\n";
		 }
 };
 
  class department_2:public organization   
 {
 	public:
 		void office_assitant()
 		{
 			cout<<"the scale of office department is 12\n\n";
		 }
 };
 
  class department_2:public organization   
 {
 	public:
 		void office_assitant()
 		{
 			cout<<"the scale of office department is 16\n\n";
		 }
 };
 
 int main()
 {
 	organization a;
 	a.office_assitant();
department_1 b;
	b.office_assitant;
	
	department_2 c;
	c.office_assitant;
	department_3 d;
	d.office_assitant;	
 }

