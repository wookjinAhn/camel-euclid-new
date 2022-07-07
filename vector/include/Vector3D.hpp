//
// Created by wj on 22. 7. 6.
//

#ifndef CAMEL_EUCLID_NEW_VECTOR3D_HPP
#define CAMEL_EUCLID_NEW_VECTOR3D_HPP

namespace camel
{
	class Vector3D
	{
	public:
		Vector3D();
		Vector3D(float a, float b, float c);

		float GetA() const;
		float GetB() const;
		float GetC() const;
		Vector3D GetABC() const;

		void SetA(float a);
		void SetB(float b);
		void SetC(float c);
		void SetABC(float a, float b, float c);

	private:
		float mA = 0.0f;
		float mB = 0.0f;
		float mC = 0.0f;
	};
}

#endif //CAMEL_EUCLID_NEW_VECTOR3D_HPP
