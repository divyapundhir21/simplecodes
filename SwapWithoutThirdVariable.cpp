// Program to swap two variables without using the third variable
#include<iostream>
using namespace std;

int main()
{
// Variable declaration
    int firstNumber;
    int secondNumber;
    

    // User Input
    cout<<"Enter first number: "; 
    cin>>firstNumber;

    cout<<"Enter second number: "; 
    cin>>secondNumber;

    //Before swapping
    cout<<"Before Swapping: "<<firstNumber<<" "<<secondNumber<<endl;

    //swap logic without third variable
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    //After Swapping
    cout<<"After Swapping: "<<firstNumber<<" "<<secondNumber;

    return 0;
}