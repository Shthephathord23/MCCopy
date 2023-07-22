#pragma once
#include <iostream>

namespace math {

	float Q_rsqrt(float);

	class Vector3
	{
	public:
		Vector3();

		Vector3(float, float, float);

		float getX() const { return this->x; }

		float getY() const { return this->y; }

		float getZ() const { return this->z; }

		Vector3 add(const Vector3) const;
		Vector3 sub(const Vector3) const;
		Vector3 scale(float) const;
		float norm() const;
		float normsq() const;
		Vector3 normalized() const;
		void normalize();

		void operator=(const Vector3);
		void operator+=(const Vector3);
		void operator-=(const Vector3);
		void operator*=(float);

		bool operator==(const Vector3) const;
		bool operator!=(const Vector3) const;

		~Vector3();
	private:
		float x, y, z;
	};

	Vector3 operator+(const Vector3, const Vector3);
	Vector3 operator-(const Vector3, const Vector3);
	Vector3 operator*(float, const Vector3);
	Vector3 operator*(const Vector3, float);

	float dot(const Vector3, const Vector3);
	Vector3 cross(const Vector3, const Vector3);
	Vector3 compmulti(const Vector3, const Vector3);

	std::ostream& operator<<(const std::ostream&, const Vector3);

}
