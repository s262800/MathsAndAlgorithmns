#include "Maths.h"
#include <math.h>


#define Pi 3.14f
#define HalfCircleDeg 180

float MathUtils::toRad(float Deg)
{
	float radian = Deg * Pi / HalfCircleDeg;
	
	return radian;
}

float MathUtils::toDeg(float Rad)
{
	float degrees = Rad * HalfCircleDeg / Pi;
	
	return degrees;
}

float MathUtils::Pythagoras(float A, float B)
{
	float c = (A * A) + (B * B);
	float h = sqrt(c);
	
	return h;
}

float MathUtils::FindSinTheta(float A, float B)
{
	float Sin = sin(A / B);
	
	return Sin;
}

float MathUtils::FindCosTheta(float A, float B)
{
	float Cos = cos(A / B);
	
	return Cos;
}

float MathUtils::FindTanTheta(float A, float B)
{
	float Tan = tan(A / B);

	return Tan;
}

float MathUtils::FindHyp(float Angle, float B)
{
	float hyp = B / sin(Angle);	
	
	return hyp;
}

float MathUtils::FindOpp(float Angle, float B)
{
	float opp = B * sin(Angle);
	
	return opp;
}

float MathUtils::FindAdj(float Angle, float B)
{
	float adj = B / tan(Angle);
	
	return adj;
}
