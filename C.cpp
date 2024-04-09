#include <iostream>
using namespace std;

class C {
private:
    string C1;
    int C2;

public:
    string getC1() {
        return C1;
    }

    void setC1(string c1) {
        C1 = c1;
    }

    int getC2() {
        return C2;
    }

    void setC2(int c2) {
        C2 = c2;
    }

    void MC1() {
        cout << "Método MC1() chamado" << endl;
    }

    void MC2() {
        cout << "Método MC2() chamado" << endl;
    }

    void MC3() {
        cout << "Método MC3() chamado" << endl;
    }
};