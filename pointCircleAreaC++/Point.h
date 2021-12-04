//definition of class Point
#include <iostream>
using namespace std;
class Point {
public:
    //constructor
    Point(double xcoord = 0.0, double ycoord = 0.0)
    {
        x = xcoord;
        y = ycoord;
    }
    // destructor
    virtual ~Point() = default;
    virtual void input(const char* prompt){}
    virtual void output() {
        cout << "Coordinates: (" << getX() << "," << getY() << ")\n";
    }
    virtual double area() const { return 0; }
    void move(double deltax, double deltay)
    {
        x += deltax;
        y += deltay;
    }
    void setX(double a)
    {
        x = a;
    }
    void setY(double a)
    {
        y = a;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
private:
    double x;
    double y;
};


