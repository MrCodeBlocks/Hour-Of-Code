#include "Core/Build/Module.h"
#include <cmath>

Net::Net()
{
}

Net::~Net()
{
}

float Net::Guess(const FVector* Inputs, const FVector* Weights)
{
	m_Inputs = new FVector(Inputs);
	m_Weights = new FVector(Weights);
	float weightedSum = FVector::Multiply(m_Inputs, m_Weights);
	return Sin(weightedSum);
}

float Net::Sin(float& x)
{
	return 1 / 1 + std::exp(x);
}
