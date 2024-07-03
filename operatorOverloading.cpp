#include <iostream>
using namespace std;

class publicClass {
    int num;

public:
    // Constructor to initialize num
    publicClass() {
        num = 0;
    }

    // Post-increment operator
    void operator++(int) {
        num++;
    }

    // Pre-increment operator
    void operator++() {
        ++num;
    }

    void display() {
        cout << "Your num is: " << num << endl;
    }
};

int main() {
    publicClass obj;
    obj.display();
    ++obj;    // Calls the pre-increment operator
    obj.display();
    obj++;    // Calls the post-increment operator
    obj.display();

    return 0;
}
