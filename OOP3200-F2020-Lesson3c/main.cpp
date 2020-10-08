#include <iomanip>
#include <iostream>
#include <vector>



#include "GameObject.h"

static void BuildGameObjects(std::vector<GameObject*>& game_objects, const int num = 2)
{

	for (auto count = 0; count < num; count++)
	{
		int id;
		std::cout << "Enter the Game Object ID: ";
		std::cin >> id;

		Vector2D point;
		std::cout << "Enter the Game Object's points (x, y): ";
		std::cin >> point;

		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You Entered " << id << " for the Game Object ID" << std::endl;
		std::cout << "You Entered " << point << " for the Game Objects position" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;
		auto* gameObject = new GameObject(id, point);
		game_objects.push_back(gameObject);
	}



}

static void CompareGameObjects(GameObject* object1, GameObject* object2)
{
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first Game Object is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second Game Object is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first point and second point is: " << Vector2D::Distance(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first vector to the second vector is: " << Vector2D::SignedAngle(object1->GetPosition(), object2->GetPosition()) << std::endl << std::endl;


	std::cout << "First Game Object Details: " << std::endl;
	std::cout << object1->ToString() << std::endl;

	std::cout << "Second Game Object Details: " << std::endl;
	std::cout << object2->ToString() << std::endl;
}

int main()
{

	std::vector<GameObject*> gameObjects;
	int numGames;
	std::cout << "How many Games do you want to play?: ";
	std::cin >> numGames;
	std::cout << "\n--------------------------------------------------------------" << std::endl;


	BuildGameObjects(gameObjects, numGames);


	int index1, index2;
	std::cout << "What is the first Object Index?: ";
	std::cin >> index1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	std::cout << "What is the second Object Index?: ";
	std::cin >> index2;
	CompareGameObjects(gameObjects[index1], gameObjects[index2]);

}

