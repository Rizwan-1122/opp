#include <iostream>
#include <string>
using namespace std;
class product {
	public:
		string brand = "toyota";
		void vehical() {
		cout << "my car \n" ;	
		}
};

class car: public product {
	public:
		string model = "honda";
		};
		
		int main()
		{
		car mycar;
		cout << mycar.brand + " " + mycar.model;
	}
