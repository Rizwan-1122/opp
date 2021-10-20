#include <iostream>
#include <string>
using namespace std;


class car {
  public: 
    string brand = "honda";
    void vechical() {
      cout << "honda \n" ;
    }
};


class Car: public car {
  public: 
    string model = "toyota";
};

int main() {
  Car myCar;
  myCar.car();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

