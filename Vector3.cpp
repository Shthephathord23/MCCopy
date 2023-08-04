#include "Mathematics.h"

namespace math {

	Vector3::Vector3()
		:x(0), y(0), z(0)
	{

	}

	Vector3::Vector3(float x, float y, float z)
		: x(x), y(y), z(z)
	{

	}



	Vector3 Vector3::add(const Vector3 other) const
	{
		return { this->x + other.x, this->y + other.y, this->z + other.z };
	}

	Vector3 Vector3::sub(const Vector3 other) const
	{
		return { this->x - other.x, this->y - other.y, this->z - other.z };
	}

	Vector3 Vector3::scale(float a) const
	{
		return { a * this->x, a * this->y, a * this->z };
	}

	float Vector3::norm() const
	{
		return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
	}

	float Vector3::normsq() const
	{
		return this->x * this->x + this->y * this->y + this->z * this->z;
	}

	Vector3 Vector3::normalized() const
	{
		float d = Q_rsqrt(this->x * this->x + this->y * this->y + this->z * this->z);
		return d * *this;
	}

	void Vector3::normalize()
	{
		float d = Q_rsqrt(this->x * this->x + this->y * this->y + this->z * this->z);
		*this *= d;
	}



	void Vector3::operator=(const Vector3 other)
	{
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	}

	void Vector3::operator+=(const Vector3 other)
	{
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;
	}

	void Vector3::operator-=(const Vector3 other)
	{
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;
	}

	void Vector3::operator*=(float a)
	{
		this->x *= a;
		this->y *= a;
		this->z *= a;
	}



	bool Vector3::operator==(const Vector3 other) const
	{
		return this->x == other.x && this->y == other.y && this->z == other.z;
	}

	bool Vector3::operator!=(const Vector3 other) const
	{
		return this->x != other.x || this->y != other.y || this->z != other.z;
	}



	Vector3::~Vector3()
	{

	}



	Vector3 operator+(const Vector3 v1, const Vector3 v2)
	{
		return { v1.getX() + v2.getX(), v1.getY() + v2.getY(), v1.getZ() + v2.getZ() };
	}

	Vector3 operator-(const Vector3 v1, const Vector3 v2)
	{
		return { v1.getX() - v2.getX(), v1.getY() - v2.getY(), v1.getZ() - v2.getZ() };
	}

	Vector3 operator*(float a, const Vector3 v)
	{
		return { a * v.getX(), a * v.getY(), a * v.getZ() };
	}

	Vector3 operator*(const Vector3 v, float a)
	{
		return { a * v.getX(), a * v.getY(), a * v.getZ() };
	}

	float dot(const Vector3 v1, const Vector3 v2)
	{
		return v1.getX() * v2.getX() + v1.getY() + v2.getY() + v1.getZ() + v2.getZ();
	}

	Vector3 cross(const Vector3 v1, const Vector3 v2)
	{
		return { v1.getY() * v2.getZ() - v1.getZ() * v2.getY(), v1.getZ() * v2.getX() - v1.getX() * v2.getZ(), v1.getX() * v2.getY() - v1.getY() * v2.getX() };

	}

	Vector3 compmulti(const Vector3 v1, const Vector3 v2)
	{
		return { v1.getX() * v2.getX(), v1.getY() * v2.getY(), v1.getZ() * v2.getZ() };
	}

	std::ostream& operator<<(std::ostream& stream, const Vector3 v)
	{
		stream << '(' << v.getX() << ", " << v.getY() << ", " << v.getZ() << ')';
		return stream;
	}

}