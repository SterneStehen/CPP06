#include <iostream>

class Dollars
{
private:
	float m_dollars;
public:
	Dollars(float dollars): m_dollars(dollars){};
	~Dollars();

	void setDol(float value = 0.0f){
		m_dollars = value;
	}
	float getDol(){
		return m_dollars;
	}
	// operator int(){
	// 	return m_dollars;
	// }
	operator float(){
		return (m_dollars);
	}
};

Dollars::~Dollars()
{
}

class Cent
{
private:
	int m_cent;
public:
	Cent(int cent = 0): m_cent(cent){};
	~Cent();

	Dollars toDoll(){
		return Dollars(static_cast<float>(m_cent) / 100);
	}
	operator Dollars(){
		return Dollars(static_cast<float>(m_cent) /100);
	}
};

Cent::~Cent()
{
}


int main()
{
	Dollars D(5.0);
	int value = D;
	std::cout << "f get = " << D.getDol() << std::endl;
	std::cout << "operator int = " << value << std::endl;


	Cent C(250);
	Dollars D1 = C.toDoll();
	float value1 = D1;
	std::cout << "func toDoll = " << value1 << std::endl;


	Dollars D2 = C;
	float value3 = D2;
	std::cout << "operator Dollars = " << value3 << std::endl;

	return 0;
}