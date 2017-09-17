#include <iostream>
#include <string>
using namespace std;

/* Function Overloading */
class dataPrinter {
  public:
    /* You can have multiple definitions for the same
     * function name in the same scope. The definition
     * of the function must differ from each other by
     * the types and/or the number of arguments in the
     * argument list. You cannot overload function
     * declarations that differ only by return type. */

    void print(int i) {
      cout << "Printing int: " << i << endl;
    }

    void print(double f) {
      cout << "Printing float: " << f << endl;
    }

    void print(string c) {
      cout << "Printing character: " << c << endl;
    }
};

/* Operators Overloading in C++ */
class Box {
  /* A public member is accessible from anywhere
   * outside the class but within a program. */
  public:
    double getVolume() {
      return length * breadth * height;
    }

    void setLength(double len) {
      length = len;
    }

    void setBreadth(double bre) {
      breadth = bre;
    }

    void setHeight(double hei) {
      height = hei;
    }

    Box operator+ (const Box& b) {
      Box box;
      box.length = this->length + b.length;
      box.breadth = this->breadth + b.breadth;
      box.height = this->height + b.height;
      return box;
    }

  private:
    double length;
    double breadth;
    double height;
};

int main(void)
{
  dataPrinter dp;

  /* call printer to print integer */
  dp.print(5);

  /* call printer to print float */
  dp.print(500.263);

  /* call printer to print string */
  dp.print("Hello World!");

  Box box1;
  Box box2;
  Box box3;

  /* box 1 specification */
  box1.setLength(6.0);
  box1.setBreadth(7.0);
  box1.setHeight(5.0);

  /* box 2 specification */
  box2.setLength(12.0);
  box2.setBreadth(13.0);
  box2.setHeight(10.0);

  /* volume of box1 */
  cout << box1.getVolume() << endl;

  /* volume of box2 */
  cout << box2.getVolume() << endl;

  box3 = box1 + box2;
  cout << box3.getVolume() << endl;

  return 0;
}
