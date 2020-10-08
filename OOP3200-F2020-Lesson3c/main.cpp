#include <iomanip>
#include <iostream>


#include "GameObject.h"

int main()
{
	int id1, id2;
	Vector2D point1;
    std::cout << "Enter the first point (x, y): ";
	std::cin >> point1;
	std::cout << "Enter first Game Object ID: ";
	std::cin >> id1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point1 << " for the first Game Object" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	const GameObject gameObject1(id1, point1);

	Vector2D point2;
	std::cout << "Enter the second point (x, y): ";
	std::cin >> point2;
	std::cout << "Enter second Game Object ID: ";
	std::cin >> id2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point2 << " for the second Game Object" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	const GameObject gameObject2(id2, point2);

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first Game Object is: " << gameObject1.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second Game Object is: " << gameObject2.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first point and second point is: " << Vector2D::Distance(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first vector to the second vector is: " << Vector2D::SignedAngle(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl << std::endl;


	std::cout << "First Game Object Details: " << std::endl;
	std::cout << gameObject1.ToString() << std::endl;

	std::cout << "Second Game Object Details: " << std::endl;
	std::cout << gameObject2.ToString() << std::endl;
}

