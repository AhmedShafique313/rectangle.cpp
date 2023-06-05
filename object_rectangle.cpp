#include<iostream>
using namespace std;
// creating class for object rectangle
class rectangle
{
    private:
        double length;
        double width;
    public:
        double setLength(double);
        double setWidth(double);
        double getLength() const;
        double getWidth() const;
        double getArea() const;
};

// now functioning the class
double rectangle:: setLength(double len)
{
    length=len;
}

double rectangle:: setWidth(double w)
{
    width=w;
}
double rectangle:: getLength() const
{
    return length;
}

double rectangle:: getWidth() const
{
    return width;
}

double rectangle:: getArea() const
{
    return length * width;
}

// main function
int main()
{
    // instance of class
    rectangle box;
    // local variables
    double rect_length;
    double rect_width;
    // getting rectangle length and width from the user.
    cout<<"Enter the length of Rectangle: ";
    cin>>rect_length;
    cout<<endl;
    cout<<"Enter the width of Rectangle: ";
    cin>>rect_width;
    cout<<endl;

    // store in length and widht functions of class
    box.setLength(rect_length);
    box.setWidth(rect_width);
    // printing outputs
    cout<<"Here the area of Rectangle: "<<box.getArea()<<endl;
    return 0;
}
