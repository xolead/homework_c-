
#include <iostream>
#include "lab1.h"




int main()
{
    //2 задание
    //int x;
    //x = input("Введите  число х");
    //std::cout<<"сумма = "<<sumLastNums(x)
    
    
    
    //4 задание
    //int x;
    //x = input("Введите  число х");
    //std::cout<<"otvet = "<<std::boolalpha<<isPositive(x)<<std::endl;
    
    
    //6 задание
    //char x;
    //x = inputChar("Введите  английскую букву");
    //std::cout<<"otvet = "<<std::boolalpha<<isUpperCase(x);<<std::endl;
    
    
    //8 задание
    //int a, b;
    //a = input("Введите  число a");
    //b = input("Введите  число b");
    //
    //std::cout<<"otvet = "<<std::boolalpha<<isDivisor(a,b);<<std::endl;
    
    
    //10 задание
    //int a, b;
    //a = input("Введите  число a");
    //b = input("Введите  число b");
    //
    //std::cout<<"Сумма = "<<lastNumSum(a,b)<<std::endl;
    
    
    //2 часть
    
    
    //1 задание
    //short int a;
    //a = input("Введите число для нахождения его модуля");
    //std::cout<<"Сумма = "<<absDigit(a)<<std::endl;
    
    //3 задание
    //short int a;
    //a = input("Введите число для проверки делимости на 3 и/или 5");
    //std::cout<<"otvet = "<<std::boolalpha<<is35(a)<<std::endl;
    
    //5 задание
    //short int a,b,c;
    //a = input("Введите первое число ");
    //b = input("Введите второе число");
    //c = input("Введите третье число");
    //max3(a,b,c);
    
    
    //7 задание
    //short int a,b;
    //a = input("Введите первое число ");
    //b = input("Введите второе число ");
    //std::cout<<"otvet = "<<std::<<sum2(a,b)<<std::endl;


    //9 задание
    //short int a;
    //a = input("Введите число для проверки дня недели ");
    //day(a);


    //3 часть

    //1 задание

    //int x = input("Введите конечно число ");
    //std::cout<< ListNums(x);

    //3 задание

    //int x = input("Введите конечно число четных ");
    //std::cout<< chet(x);


    //5 задание
    //long int a;

    //a = input("Введите число для подсчета кол-во знаков ");
    //std::cout<< numLen(a);


    //7 задание
    //int a = input("Введите длину стороны квадрата ");
    //square(a);

    //9 задание
    //int a = input("Введите высоту треугольника, выровненного по правому краю ");
    //rightTriangle(a);




    //4 часть

    // 1 задание
    //int x, count;
    //int *newarr;
    //newarr = inputArr(&count);
    //x = input("Введите число для его поиска по списку ");
    //std::cout << "Первое вхождение числа находится по индексу: "
             // << findFirst(newarr, x, count) << std::endl;
    //delete newarr;



    //2 задание
    int x, count;
    int *newarr;
    newarr = inputArr(&count);
    x = input("Введите число для его поиска по списку ");
    std::cout << "Первое вхождение числа находится по индексу: "
              << findLast(newarr, x, count) << std::endl;
    delete newarr;
    return 0;
}

