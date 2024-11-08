#include "lab3.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    short unsigned vibor;
    vibor = myIntInput("Введите номер задания ");
    switch (vibor)
    {
        case 1:
        {
            Time time_1(10);
            time_1.print();
            Time time_2(10000);
            time_2.print();
            Time time_3(91800);
            time_3.print();
        }
            break;

        case 2:
        {
            House house1(1);
            house1.print();
            House house2(5);
            house2.print();
            House house3(23);
            house3.print();
        }
            break;

        case 3:
        {
            Employee em1("Петров", "IT");
            Employee em2("Козлов", "IT");
            Employee em3("Сидоров", "IT");
            em2.NewBoss("Козлов");
            std::cout << em1.coutEmployee() << '\n';
            std::cout << em2.coutEmployee() << '\n';
            std::cout << em3.coutEmployee() << '\n';
        }
            break;

        case 6:
            {
            Employee em1("Петров", "IT");
            Employee em2("Козлов", "IT");
            Employee em3("Сидоров", "IT");
            std::vector<std::string> all = em3.outputAllEmployee();
            for (int i = 0; i < 3; i++)
            std::cout << all[i] << '\n';
            }

        case 4:
        {
            House house1(2);
            house1.print();
            House house2(35);
            house2.print();
            House house3(91);
            //house3.p_floors(100);
            house3.print();

        }
            break;

        case 5:
        {
            Pistol pistolet(3);
            pistolet.print();
            pistolet.print();
            pistolet.print();
            pistolet.print();
            pistolet.print();
        }
            break;
    }
    return 0;
}
