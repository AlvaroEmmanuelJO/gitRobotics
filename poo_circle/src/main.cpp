#include <string>
#include <iostream>

const double VAR_PI = 3.1416;

class Circle
{
private:
    double radius_;
    std::string color_;
public:
    Circle(double radius, std::string color);
    Circle();
    ~Circle();
    void update(double radius, std::string color);
    double getRadius() const;
    std::string getColor() const;
    double getArea() const;
};

int main()
{
    Circle circle1;

    std::cout << circle1.getColor() << " " << circle1.getRadius() << "\n";
    circle1.update(5.0, "Blue");
    std::cout << circle1.getColor() << " " << circle1.getRadius() << "\n";

    Circle circle2;
    return 0;
}

Circle::Circle()
{
    radius_ = 1.0;
    color_ = "red";
}
Circle::Circle(double radius, std::string color)
{
    radius_ = radius;
    color_ = color;
}Circle::~Circle()
{

    std::cout << "destroyed \n";
}
void Circle::update(double radius, std::string color)
{
    radius_ = radius;
    color_ = color;
}
double Circle::getRadius() const
{
    return radius_;
}
std::string Circle::getColor() const
{
    return color_;
}
double Circle::getArea() const
{
    return radius_*radius_*VAR_PI;
}