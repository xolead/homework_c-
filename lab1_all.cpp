
#include <iostream>
#include "lab1.h"




int main()
{
    //2 задание
    //int sum;
    //sum = sumLastNums("Введите  число х");
    //std::cout<<"sumLastNums = "<<sum<<std::endl;
    
    
    //4 задание
    //int x;
    //x = input("Введите  число х");
    //isPositive(x);
    
    
    //6 задание
    //char x;
    //x = inputChar("Введите  английскую букву");
    //isUpperCase(x);
    
    
    //8 задание
    //int a, b;
    //a = input("Введите  число a");
    //b = input("Введите  число b");
    //isDivisor(a,b);
    
    
    //10 задание
    //int a, b;
    //a = input("Введите  число a");
    //b = input("Введите  число b");
    //lastNumSum(a,b);
    
    
    //2 часть
    
    
    //1 задание
    //short int a;
    //a = input("Введите число для нахождения его модуля");
    //absDigit(a);
    
    //3 задание
    //short int a;
    //a = input("Введите число для проверки делимости на 3 и/или 5");
    //is35(a);
    
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
    //sum2(a,b);


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
    //numLen(a);


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


