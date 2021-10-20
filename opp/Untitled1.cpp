#include<iostream>
using namespace std;
class cosmatic{
	public:
		void beauty()
		{
			cout<<"g\n\n";
		}
};

class lipstick
{
	public:
		void brown()
		
		{
			cout<<"b\n\n";
		}
};
 class eyeliner
 {
 	public:
 		void lack()
 		{
 			cout<<"e\n\n";
		 }
 };
 
 class liploss
 {
 	public:
 		void yellow()
 		{
 			cout<<"a\n\n";
		 }
 };
 
 class lipliner: public cosmatic,public,lipstick,public,liploss
 {
 	
 	public:
 		void red()
 		{
 			cout<<"c\n\n";
		 }
		 
 };
 
 class maskara {
 	public:
 		void brush()
 		{
 			cout<<"d\n\n";
		 }
 };
 
 class eyeshades:public cosmatic,public eyeliner,public maskara
 {
 	
 	public:
 		void multi()
 		{
 			cout<<"f\n\n";
		 }
 };
 int main()
 {
 	lipliner a;
 	a.beauty();
 	a.brown();
 	a.pink();
 	a.red();
 	
 	eyeshades b;
 	b.beauty();
 	b.black();
 	b.multi();
 	b.brush();
 }
 
 

