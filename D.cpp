#include <iostream>
using namespace std;

class D {
private:
    int D1;
    float D2;

public:
    int getD1() {
        return D1;
    }

    void setD1(int d1) {
        D1 = d1;
    }

    float getD2() {
        return D2;
    }

    void setD2(float d2) {
        D2 = d2;
    }

    void MD1() {
        cout << "Método MD1() chamado" << endl;
    }

    void MD2() {
        cout << "Método MD2() chamado" << endl;
    }

};