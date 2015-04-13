#pragma once
#include <cmath>

template <typename Type>
class Flock
{
public:
	Flock();
	Type num1;
	Type num2;
	Type num3;

	Flock(Type a, Type b, Type c)
	{
		this->num1 = a;
		this->num2 = b;
		this->num3 = c;
	}

	bool checkFlock()
	{
		// ab + c^a = (a + b - c) + ac^2 * b
		bool condition = num1 * num2 + std::pow(num3, num1) == (num1 + num2 - num3) + num1 * std::pow(num3, 2) * num2;
		return condition;
	}
	
	Type expand()
	{
		Type expandedForm = num1 * num2 * std::pow(num3, 2);
		return expandedForm;
	}

	Type add(Flock a, Flock b)
	{
		Type sum = (a.num1 + b.num1) + (a.num2 + b.num2) + (a.num3 + b.num3);
		return sum;
	}

	Type multiply(Flock a, Flock b)
	{
		Type product = (a.num1 * b.num1) * (a.num2 * b.num2) * (a.num3 * b.num3);
		return product;
	}

	Type subtract(Flock a, Flock b)
	{
		Type diff = (a.num1 - b.num1) - (a.num2 - b.num2) - (a.num3 - b.num3);
		return diff;
	}
};
