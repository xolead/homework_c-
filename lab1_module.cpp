#include <iostream>
#include <iterator>

int input(std::string str)
{
    std::cout << str << std::endl;
    int a;
    std::cin >> a;
    return a;
}

char inputChar(std::string str)
{
   std::cout << str << std::endl;
    char a;
    std::cin >> a;
    return a; 
}

int *inputArr(int *count) {
  std::cout << "Введите кол-во чисел в массиве: ";
  std::cin >> *count;
  int *arr{new int[*count]};
  for (int i = 0; i < *count; i++) {
    std::cout << "Введите элемент массива: ";
    std::cin >> arr[i];
  }
  return arr;
}


//2 задание
int sumLastNums (std::string str)
{
    std::cout << str << std::endl;
    int a,x, b, sumLastNums;
    std::cin >> x;
    a = x % 10;
    b = x / 10 % 10;
    std::cout<<"a = "<<a<<" b = "<<b<<std::endl;
    sumLastNums = a + b;
    return sumLastNums;
}

//4 задание
bool isPositive (int x)
{
    bool c ;
    c = x>=0;
    std::cout<<"otvet = "<<std::boolalpha<<c<<std::endl;
    return 0;
}

//6 задание
bool isUpperCase (char x)
{
    bool c;
    c = isupper(x);
    std::cout<<"otvet = "<<std::boolalpha<<c<<std::endl;
    return 0;
}

//8 задание
bool isDivisor (int a, int b)
{
    int sum;
    bool c, d,e;
    c = ((a%b) == 0);
    d = (b%a) == 0;
    sum = c + d;
    e = sum > 0;
    std::cout<<"otvet = "<<std::boolalpha<<e<<std::endl;
    return 0;
}

//10 задание
int lastNumSum(int a, int b)
{
    int c,sum;
    c = a % 10;
    sum = c;
    c = b % 10;
    sum += c;
    std::cout<<"Сумма = "<<sum<<std::endl;
    return 0;
}


//  2 часть 
// 1 задание
int absDigit (short int x)
{
    std::cout<<"модуль числа = "<<abs(x)<<std::endl;
    return 0;
}


// 3 задание
bool is35 (short int x)
{
    bool a = ((x%3 == 0 && x % 5 != 0) || (x%3 !=0 && x % 5 == 0));
    
    if (a)
        std::cout<<"otvet = "<<std::boolalpha<<a<<std::endl;
    else
        std::cout<<"otvet = "<<std::boolalpha<<a<<std::endl;
    return 0;
}


// 5 задание
int max3 (int x, int y, int z)
{
    if ((x > y) && (x>z))
        std::cout<<"наибольшее число 1 = "<<x;
    else if ((y>x) && (y>z))
        std::cout<<"наибольшее число 2 = "<<y;
    else
        std::cout<<"наибольшее число 3 = "<<z;
    return 0;
}

// 7 задание
int sum2 (int x, int y)
{
    short int sumd = (x + y);
    if (sumd >= 10 && sumd < 20)
        std::cout<<"Сумма чисел = "<<20; 
    else
        std::cout<<"Сумма чисел = "<<sumd;
    return 0;
}
    

// 9 задание
int day (int x)
{
    if (x <= 7 && x >= 1){
    switch(x % 7)
    {
        case 1: std::cout<<"Понедельник";break;
        case 2: std::cout<<"Вторник";break;
        case 3: std::cout<<"Среда";break;
        case 4: std::cout<<"Четверг";break;
        case 5: std::cout<<"Пятница";break;
        case 6: std::cout<<"Суббота";break;
        case 0: std::cout<<"Ура, воскресенье!!!";break;
    }
    }
    else
        std::cout<<"это не день недели";
    return 0;
}


//3 часть

//1 задание
std::string ListNums(int x) {
  std::string result = "";
  for (int i = 0; i <= x; i++) {
    result += ' ';
    result += char(i + 48);
  }
  return result;
}

//3 задание

std::string chet(int x) {
  std::string result = "";
  result += '0';
  for (int i = 2; i <= x; i += 2) {
    result += ' ';
    result += char(i + 48);
  }
  return result;
}


//5 задание

int numLen (long x)
{
    int i = 0;
    while (x > 0)
    {
        x /= 10;
        i++;
    }
    std::cout<<"знаков в числе = "<< i;
    return 0;
}


//7 задание
void square (int x)
{
    for (int j = 0; j < x; j++){
        for (int i = 0; i < x; i++)
        {
            std::cout<<"*";
        }
            std::cout<<std::endl;
    }
}



//задание
void rightTriangle (int x)
{
    for (int i(0); i!=x; i++){
            for (int j(x); j!=i; j--){
                std::cout << " ";
            }
            for (int r(0); r<=i; r++){
                std::cout << "*";
            }
            std::cout << std::endl;
        }
}


//4 Часть

//1 задание

int findFirst(int arr[], int x, int count) {
  for (int i = 0; i < count; i++) {
    if (arr[i] == x)
      return i;
  }
  return -1;
}

//2 задание

int findLast(int arr[], int x, int count) {
  for (int i = count - 1; i >= 0; i--) {
    if (arr[i] == x)
      return i;
  }
  return -1;
}