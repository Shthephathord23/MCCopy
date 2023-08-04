#include "Mathematics.h"

namespace math {

	Vector2::Vector2()
		: x(0), y(0)
	{

	}

	Vector2::Vector2(float x, float y)
		: x(x), y(y)
	{

	}



	Vector2 Vector2::add(const Vector2 other) const
	{
		return { this->x + other.x, this->y + other.y };
	}

	Vector2 Vector2::sub(const Vector2 other) const
	{
		return { this->x - other.x, this->y - other.y };
	}

	Vector2 Vector2::scale(float a) const
	{
		return { a * this->x, a * this->y };
	}

	float Vector2::norm() const
	{
		return sqrt(this->x * this->x + this->y * this->y);
	}

	float Vector2::normsq() const
	{
		return this->x * this->x + this->y * this->y;
	}

	Vector2 Vector2::normalized() const
	{
		float d = Q_rsqrt(this->x * this->x + this->y * this->y);
		return d * *this;
	}

	void Vector2::normalize()
	{
		float d = Q_rsqrt(this->x * this->x + this->y * this->y);
		*this *= d;
	}



	void Vector2::operator=(const Vector2 other)
	{
		this->x = other.x;
		this->y = other.y;
	}

	void Vector2::operator+=(const Vector2 other)
	{
		this->x += other.x;
		this->y += other.y;
	}

	void Vector2::operator-=(const Vector2 other)
	{
		this->x -= other.x;
		this->y -= other.y;
	}

	void Vector2::operator*=(float a)
	{
		this->x *= a;
		this->y *= a;
	}



	bool Vector2::operator==(const Vector2 other) const
	{
		return this->x == other.x && this->y == other.y;
	}

	bool Vector2::operator!=(const Vector2 other) const
	{
		return this->x != other.x || this->y != other.y;
	}



	Vector2::~Vector2()
	{

	}



	Vector2 operator+(const Vector2 v1, const Vector2 v2)
	{
		return { v1.getX() + v2.getX(), v1.getY() + v2.getY() };
	}

	Vector2 operator-(const Vector2 v1, const Vector2 v2)
	{
		return { v1.getX() - v2.getX(), v1.getY() - v2.getY() };
	}

	Vector2 operator*(float a, const Vector2 v)
	{
		return { a * v.getX(), a * v.getY() };
	}

	Vector2 operator*(const Vector2 v, float a)
	{
		return { a * v.getX(), a * v.getY() };
	}


	float dot(const Vector2 v1, const Vector2 v2)
	{
		return v1.getX() * v2.getX() + v1.getY() * v2.getY();
	}

	Vector2 compmulti(const Vector2 v1, const Vector2 v2)
	{
		return { v1.getX() * v2.getX(), v1.getY() * v2.getY() };
	}



	std::ostream& operator<<(std::ostream& stream, const Vector2 v)
	{
		stream << '(' << v.getX() << ", " << v.getY() << ')';
		return stream;
	}

}