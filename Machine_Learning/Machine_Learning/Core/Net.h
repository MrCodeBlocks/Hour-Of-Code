#pragma once

class Net
{
public:

	// Constructor that has input and weight vectors
	Net();

	// Destructor
	virtual ~Net();


public:

	float Guess(const FVector* Inputs, const FVector* Weights);

	float Sin(float& x);
private:

	// Input vector
	struct FVector* m_Inputs;

	// Weight Vector
	struct FVector* m_Weights;
};

