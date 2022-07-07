//
// Created by wj on 22. 7. 6.
//

#ifndef CAMEL_EUCLID_NEW_VECTOR2D_HPP
#define CAMEL_EUCLID_NEW_VECTOR2D_HPP

namespace camel
{
	class Vector2D
	{
	public:
		Vector2D();
		Vector2D(float a, float b);

		float GetA() const;
		float GetB() const;
		Vector2D GetAB() const;

		void SetA(float a);
		void SetB(float b);
		void SetAB(float a, float b);

	private:
		float mA = 0.0f;
		float mB = 0.0f;
	};
}

#endif //CAMEL_EUCLID_NEW_VECTOR2D_HPP
