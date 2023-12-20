#include <iostream>
#include <cmath>

using namespace std;


class Трикутник {
protected:
    double сторона1, сторона2, кут;

public:
    Трикутник(double с1, double с2, double к) : сторона1(с1), сторона2(с2), кут(к) {}

    virtual double обчислитиПлощу() const = 0;

    virtual ~Трикутник() {}
};

class ПрямокутнийТрикутник : public Трикутник {
public:
    ПрямокутнийТрикутник(double с1, double с2) : Трикутник(с1, с2, 90) {}

    double обчислитиПлощу() const override {
        return 0.5 * сторона1 * сторона2;
    }
};

class РівнобедренийТрикутник : public Трикутник {
public:
    РівнобедренийТрикутник(double с, double к) : Трикутник(с, с, к) {}

    double обчислитиПлощу() const override {
        return 0.5 * сторона1 * сторона2 * sin(кут);
    }
};

class РівностороннійТрикутник : public Трикутник {
public:
    РівностороннійТрикутник(double с) : Трикутник(с, с, 60) {}

    double обчислитиПлощу() const override {
        return (sqrt(3) / 4) * сторона1 * сторона1;
    }
};

int main() {
    setlocale(LC_ALL, "Ukranian");

    ПрямокутнийТрикутник прТр(3, 4);
    РівнобедренийТрикутник рбТр(5, 60);
    РівностороннійТрикутник рТр(6);

    cout << "S Right Triangle: " << прТр.обчислитиПлощу() << std::endl;
    cout << "S Isosceles Triangle: " << рбТр.обчислитиПлощу() << std::endl;
    cout << "S Equilateral Triangle: " << рТр.обчислитиПлощу() << std::endl;

    return 0;
}
