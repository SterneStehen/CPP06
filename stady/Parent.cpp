#include <iostream>

class Parent
{
protected:
	int m_value;
public:
	Parent(int value): m_value(value){};
	~Parent(){};

	std::string getName(){
		return "Parent";
		}
	int getValue(){
		return m_value;
	}
};

class Son: public Parent
{

public:
	Son(int value): Parent(value){};
	~Son(){};

	std::string getName(){
		return "Son";
	}
	int getDoubleVal(){
		return getValue() * 2;
	}
};


int main()
{
	Parent P(5);
	std::cout << P.getName() << "  " << P.getValue() << std::endl;
	
	Son S(2);
	std::cout << S.getName() << "  " << S.getDoubleVal() << std::endl;

	Son &S1 = S; 
	std::cout << S1.getName() << "  " << S1.getValue() << std::endl;

	Son *S2 = &S;
	std::cout << S2->getName() << "  " << S2->getValue() << std::endl;

}