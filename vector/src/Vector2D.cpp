//
// Created by wj on 22. 7. 6.
//

#include "../include/Vector2D.hpp"

namespace camel
{
	Vector2D::Vector2D()
		: mA(0)
		, mB(0)
	{
	}

	Vector2D::Vector2D(float a, float b)
		: mA(a)
		, mB(b)
	{
	}

	float Vector2D::GetA() const
	{
		return mA;
	}

	float Vector2D::GetB() const
	{
		return mB;
	}

	Vector2D Vector2D::GetAB() const
	{
		Vector2D vector(mA, mB);
		return vector;
	}

	void Vector2D::SetA(float a)
	{
		mA = a;
	}

	void Vector2D::SetB(float b)
	{
		mB = b;
	}

	void Vector2D::SetAB(float a, float b)
	{
		mA = a;
		mB = b;
	}

}