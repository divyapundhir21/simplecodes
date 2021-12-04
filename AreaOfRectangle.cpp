// Program to find the area of rectangle

#include<iostream>
using namespace std;

int main()
{
    int length;
    int breadth;
    int areaOfRectangle = 0;

    cout<<"Enter length of the rectangle: "; 
    cin>>length;

    cout<<"Enter breadth of the rectangle: ";
    cin>>breadth;

    areaOfRectangle = length * breadth;

    cout<<"Area of rectangle is: "<<areaOfRectangle;


    return 0;
}