#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    Box(int w) : width(w) {}
    friend void showWidth(Box& b);
};

void showWidth(Box& b) {
    cout << "Width: " << b.width << endl;
}

int main() {
    Box b(10);
    showWidth(b);
    return 0;
}

