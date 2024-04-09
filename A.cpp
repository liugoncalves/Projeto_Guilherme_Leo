#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    int getA1() {
        return A1;
    }

    void setA1(int a1) {
        A1 = a1;
    }

    float getA2() {
        return A2;
    }

    void setA2(float a2) {
        A2 = a2;
    }

    void MA1() {
        cout << "Método MA1() chamado" << endl;
    }

    void MA2() {
        cout << "Método MA2() chamado" << endl;
    }

    
    void MA3() {
        cout << "Alteração a classe A partir do clone" << endl;
    }
};