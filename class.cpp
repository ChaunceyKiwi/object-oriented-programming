#include <iostream>
using namespace std;

class Box {
  /* A public member is accessible from anywhere
   * outside the class but within a program. */
  public:
    double length;
    double breadth;
    double height;

    double getVolume() {
      return length * breadth * height;
    }

  /* A protected member variable or function is very similar
   * to a private member but it provided one additional benefit
   * that they can be accessed in child classes which are called
   * derived classes. */
  protected:

  /* A private member variable or function cannot be accessed,
   * or even viewed from outside the class. Only the class and friend
   * functions can access private members. */
  private:
};

int main()
{
  Box box1;
  Box box2;

  /* box 1 specification */
  box1.height = 5.0;
  box1.length = 6.0;
  box1.breadth = 7.0;

  /* box 2 specification */
  box2.height = 10.0;
  box2.length = 12.0;
  box2.breadth = 13.0;

  /* volume of boxes */
  cout << "Volume of box1: " << box1.getVolume() << endl;
  cout << "Volume of box2: " << box2.getVolume() << endl;

  return 0;
}
