// Program to swap two variables with the help of third variable
#include<iostream>
using namespace std;

int main()
{
// Variable declaration
    int firstNumber;
    int secondNumber;
    int tempVariable;

    // User Input
    cout<<"Enter first number: "; 
    cin>>firstNumber;

    cout<<"Enter second number: "; 
    cin>>secondNumber;

    //Before swapping
    cout<<"Before Swapping: "<<firstNumber<<" "<<secondNumber<<endl;

    //swap logic
    tempVariable = firstNumber;
    firstNumber = secondNumber;
    secondNumber = tempVariable;

    //After Swapping
    cout<<"After Swapping: "<<firstNumber<<" "<<secondNumber;

    return 0;
}