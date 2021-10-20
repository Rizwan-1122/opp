#include<iostream>
using namespace std;
class university {
	public:
		void teach()
		{
			cout<<"every teacher teach somthing\n";
			
		}
};

class cs : public university{
	public:
	void teach ()
	{
		cout<<"teacher of computer science\n";
	}
};

class Maths : public university{
	public:
	void teach()
	{
		cout<<"teacher of maths\n";		
	}
};
 
 int main()


 {
 university u;
 u.teach();

 Maths a;
 a.teach();
 
 cs s;
 s.teach();
 

 }
