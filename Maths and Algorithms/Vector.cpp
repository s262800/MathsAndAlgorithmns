#include "Vector.h"
#include <math.h>

float Vector::Magnitude()
{
	float a = (x * x) + (y * y) + (z * z);

	float m = sqrt(a);

	return m;
}

void Vector::Normalise()
{
	float normX = (x / Magnitude());
	float normY = (y / Magnitude());
	float normZ = (z / Magnitude());

	x = normX;
	y = normY;
	z = normZ;
}

void Vector::Scale(float Scaler)
{
	float scaledX = x * Scaler;
	float scaledY = y * Scaler;
	float scaledZ = z * Scaler;

	x = scaledX;
	y = scaledY;
	z = scaledZ;
}

float Vector::Dot(Vector& B)
{
	float mx = x * B.x;
	float my = y * B.y;
	float mz = z * B.z;
	float sum = mx + my + mz;

	float magA = Magnitude();
	float magB = B.Magnitude();

	float cosTheta = sum / (magA * magB);

	return cosf(cosTheta);
}

Vector Vector::Cross(Vector& B)
{
	return Vector();
}
