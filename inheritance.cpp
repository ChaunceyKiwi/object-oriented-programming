#include <iostream>
using namespace std;

/* Base class */
class Shape {
  public:
    void setWidth(int w) {
      width = w;
    }
    void setHeight(int h) {
      height = h;
    }

  protected:
    int width;
    int height;
};

/* Derived class */

/* A derived class inherits all base class methods
 * with the following exceptions:
 * 1. Constructors, destructors and copy constructors of the base class
 * 2. Overloaded operators of the base class
 * 3. The friend functions of the base class
 */

/* When deriving a class from a base class, the base class may be inherited
 * through public, protected or private inheritance.
 * 1. Public Inheritance: public -> public, protected -> protected
 * 2. Protected Inheritance: public, protected -> protected
 * 3. Private Inheritance: public, protected -> private
 */
class Rectangle: public Shape {
  public:
    int getArea() {
      return width * height;
    }
};

int main(void)
{
  Rectangle rect;
  rect.setWidth(5);
  rect.setHeight(7);

  /* print the area of the object */
  cout << "Total area: " << rect.getArea() << endl;
  return 0;
}
