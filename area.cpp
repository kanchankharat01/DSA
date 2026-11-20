#include <iostream>
using namespace std;
class rectangle
{
public:
    float length;
    float breadth;

    float calculateArea()
    {
        return (length * breadth);
    }
};
int main()
{
    rectangle r1;
    r1.length = 10;
    r1.breadth = 20;
    cout << "Area of r1 = " << r1.calculateArea() << endl;

    rectangle r2;
    r2.length = 5;
    r2.breadth = 10;
    cout << "Area of r2 = " << r2.calculateArea() << endl;
    return 0;
}
