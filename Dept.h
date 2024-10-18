#ifndef DEPT_H
#define DEPT_H

class Dept {
private:
	int size;
	int* scores;

public:
	Dept(int size);
	Dept(const Dept& dept);
	~Dept();

	int getSize() const;
	void read();
	bool isOver60(int index) const;

	friend int countPass(Dept dept);
};
#endif
