#include <iostream>
#include <iterator>
#include <deque>
#include "lab2.h"
#include <vector>
#include <fstream>
#include <algorithm>
#include <list>
#include <numeric>
#include <set>
#include <map>

using namespace std;

int main()
{


cout<<"Здравствуйте, дорогие пользователи, рад вас приветствовать в своей программе супер-мега-прога-2.1"<<endl;
cout<<"Выберите задание, которое дать на выполнение компьютеру\n";
cout<<"1 задание - шиворот-навыворот \n2 задание - вставка выставка минус единиц \n3 задание - удалить средний член дека;
cout<<"Дальше задания есть, но придумывать названия лень"

  
short unsigned vibor;
vibor = myIntInput("Введите номер задания ");
switch (vibor)
{
  case 1:
    {
        deque<int> numbers;
        short unsigned int k, number;
        k = myIntInput("Введите кол-во элементов дека ");

        for (int i {0}; i < k; i++)
        {
            number = myIntInput("Введите элемент дека ");
            numbers.push_back(number);
        }

        showdqReturnFirstHalf(numbers);
        showdqReturnSecondHalf(numbers);

    }
        break;
    
  case 2:
    { 
        int a, newA = 0, number;
        a = myIntInput("Введите кол-во циферок в векторе ");
        vector<int> numbers;
        while (newA < a)
        {
            number = myIntInput("Введите циферку вектора ");
            numbers.push_back(number);
            newA += 1;
        }

        for (auto i = numbers.begin(); i != numbers.end(); ++i)
        {
            i = numbers.insert(++i, -1); 
        }

        showvector(numbers);
    }
        break;

  case 3:
  {
        deque<int> numbers;
        short unsigned int k, number;
        k = myIntInput("Введите кол-во элементов дека ");

        for (int i {0}; i < k; i++)
        {
            number = myIntInput("Введите элемент дека ");
            numbers.push_back(number);
        }

        deque<int>::iterator iter = numbers.begin() + k / 2;
        numbers.erase(iter);

        showdq(numbers);

  }
        break;

  case 4:
  {
    string name;
    int K;

    cout << "Введите имя файла: ";
    cin >> name;
    K = myIntInput("Введите количество символов '*': ");

    ofstream outputFile(name); 

    fill_n(ostream_iterator<char>(outputFile), K, '*');

    outputFile.close(); 

    cout << "Данные записаны в файл " << name << endl;
  }
        break;

  case 5:
  {
        int n = myIntInput("Введите количество элементов вектора: ");

        vector<int> V(n);
        cout << "Введите элементы вектора: ";
        for (int& elem : V) 
        {
            cin >> elem;
        }

        // Ввод элементов списка
        int m = myIntInput("Введите количество элементов списка: ");

        list<int> L(m);
        cout << "Введите элементы списка: ";
        for (int& elem : L) 
        {
            cin >> elem;
        }
    
        auto it = find_first_of(L.begin(), L.end(), V.begin(), V.begin() + n / 2);

        if (it != L.end()) {
            L.insert(L.end(), *it);
        }

        cout << "Список: ";
        for (int elem : L) {
            cout << elem << " ";
        }
  }
        break;

  case 6:
  {
    int K = myIntInput("Введите число сдвига k ");

    list<int> L1(10);
    cout << "Введите 10 элементов списка L1: ";
    for (int& elem : L1) 
    {
        cin >> elem;
    }

    list<int> L2(10);
    cout << "Введите 10 элементов списка L2: ";
    for (int& elem : L2) 
    {
        cin >> elem;
    }

    auto it1 = L1.end(); 
    advance(it1, -K); 
    rotate(L1.begin(), it1, L1.end()); 

    auto it2 = L2.begin();
    advance(it2, K);  
    rotate(L2.begin(), it2, L2.end());

    cout << "Измененный список L1: ";
    for (int elem : L1) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Измененный список L2: ";
    for (int elem : L2) {
        cout << elem << " ";
    }
    cout << endl;
  }
        break;

  case 7:
  {     
        int a,newA, number;
        a = myIntInput("Введите кол-во циферок в векторе ");
        vector<int> numbers;
        while (newA < a)
        {
            number = myIntInput("Введите циферку вектора ");
            numbers.push_back(number);
            newA += 1;
        }

        sort(numbers.begin(), numbers.end());

        showvector(numbers);

        partial_sort(numbers.end() - 3, numbers.end(), numbers.begin(), greater<int>()); 
        showvector(numbers);
        cout << "Три последних элемента в порядке убывания: ";
        copy(numbers.end() - 3, numbers.end(), ostream_iterator<int>(cout, " "));
  }
        break;

  case 8:
  {
        int n;
        n = myIntInput("Введите количество элементов списка: ");

        list<int> L(n);
        cout << "Введите элементы списка: ";
        for (int& elem : L) {
            cin >> elem;
        }

        
        vector<double> numbers;
        numbers.reserve(n - 1); 

        
        adjacent_difference(L.begin(), L.end(), back_inserter(numbers),
                            [](int a, int b) { return (a + b) / 2.0; }); 

        
        numbers.erase(numbers.begin()); 

        cout << "Вектор средних арифметических: ";
        showvectorDouble(numbers);
  }
        break;

  case 9:
  {
        int n0;
        n0 = myIntInput("Введите количество элементов вектора V0: ");

        vector<int> V0(n0);
        cout << "Введите элементы вектора V0: ";
        for (int& elem : V0) 
        {
            cin >> elem;
        }

        int N;
        N = myIntInput("Введите кол-во векторов: ");

        vector<vector<int>> vectors(N);
        for (int i = 0; i < N; ++i) 
        {
            int ni;
            cout << "Введите кол-во элементов вектора V" << i + 1 << ": ";
            cin >> ni;

            vectors[i].resize(ni);
            cout << "Введите элементы вектора V" << i + 1 << ": ";
            for (int& elem : vectors[i]) 
            {
                cin >> elem;
            }
        }

        int count = 0;

        set<int> V0Set(V0.begin(), V0.end());

        for (int i = 0; i < N; ++i) 
        {
            set<int> currentSet(vectors[i].begin(), vectors[i].end());

            if (includes(currentSet.begin(), currentSet.end(), V0Set.begin(), V0Set.end())) 
            {
                ++count;
            }
        }

        cout << "Количество векторов, содержащих все элементы V0: " << count;
  } 
        break;

  case 10:
  {
        int n;
        cout << "Введите количество элементов вектора: ";
        cin >> n;

        vector<string> V(n);
        cout << "Введите элементы вектора (заглавные буквы): ";
        for (string& elem : V) {
            cin >> elem;
        }

        map<char, int> M;

        for (const string& word : V) {
            M[word[0]] += word.size(); 
        }

        cout << "Результаты:" << endl;
        for (const auto& pair : M) {
            cout << pair.first << pair.second << endl;
        }
  }
        break;

  default:
    cout<<"Ну ты и Алёша, нет такого задания";
}


   
    
 
return 0;
}
