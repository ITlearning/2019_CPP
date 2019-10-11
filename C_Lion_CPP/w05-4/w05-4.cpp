//두 개의 Power 객체를 더하는 + 연산자 작성
//두 개의 Power 객체를 더하는 - 연산자 작성
//두 개의 Power 객체를 비교하는 == 연산자 작성
//+=연산자 중복
//+연산자 (숫자도 가능하게)
//전위 연산자 ,후위 연산자

#include <iostream>
using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this->kick = kick;
        this->punch = punch;
    }
    void show();
    Power operator+ (Power op2);
    Power operator- (Power op3);
    bool operator== (Power op4);
    Power& operator+=(Power op5);
    Power operator+ (int op6);
    Power& operator++();
    Power operator++(int b);
    friend Power operator+ (int op7, Power op8);
    Power& operator << (int n);
};

void Power::show() {
    cout << "Kick = " << kick << ", " << "punch = " << punch << endl;
}
Power Power::operator+(Power op2) {
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}
Power Power::operator-(Power op3) {
    Power tmp;
    tmp.kick = this->kick - op3.kick;
    tmp.punch = this->punch - op3.punch;
    return tmp;
}
bool Power::operator==(Power op4) {
    return kick == op4.kick && punch == op4.punch;
}
Power& Power::operator+=(Power op5) {
    kick = kick + op5.kick;
    punch = punch + op5.punch;
    return *this;
}
Power Power::operator+(int op6) {
    Power tmp;
    tmp.kick = kick + op6;
    tmp.punch = punch + op6;
    return tmp;
}
Power& Power::operator++() {
    kick++;
    punch++;
    return *this;
}
Power Power::operator++(int b) {
    Power tmp = *this;
    kick++;
    punch++;
    return tmp;
}
Power operator+(int op7, Power op8) {
    Power tmp;
    tmp.kick = op7 + op8.kick;
    tmp.punch = op7 + op8.punch;
    return tmp;
}
Power& Power::operator<<(int n) {
    kick += n;
    punch += n;
    return *this;
}


int main() {
    cout << "더하기 operation" << endl;
    Power a(3,5), b(4, 6), c;
    c = a + b;
    a.show();
    b.show();
    c.show();
    cout << endl;
    cout << "빼기 operation" << endl;
    Power d(7, 7), e(6, 5), f;
    f = d - e;
    d.show();
    e.show();
    f.show();
    cout << endl;

    cout << "같음 판별 operation" << endl;
    if(a == b) cout << "두 파워가 같다." << endl;
    else cout << "두 파워가 같지 않다. " << endl;

    cout << endl;
    cout << "객체 더하기 operation" << endl;
    Power i(3,5), j(4, 6), k;
    i.show();
    j.show();
    k = i += j;
    i.show();
    k.show();
    cout << endl;

    cout << "실수 포함 더하기 operation" << endl;
    Power l(3,5), m;
    l.show();
    m.show();
    m = l+2;
    l.show();
    m.show();
    cout << endl;

    cout << "전위 연산자 operation" << endl;
    Power n(3,5), o;
    n.show();
    o.show();
    o = ++n;
    n.show();
    o.show();

    cout << endl;

    cout << "후위 연산자 operation" << endl;
    Power p(3,5), q;
    p.show();
    q.show();
    q = p++;
    p.show();
    q.show();

    cout << endl;
    cout << "2+a를 위한 연산자 operation" << endl;
    Power r(3,5), s;
    r.show();
    s.show();
    s = 2 + r;
    r.show();
    s.show();

    cout << endl;
    cout << "참조를 리턴하는 << 연산자 operation" << endl;
    Power t(1,2);
    t << 3 << 5 << 6;
    t.show();
}