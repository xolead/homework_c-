#include <iostream>
#include <iterator>
#include <deque>
#include <vector>
using namespace std;

int myIntInput(std::string str)
{
    std::cout << str;
    int a;
    std::cin >> a;
    return a;
}

void showvector(vector<int> v)
{
   vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n'; 
}

void showvectorDouble(vector<double> v)
{
   vector<double>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n'; 
}


void showdq(deque<int> d)
{
    deque<int>::iterator it;
    for (it = d.begin(); it != d.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}

void showdqReturnSecondHalf(deque<int> D)
{
    cout << "Вторая половина элементов в обратном порядке: ";
    for (auto it = D.rbegin(); it != D.rbegin() + D.size() / 2; ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void showdqReturnFirstHalf(deque<int> D)
{
    cout << "Первая половина элементов в обратном порядке: ";
    for (auto it = D.rend() - D.size() / 2; it != D.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}
