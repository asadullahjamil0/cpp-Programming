#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    // Method to display car details
    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }

    // Method to start the car
    void start() {
        cout << brand << " " << model << " is starting." << endl;
    }
};

int main() {
    // Creating an object of Car class
    Car myCar("Toyota", "Corolla", 2020);

    // Displaying car information
    myCar.displayInfo();

    // Starting the car
    myCar.start();

    return 0;
}
