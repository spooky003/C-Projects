/*
MAINA FELIX MWANGI
BCS-03-0088/2025
24/9/2025
CLASSES AND OBJECTS
*/
#include <iostream>
using namespace std;

class Addition {
public:
    int a, b, c;

    int calculate_product() {
        return a * b * c;
    }
};

int main() {
    Addition addition1;

    
    addition1.a = 22;
    addition1.b = 30;
    addition1.c = 50;

    int product = addition1.calculate_product();

    cout << "Product of a, b, c = " << product << endl;

    return 0;
}
