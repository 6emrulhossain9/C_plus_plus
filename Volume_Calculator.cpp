#include <iostream>
using namespace std;

// Forward declaration of class VolumeCalculator
class VolumeCalculator;

// Box class
class Box {
private:
    double length;
    double width;
    double height;
public:
    // Constructor to initialize dimensions
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    // Friend function declaration
    friend void printDimensions(const Box& box);

    // Friend class declaration
    friend class VolumeCalculator;
};

// Friend function definition to print dimensions of the box
void printDimensions(const Box& box) {
    cout << "Length: " << box.length << ", Width: " << box.width << ", Height: " << box.height << endl;
}

// VolumeCalculator class
class VolumeCalculator {
public:
    // Method to calculate and return the volume of a box
    double calculateVolume(const Box& box) {
        return box.length * box.width * box.height;
    }
};

int main() {
    // Create a Box object
    Box box(3.0, 4.0, 5.0);

    // Use friend function to print dimensions
    printDimensions(box);

    // Create a VolumeCalculator object
    VolumeCalculator vc;

    // Calculate and print the volume of the box
    double volume = vc.calculateVolume(box);
    cout << "Volume of the box: " << volume << " cubic units" << endl;

    return 0;
}
