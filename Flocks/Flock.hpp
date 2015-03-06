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

	bool checkFlock(Flock)
	{
		// ab + c^a = (a + b - c) + ac^2 * b
		bool condition = this->num1 * this->num2 + std::pow(this->num3, this->num1) == (this->num1 + this->num2 - this->num3) + this->num1 * std::pow(this->num3, 2) * this->num2;
		if (condition == true)
		{
			return true;
		}

		else
		{
			return false;
		}
	}
	
	Type expand()
	{
		Type expandedForm = this->num1 * this->num2 * std::pow(this->num3, 2);
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