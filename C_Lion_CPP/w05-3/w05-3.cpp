//다른 클래스 전체를 프랜드로 선언

#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
    bool equals(Rect r, Rect s);
    void copy(Rect& dest, Rect& src);
};

class Rect {
    int width, height;
public:
    Rect(int width, int heigth) {
        this->width = width; this->height = heigth;
    }

    friend RectManager;
};

bool RectManager::equals(Rect r, Rect s) {
    return r.width == s.width && r.height == s.height;
}

void RectManager::copy(Rect &dest, Rect &src) {
    dest.width = src.width;
    dest.height = src.height;
}
int main() {
    Rect a(3,4), b(5, 6);
    RectManager man;

    man.copy(b, a); //a를 b에 복사한다.
    if(man.equals(a,b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
}