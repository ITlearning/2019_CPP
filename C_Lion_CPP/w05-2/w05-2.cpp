//다른 클래스의 멤버 함수를 프랜드로 선언

#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
    bool equals(Rect r, Rect s);
};

class Rect {
    int width, height;
public:
    Rect(int width, int heigth) {
        this->width = width; this->height = heigth;
    }

    friend bool RectManager::equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s) {
    return r.width == s.width && r.height == s.height;
}
int main() {
    Rect a(4,5), b(4, 5);
    RectManager man;
    if(man.equals(a,b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
}