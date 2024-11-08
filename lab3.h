#include "lab3_module.cpp"
#include <iostream>

class Person;
int myIntInput();



#include <iostream>
#include <vector>
#include <map>
using namespace std;


class QuadraticEquation
{
  public:
    double a,b,c;
    
    double discrim()
    {
        return (b*b)-(4*a*c);
    }
    
    
    
    void print()
    {
        cout<<discrim();
    }
};

int main()
{
    QuadraticEquation abc(1,4,4);
    abc.print();
    return 0;
}
