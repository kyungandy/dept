#include <iostream>
#include "Dept.h"
using namespace std;

Dept::Dept(int size) {
    this->size = size;
    scores = new int[size];
}

Dept::~Dept() {
    delete[] scores;
}

int Dept::getSize() const {
    return size;
}

void Dept::read() {
    for (int i = 0; i < size; i++) {
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index) const {
    return scores[index] > 60;
}

int countPass(const Dept& dept) {
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) count++;
    }
    return count;
}
