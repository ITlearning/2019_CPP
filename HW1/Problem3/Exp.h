
#ifndef PROBLEM3_EXP_H
#define PROBLEM3_EXP_H

#include <iostream>
using namespace std;

class Exp {
    int i = 1;
    int x, y;
    int result;
public:

    Exp();
    Exp(int a);
    Exp(int a, int b);

    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp a);
};

Exp::Exp() : x(1), y(1){}

Exp::Exp(int a) {
    x = a;
    result = a;
    y = 1;
}

Exp::Exp(int a, int b) {
    x = a;
    result = a;
    y = b;
}

int Exp::getBase() {
    return x;
}

int Exp::getExp() {
    return y;
}

int Exp::getValue() {
    if(i == y){
        return x;
    }else{
        for(int j = 1; i < y; i++) {
            result *= x;
        }
        return result;
}


}

bool Exp::equals(Exp a) {
    return result == a.getValue();
}
#endif //PROBLEM3_EXP_H
