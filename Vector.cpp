#include "Vector.h"

Vector2D::Vector2D(float x_, float y_)
{
	Vector2D::x = x_;
	Vector2D::y = y_;
}

bool Vector2D::isZero()
{
	return Vector2D::x != 0 && Vector2D::y != 0;
}

void Vector2D::Zero()
{
	Vector2D::x = 0.f; 
	Vector2D::y = 0.f;
}

bool Vector2D::isValid()
{
	return !isinf(Vector2D::x) && !isinf(Vector2D::y);
}

float Vector2D::Dot(const Vector2D& a, const Vector2D& b)
{
	return (a.x * b.x + a.y * b.y);
}

float Vector2D::Lenght(const Vector2D& vec)
{
	return sqrt(vec.x * vec.x + vec.y * vec.y);
}

void Vector2D::operator+=(const Vector2D& vec)
{
	 Vector2D::x += vec.x;
	 Vector2D::y += vec.y;
}

void Vector2D::operator-=(const Vector2D& vec)
{
	Vector2D::x -= vec.x;
	Vector2D::y -= vec.y;
}

void Vector2D::operator/=(const Vector2D& vec)
{
	Vector2D::x /= vec.x;
	Vector2D::y /= vec.y;
}

void Vector2D::operator*=(const Vector2D& vec)
{
	Vector2D::x *= vec.x;
	Vector2D::y *= vec.y;
}

void Vector2D::operator+(const Vector2D& vec)
{
	Vector2D::x + vec.x;
	Vector2D::y + vec.y;
}

void Vector2D::operator-(const Vector2D& vec)
{
	Vector2D::x - vec.x;
	Vector2D::y - vec.y;
}

void Vector2D::operator*(const Vector2D& vec)
{
	Vector2D::x * vec.x;
	Vector2D::y * vec.y;
}

void Vector2D::operator/(const Vector2D& vec)
{
	Vector2D::x / vec.x;
	Vector2D::y / vec.y;
}

bool Vector2D::operator==(const Vector2D& vec)
{
	return (Vector2D::x == vec.x) && (Vector2D::y == vec.y);
}

bool Vector2D::operator!=(const Vector2D& vec)
{
	return (Vector2D::x != vec.x) && (Vector2D::y != vec.y);
}

// --------------------------------------------------------------------------------------------------------------------------------------------------------- //

Vector3D::Vector3D(float x_, float y_, float z_)
{
	Vector3D::x = x_;
	Vector3D::y = y_;
	Vector3D::z = z_;
}

bool Vector3D::isZero()
{
	return 	Vector3D::x != 0.f && Vector3D::y != 0.f && Vector3D::z != 0.f;
}

void Vector3D::Zero()
{
	Vector3D::x = 0.f;
	Vector3D::y = 0.f;
	Vector3D::z = 0.f;
}

bool Vector3D::isValid()
{
	return !isinf(Vector3D::x) && !isinf(Vector3D::y) && !isinf(Vector3D::z);
}

float Vector3D::Dot(const Vector3D& a, const Vector3D& b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

float Vector3D::Lenght(const Vector3D& vec)
{
	return sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}

void Vector3D::operator+=(const Vector3D& vec)
{
	Vector3D::x += vec.x;
	Vector3D::y += vec.y;
	Vector3D::z += vec.z;
}

void Vector3D::operator-=(const Vector3D& vec)
{
	Vector3D::x -= vec.x;
	Vector3D::y -= vec.y;
	Vector3D::z -= vec.z;
}

void Vector3D::operator/=(const Vector3D& vec)
{
	Vector3D::x /= vec.x;
	Vector3D::y /= vec.y;
	Vector3D::z /= vec.z;
}

void Vector3D::operator*=(const Vector3D& vec)
{
	Vector3D::x *= vec.x;
	Vector3D::y *= vec.y;
	Vector3D::z *= vec.z;
}

void Vector3D::operator+(const Vector3D& vec)
{
	Vector3D::x + vec.x;
	Vector3D::y + vec.y;
	Vector3D::z + vec.z;
}

void Vector3D::operator-(const Vector3D& vec)
{
	Vector3D::x - vec.x;
	Vector3D::y - vec.y;
	Vector3D::z - vec.z;
}

void Vector3D::operator*(const Vector3D& vec)
{
	Vector3D::x * vec.x;
	Vector3D::y * vec.y;
	Vector3D::z * vec.z;
}

void Vector3D::operator/(const Vector3D& vec)
{
	Vector3D::x / vec.x;
	Vector3D::y / vec.y;
	Vector3D::z / vec.z;
}

bool Vector3D::operator==(const Vector3D& vec)
{
	return (Vector3D::x == vec.x) && (Vector3D::y == vec.y) && (Vector3D::z == vec.z);
}

bool Vector3D::operator!=(const Vector3D& vec)
{
	return (Vector3D::x != vec.x) && (Vector3D::y != vec.y) && (Vector3D::z != vec.z);
}
