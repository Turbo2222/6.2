#include <iostream>
#include "func.h"
#include <string>

counter::counter() {
	count = 5;
};

counter::counter(int res) {
  SetCount(res);
}

void counter::SetCount(int yesCount) {
	this->count = yesCount;

}

int counter::plus() {
	this->count = count + 1;
	return count;
}

int counter::minus() {
	this->count = count - 1;
	return count;
}

void counter::GetCount() {
	std::cout << count << std::endl;
}