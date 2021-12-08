#include <iostream>
using namespace std;

int main()
{
  int number;
    cout << "Enter a number for which you want to print table: ";
    cin>>number;
    for(int i =1;i<11;i++)
    {
      cout<<number<<" X "<<i<<" = "<<number*i<<endl;
    }
}