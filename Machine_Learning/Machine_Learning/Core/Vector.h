#pragma once
#include "Build/BuildModule.h"


// This is a 3 component vector that has an x, y, z variable in 3D space;
struct CORE_API FVector
{
public:

	// The vector's "x" component
	float X;

	// The vector's "Y" component
	float Y;

	// The vector's "Z" component
	float Z;
	
	// The empty vector (0.0f, 0.0f, 0.0f)
	static const float ZeroVector;

public:

	// Simple Constructor with no initialization
	FVector();

	// Constructor that sets all components to the argument
	FVector(float Inf);

	// Constructor that sets the arguments components with
	// the personal variables
	FVector(const FVector* V);

	// Constructor to intialize the variables in the vector
	FVector(float x, float y, float z);

public: // static functions

	// Vector multiplication
	static float Multiply(const FVector* Target, const FVector* B);
};

inline FVector::FVector()
{
}

inline FVector::FVector(float Inf)
	:X(Inf), Y(Inf), Z(Inf)
{
}

inline FVector::FVector(const FVector* V)
	: X(V->X), Y(V->Y), Z(V->Z)
{
}

inline FVector::FVector(float x, float y, float z)
	:X(x), Y(y), Z(z)
{
}

inline float FVector::Multiply(const FVector* Target, const FVector* B)
{
	float product = Target->X * B->X + Target->Y * B->Y + Target->Z * B->Z;
	return product;
}
