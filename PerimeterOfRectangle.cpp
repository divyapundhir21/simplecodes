// Program to find the Perimeter of rectangle

#include<iostream>
using namespace std;

int main()
{
    int length;
    int breadth;
    int perimeterOfRectangle = 0;

    cout<<"Enter length of the rectangle: "; 
    cin>>length;

    cout<<"Enter breadth of the rectangle: ";
    cin>>breadth;

    perimeterOfRectangle = 2*(length + breadth);

    cout<<"Perimeter of rectangle is: "<<perimeterOfRectangle;


    return 0;
}