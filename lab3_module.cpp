#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;


class Time 
{
public:
    int time_s;
    void print() 
    {
        while (time_s > 86400)
            time_s -= 86400;

        string str_hours, str_minute, str_secunde;
        int hours = time_s /60 / 60;
        time_s -=  hours *3600;
        int minute = time_s /60 ;
        time_s -= minute * 60;
        int secunde = time_s;
        
        if (hours < 10 )
            str_hours = "0" + to_string(hours);
        else
            str_hours = to_string(hours);

        if (minute < 10 )
            str_minute = "0" + to_string(minute);  
        else
            str_minute = to_string(minute);

        if (secunde < 10 )
            str_secunde = "0" + to_string(secunde);  
        else
            str_secunde = to_string(secunde);
        
        cout<< str_hours<<':'<<str_minute<<":"<<str_secunde<<endl;
    }
    Time(int n_time_s)
    {
        time_s = n_time_s;
    }
};


class House
{

private:
    int p_floors;
public:
    int getFloors() { return p_floors; };
    string forms;

    void setFloors(int floors)
    {
        p_floors = floors;
    }
    void print()
    {
        int aboba = getFloors();
        if (aboba == 1 || (aboba % 10 == 1 && aboba !=11))
            forms = "этажом";
        else
            forms = "этажами";
        cout<<"дом с "<< aboba << " " << forms << endl;
    }
    House(int n_floors)
    {
        this->p_floors = n_floors;
    }
};

class Pistol
{
public:
    int ammo;

    Pistol(int n_ammo)
    {
        ammo = n_ammo;
    }

    Pistol()
    {
        ammo = 5;
    }
    
    void print()
    {
        if (ammo > 0)
            cout<<"БАХ"<<endl;
        else 
            cout<<"Клац"<<endl;
        ammo -= 1;
    }
};

int myIntInput(std::string str)
{
    std::cout << str;
    int a;
    std::cin >> a;
    return a;
}