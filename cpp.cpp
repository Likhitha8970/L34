#include <iostream>
using namespace std;

class Sample {
public:
    int a; // accessible anywhere
private:
    int b; // accessible only within class
protected:
    int c; // accessible in derived classes
};

int main() {
    Sample obj;
    obj.a = 10; // OK
    // obj.b = 20; // Error: 'b' is private
    // obj.c = 30; // Error: 'c' is protected
    cout << "Accessing public member a: " << obj.a << endl;
    return 0;
}
```

