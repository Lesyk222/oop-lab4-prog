#include "CFixedPointNumber.h"

int main() {
	CFixedPointNumber a(1, 50);
	CFixedPointNumber b(1, 52);
	int num = 4;

	CFixedPointNumber sumOverload = a + b;
	CFixedPointNumber substractOverload = a - b;
	CFixedPointNumber multiplyOverload = a * b;
	CFixedPointNumber divisionOverload = a / b;

	CFixedPointNumber sumInt = a.findSum(num);
	CFixedPointNumber substractInt = a.findSubstraction(num);
	CFixedPointNumber multiplyInt = a.findMultiplication(num);
	CFixedPointNumber divisionInt = a.findDivision(num);

	std::cout << "a = " << a.getDoubleValue() << std::endl;
	std::cout << "b = " << b.getDoubleValue() << std::endl;
	std::cout << "sumOverload = " << sumOverload.getDoubleValue() << std::endl;
	std::cout << "substractOverload= " << substractOverload.getDoubleValue() << std::endl;
	std::cout << "multiplyOverload= " << multiplyOverload.getDoubleValue() << std::endl;
	std::cout << "divisionOverload= " << divisionOverload.getDoubleValue() << std::endl;
	std::cout << std::endl;

	std::cout << "a = " << a.getDoubleValue() << std::endl;
	std::cout << "num = " << num << std::endl;
	std::cout << "sumInt = " << sumInt.getDoubleValue() << std::endl;
	std::cout << "substractInt = " << substractInt.getDoubleValue() << std::endl;
	std::cout << "multiplyInt = " << multiplyInt.getDoubleValue() << std::endl;
	std::cout << "divisionInt = " << divisionInt.getDoubleValue() << std::endl;
	std::cout << std::endl;
	if (a > b) {
		std::cout << a << " > " << b;
	}
	else if (a < b) {
		std::cout << a << " < " << b;
	}
	else if (a == b) {
		std::cout << a << " = " << b;
	}
	std::cout << std::endl;

	double temp = (double)b;
	std::cout << "Temp: " << temp << std::endl;
	std::cout << "Count of objects: " << a.getCounter() << std::endl;
}