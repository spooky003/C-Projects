/*
MAINA FELIX MWANGI
BCS-03-0088/2025
24/9/2025
CLASSES AND OBJECTS
*/
#include <iostream>
using namespace std;

class Cylinder {
public:
    double radius, height;

    double calculate_surface_area() {
        return 2 * 3.1416 * radius * height + 2 * 3.1416 * radius * radius;
    }

    double calculate_volume() {
        return 3.1416 * radius * radius * height;
    }
};

int main() {
    Cylinder cylinder1;
    double surface_area, volume;

    cylinder1.radius = 5;   
    cylinder1.height = 10;  

    surface_area = cylinder1.calculate_surface_area();
    volume = cylinder1.calculate_volume();

    cout << "Surface Area of Cylinder = " << surface_area << endl;
    cout << "Volume of Cylinder = " << volume << endl;

    return 0;
}
