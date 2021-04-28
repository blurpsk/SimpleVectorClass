#pragma once

#include <math.h>

class Vector2D
{
	public:
		float x, y;

		Vector2D(float x_, float y_);
		bool isZero();
		void Zero();
		bool isValid();
		float Dot(const Vector2D&, const Vector2D&);
		float Length(const Vector2D&);

		void operator += (const Vector2D&);
		void operator -= (const Vector2D&);
		void operator /= (const Vector2D&);
		void operator *= (const Vector2D&);
		void operator + (const Vector2D&);
		void operator - (const Vector2D&);
		void operator * (const Vector2D&);
		void operator / (const Vector2D&);
		bool operator == (const Vector2D&);
		bool operator != (const Vector2D&);
};

class Vector3D
{
public:
	float x, y, z;

	Vector3D(float x_, float y_, float z_);
	bool isZero();
	void Zero();
	bool isValid();
	float Dot(const Vector3D&, const Vector3D&);
	float Length(const Vector3D&);

	void operator += (const Vector3D&);
	void operator -= (const Vector3D&);
	void operator /= (const Vector3D&);
	void operator *= (const Vector3D&);
	void operator + (const Vector3D&);
	void operator - (const Vector3D&);
	void operator * (const Vector3D&);
	void operator / (const Vector3D&);
	bool operator == (const Vector3D&);
	bool operator != (const Vector3D&);
};
