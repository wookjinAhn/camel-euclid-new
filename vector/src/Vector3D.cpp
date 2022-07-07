//
// Created by wj on 22. 7. 6.
//

#include "../include/Vector3D.hpp"

namespace camel
{
	Vector3D::Vector3D()
		: mA(0.0f)
		, mB(0.0f)
		, mC(0.0f)
	{
	}

	Vector3D::Vector3D(float a, float b, float c)
		: mA(a)
		, mB(b)
		, mC(c)
	{
	}

	float Vector3D::GetA() const
	{
		return mA;
	}

	float Vector3D::GetB() const
	{
		return mB;
	}

	float Vector3D::GetC() const
	{
		return mC;
	}

	Vector3D Vector3D::GetABC() const
	{
		Vector3D vector(mA, mB, mC);
		return vector;
	}

	void Vector3D::SetA(float const a)
	{
		mA = a;
	}

	void Vector3D::SetB(float const b)
	{
		mB = b;
	}

	void Vector3D::SetC(float const c)
	{
		mC = c;
	}

	void Vector3D::SetABC(float const a, float const b, float c)
	{
		mA = a;
		mB = b;
		mC = c;
	}
}