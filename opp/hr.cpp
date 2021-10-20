#include <iostream>
#include <string>
using namespace std;
class HR {
	public:
		string  desgination= "marketing manager";
       	string  department= " manager";
       };
       class employe : public HR{
       	public:
       		
       		string salery="12000\n";
        		string emp_id="384\n";
       		
	   };
	   int main(){
	   	
	   	employe a;
	   	cout<<a.desgination;
	   	cout<<a.department;
	   	cout<<a.salery;
	   		cout<<a.emp_id;
	   }
	
