#include <iostream>

class Animal
{
private:
	std::string m_name;
public:
	Animal(std::string name): m_name(name){};
	~Animal(){};
	std::string getName(){
		return m_name;
	}
	virtual std::string speak()= 0;
};

class Dog: public Animal
{

public:
	Dog(std::string name): Animal(name){};
	~Dog(){};
		std::string speak(){
		return "Gaw";
	}
};

class Cat: public Animal
{

public:
	Cat(std::string name): Animal(name){};
	~Cat(){};
	std::string speak(){
		return "Mau";
	}
};

int main()
{
	 Cat cat("Matros");
    std::cout << "cat is named " << cat.getName() << ", and it says " << cat.speak() << '\n';
 
    Dog dog("Barsik");
    std::cout << "dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';
	
	Animal *pAnimal = &cat;
	std::cout << "pAmimal is name " << pAnimal->getName() << " , and it says " << pAnimal->speak() << '\n';

	pAnimal = &dog;
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

	Cat Matros("Matros"), Mau("Mau"), Mursic("Mursik");
	Dog Barsic("Bars"), Doggy("Doggy"), Tusic("Tusik");

	Animal *arr[6] = {&Matros, &Barsic, &Mau, &Doggy, &Mursic, &Tusic};

	for (size_t i = 0; i < 6; i++)
	{
		std::cout << arr[i]->getName() << " says " << arr[i]->speak() << '\n';
	}
	
 
}

