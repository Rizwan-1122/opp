#include <iostream>
using namespace std;
class Mobiles {
   public:
    void info() {
        cout << "G\n\n";
    }
};

class Samsung{
   public:
    void black() {
        cout << "B\n\n";
    }
};
class Apple {
   public:
    void gold() {
        cout << "E\n\n"; 
    }
};
class Huawei{
   public:
    void silver() {
    cout << "A\n\n";
};
class Brands:public Mobiles, public Samsung
{
public:
void gold()
{
cout<<"C\n\n";
}
};
class Android{
public:
void os()
{
cout<<"D\n\n";
}
};
class Models:public Mobiles, public Apple, public Android
{
public:
void multi()
{
cout<<"F\n\n";
}
};
int main()
{
Brands a;
a.samsung();
a.black();
a.white();
a.silver();
 
 Models b;
 b.apple();
 b.silver();
 b.graphite();
 b.sierra blue();
 
};


