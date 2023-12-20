#include <iostream>
#include <cmath>

using namespace std;


class ��������� {
protected:
    double �������1, �������2, ���;

public:
    ���������(double �1, double �2, double �) : �������1(�1), �������2(�2), ���(�) {}

    virtual double ��������������() const = 0;

    virtual ~���������() {}
};

class �������������������� : public ��������� {
public:
    ��������������������(double �1, double �2) : ���������(�1, �2, 90) {}

    double ��������������() const override {
        return 0.5 * �������1 * �������2;
    }
};

class г�������������������� : public ��������� {
public:
    г��������������������(double �, double �) : ���������(�, �, �) {}

    double ��������������() const override {
        return 0.5 * �������1 * �������2 * sin(���);
    }
};

class г�������������������� : public ��������� {
public:
    г��������������������(double �) : ���������(�, �, 60) {}

    double ��������������() const override {
        return (sqrt(3) / 4) * �������1 * �������1;
    }
};

int main() {
    setlocale(LC_ALL, "Ukranian");

    �������������������� ����(3, 4);
    г�������������������� ����(5, 60);
    г�������������������� ���(6);

    cout << "S Right Triangle: " << ����.��������������() << std::endl;
    cout << "S Isosceles Triangle: " << ����.��������������() << std::endl;
    cout << "S Equilateral Triangle: " << ���.��������������() << std::endl;

    return 0;
}
