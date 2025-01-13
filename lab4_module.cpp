#include <cmath>
#include <iostream>
#include <math.h>
#include <vector>

class QadraticEquation {
  double a;
  double b;
  double c;

public:
    friend std::ostream& operator<<(std::ostream& os, const QadraticEquation& QE);

  QadraticEquation(double temp) {
    a = temp;
    b = temp;
    c = temp;
  }

  QadraticEquation() : a(1.0), b(2.0), c(0.0) {}

  QadraticEquation(std::string ask) {
    std::cout << "Введите первый коэффициент: ";
    std::cin >> a;
    if (a == 0){
        std::cout << "Первый коэффициент не может быть нулевым: "<<std::endl;
        std::cout << "Введите первый коэффициент заново: ";
        std::cin >> a;
    }
    std::cout << "Введите второй коэффициент: ";
    std::cin >> b;
    std::cout << "Введите третий коэффициент: ";
    std::cin >> c;
  }


    void setA(int newA){ a = newA; }
    void setB(int newB){ b = newB; }
    void setC(int newC){ c = newC; }

    int getA() const { return a; }
    int getB() const { return b; }
    int getC() const { return c; } 


  void NewCoefficient(double temp_a, double temp_b, double temp_c) {
    a = temp_a;
    b = temp_b;
    c = temp_c;
  }

  std::vector<double> solution() {
    double discr = b * b - 4 * a * c;
    std::vector<double> ask;
    if (discr > 0) {
      return ask = {((b * -1) + sqrt(discr)) / (2 * a),
                    ((b * -1) - sqrt(discr)) / (2 * a)};
    }
    if (discr == 0)
      return ask = {-(b / (2 * a))};
    return ask;
  }

  QadraticEquation operator++() {
    a++;
    b++;
    c++;
    return *this;
  }

  QadraticEquation operator--() {
    if (a - 1 == 0){
      std::cout<<"Невозможно совершить операцию, так как коэффициент а будет равен 0"<<std::endl;
    }
    else{
        a--;
        b--;
        c--;
    return *this;
    }
  }

  bool operator==(QadraticEquation QE2) {
    if (a == QE2.a && b == QE2.b && c == QE2.c)
      return true;
    return false;
  }
  bool operator!=(QadraticEquation QE2) {
    if (a == QE2.a && b == QE2.b && c == QE2.c)
      return false;
    return true;
  }

  operator double() const { return b * b - 4 * a * c; }

  explicit operator bool() const {
    if ((b * b - 4 * a * c) >= 0)
      return true;
    return false;
  }
};



