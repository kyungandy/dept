#include <iostream>
using namespace std;
#include "Dept.h"

int main() {
    Dept com(10);
    com.read();
    int n = countPass(com);
    cout << "60점 이상은 " << n << "명" << endl;
    return 0;
}