#include <iostream>
using namespace std;
#include "Dept.h"

int main() {
    Dept com(10);
    com.read();
    int n = countPass(com);
    cout << "60�� �̻��� " << n << "��" << endl;
    return 0;
}