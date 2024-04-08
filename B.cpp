#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    int getB1() {
        return B1;
    }

    void setB1(int b1) {
        B1 = b1;
    }

    float getB2() {
        return B2;
    }

    void setB2(float b2) {
        B2 = b2;
    }

    void MB1() {
        cout << "Método MB1() chamado" << endl;
    }

    void MB2() {
        cout << "Método MB2() chamado" << endl;
    }
};