#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle r1(5.0, 4.0);

    cout << "Length: " << r1.getLength() << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Area: " << r1.getArea() << endl;

    cout << "\nTesting negative length (-5.0):" << endl;
    Rectangle r2(-5.0, 4.0);
    cout << "Length: " << r2.getLength() << endl;
    cout << "Width: " << r2.getWidth() << endl;
    cout << "Area: " << r2.getArea() << endl;

    cout << "\nTesting negative width (-4.0):" << endl;
    Rectangle r3(5.0, -4.0);
    cout << "Length: " << r3.getLength() << endl;
    cout << "Width: " << r3.getWidth() << endl;
    cout << "Area: " << r3.getArea() << endl;

    return 0;
}