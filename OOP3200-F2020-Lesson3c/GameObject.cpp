#include "GameObject.h"

//Default Constructor
GameObject::GameObject() : m_id(0), m_position(Vector2D())
{
}

//Constructor
GameObject::GameObject(const int id, const float x, const float y)
{
	SetID(id);
	SetPosition(x, y);
}

//Constructor
GameObject::GameObject(const int id, const Vector2D position)
{
	SetID(id);
	SetPosition(position);
}

//Destructor
GameObject::~GameObject()
= default;

//Copy Constructor
GameObject::GameObject(const GameObject& other_object)
{
	SetID(other_object.m_id);
	SetPosition(other_object.m_position);
}

//Assignment Constructor
GameObject& GameObject::operator=(const GameObject other_object)
{
	SetID(other_object.m_id);
	SetPosition(other_object.m_position);
	return (*this); //this line is the difference between the copy constructor and the assignment constructor
}

//Getter
Vector2D GameObject::GetPosition() const
{
	return m_position;
}

int GameObject::GetID() const
{
	return m_id;
}

std::string GameObject::ToString() const
{
	std::string outputString;
	outputString += "ID      : " + std::to_string(GetID()) + "\n";
	outputString += "Position: " + GetPosition().ToString() + "\n";
	return outputString;
}

//Setter 1
void GameObject::SetPosition(const float x, const float y)
{
	m_position.Set(x, y);
}

//Setter 2
void GameObject::SetPosition(const Vector2D& new_position)
{
	m_position = new_position;
}

void GameObject::SetID(const int id)
{
	m_id = id;
}
