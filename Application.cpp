/*
* Copyright Stevan.INC
* Fun code for maths and some interesting code design and simple caluclations with multiple classes
* Hopefully my code is legibleand easy to understand
*/

#include <iostream>


// This vector stuct is just for an easy access to make a vector of numbers
struct Vector
{
	float m_x;
	float m_y;
	float m_z;
	std::string m_Name;

	// This constructor is used for assigning variables to the vector
	Vector(float x, float y, float z, std::string fname)
	{
		m_x = x;
		m_y = y;
		m_z = z;
		m_Name = fname;
	}

	// This constructor is used for assigning the value of vectors to new vectors
	Vector(Vector& newValues, std::string& fname)
	{
		m_x = newValues.m_x;
		m_y = newValues.m_y;
		m_z = newValues.m_z;
		m_Name = fname;
	}

	~Vector()
	{
		std::cout << "Deleted " << m_Name << std::endl;
	}

	// @param is for an input vector, which displays the vector's values to the command prompt
	void GetVectorValues(Vector& valued)
	{
		std::cout << valued.m_x << valued.m_y << valued.m_z << std::endl;
	}
};

// The Entity class is just to create a simulated game object
class Entity
{
public:
	Entity(std::string& name)
		:m_Name(name)
	{
		std::cout << name << std::endl << std::endl;
	}
	
	~Entity()
	{
		std::cout << "Deleted " << m_Name << std::endl;
	}

	// Receieves inputs from a vector and outputs data on the command prompt
	void GetCurrentPosition(Vector& position)
	{
		std::cout << position.m_x << ", " << position.m_y << ", " << position.m_z  << "\n" << std::endl;
	}

	// A simulating function that just changes an Entity's location
	Vector Move(Vector& velocity)
	{
		 Vector* newDirection = new Vector(velocity);
		 return *newDirection;
	}

private:
	const std::string m_Name;
};

// Messy and hard to read code
// Also I know I created a bunch of unneccessary code for references but that's just for referencing practice
// Also it is dump to read, and don't worry about the plenty of variables
// And I should've just put the string variables into an array just to make it more readable (<- Dear future me do this)
// (Dear Past me, I made them in an array....you're welcome ;] )
int main()
{
	std::string names[] = {
		"m_pos",
		"m_newPos",
		 "Stevan",
		 "Original Position",
		 "New Position"
	};


	Vector* m_pos = new Vector(2, 5, 3, names[0]);
	Vector* m_newPos = new Vector(3, 7, 2, names[1]);
	Entity* stevan = new Entity(names[2]);
	Vector* pos = new Vector(*m_pos, names[3]);
	Vector* newPos = new Vector(*m_newPos, names[4]);
	stevan->GetCurrentPosition(*pos);
	stevan->Move(*newPos);
	stevan->GetCurrentPosition(*newPos);
	std::cin.get();
	delete stevan;
	delete pos;
	delete newPos;
	delete m_pos;
	delete m_newPos;
}
// I hope you've enjoyed my spaghetti code for today...Finished Product!
// Feel free to add more to it and to create what you want with this overly engineered dumb code
