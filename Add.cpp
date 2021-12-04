// Program to add two numbers

#include<iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    int sum=0;
    cout<<"Enter first number: "<<endl; 

    // cin is used to take iputs from the user
    
    cin>>number1;
    cout<<"Enter second number: "<<endl; 
    cin>>number2;

    sum = number1 + number2;


/*
sum has the addition of two numbers now

*/
    cout<<"Sum is: "<<sum;

    
    return 0;
}