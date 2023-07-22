#pragma once
#include <iostream>

namespace math {

	float Q_rsqrt(float);

	class Vector2
	{
	public:
		Vector2();

		Vector2(float, float);

		float getX() const { return this->x; }

		float getY() const { return this->y; }

		Vector2 add(const Vector2) const;
		Vector2 sub(const Vector2) const;
		Vector2 scale(float) const;
		float norm() const;
		float normsq() const;
		Vector2 normalized() const;
		void normalize();

		void operator=(const Vector2);
		void operator+=(const Vector2);
		void operator-=(const Vector2);
		void operator*=(float);

		bool operator==(const Vector2) const;
		bool operator!=(const Vector2) const;

		~Vector2();
	private:
		float x, y;
	};

	Vector2 operator+(const Vector2, const Vector2);
	Vector2 operator-(const Vector2, const Vector2);
	Vector2 operator*(float, const Vector2);
	Vector2 operator*(const Vector2, float);

	float dot(const Vector2, const Vector2);
	Vector2 compmulti(const Vector2, const Vector2);

	std::ostream& operator<<(const std::ostream&, const Vector2);

}
