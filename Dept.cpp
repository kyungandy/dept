#include <iostream>
using namespace std;
#include "Dept.h"

Dept::Dept(int size) {
    this->size = size;
    scores = new int[size];
}

Dept::Dept(const Dept& dept) {
    size = dept.size;
    scores = new int[size];
    for (int i = 0; i < size; i++) {
        scores[i] = dept.scores[i];
    }
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

int countPass(Dept dept) {
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) count++;
    }
    return count;
}

