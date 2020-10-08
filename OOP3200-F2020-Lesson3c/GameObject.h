#pragma once
#ifndef _GAME_OBJECT_
#define _GAME_OBJECT_
#include "Vector2D.h"

class GameObject
{
public:

	// default constructor
	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, Vector2D position);

	//Rule of three
	//1. Destructor
	~GameObject(); //destructor
	//
	//2. Copy Constructor
	GameObject(const GameObject& other_object); //Copy Constructor
	//
	//3. Assignment Operator
	GameObject &operator=(const GameObject other_object); //Assignment Operator

	//Accessors
	Vector2D GetPosition() const;
	int GetID() const;


	//Utility Functions
	std::string ToString() const;

	//Mutators
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);

private:

	//Member variable
	Vector2D m_position;
	int m_id;

};

#endif



