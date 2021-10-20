#include <iostream>
using namespace std;


class automobile {
  public:
    void drive() {
      cout << "i drive this car to school.\n" ;
    }
};


class ford {
  public:
    void breaks() {
      cout << "car breaks are used to stop the cars.\n" ;
    }
};


class aqua: public automobile, public ford {
};

int main() 
{
	aqua a;
  a.familycar;
  a.breaks();
  a.drive();
  
}
