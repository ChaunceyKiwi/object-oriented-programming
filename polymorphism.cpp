#include <iostream>
using namespace std;

class Shape {
  protected:
    int width, height;

  public:
    Shape(int w = 0, int h = 0) {
      width = w;
      height = h;
    }

    /* A virtual function is a function in a base class
     * that is declared using the keyword virtual. Defining
     * in a base class a virtual function, with another version
     * in a derived class, signals to the compiler that we
     * don't want static linkage for this function. */
    virtual void printArea() {
      cout << "Parent class area: " << endl;
    }
};

class Rectangle: public Shape {
  public:
    Rectangle(int h = 0, int w = 0) : Shape(h, w) {}

    void printArea() {
      cout << "Rectangle class area: " << width * height << endl;
    }
};

class Triangle: public Shape {
  public:
    Triangle(int a = 0, int b = 0) : Shape(a, b) {}

    void printArea() {
      cout << "Triangle class area: " << ((width * height) / 2) << endl;
    }
};

int main(void)
{
  Shape *shape;
  Rectangle rec(10, 7);
  Triangle tri(10, 5);

  /* store the address of rectangle */
  shape = &rec;

  /* call rectangle area */
  shape->printArea();

  /* store the address of triangle */
  shape = &tri;

  /* call triangle area */
  shape->printArea();

  return 0;
}
