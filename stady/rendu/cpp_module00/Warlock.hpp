#ifndef WARLOCK_HPP
#define WARLOCK_HPP


#include <iostream>
#include <map>

class Warlock{
private:
	std::string name;
	std::string title;
public:
	Warlock(){
		std::cout << name << ": This looks like another boring day.\n";
	};
	Warlock(std::string n, std::string t): name(n), title(t){
		std::cout << name << ": This looks like another boring day.\n";
	};
	Warlock(const Warlock & src){name = src.name; title = src.title;};
	Warlock & operator=(const Warlock & src){
		if(this != &src){
			name = src.name;
			title = src.title;
		}
		return *this;
	};
	~Warlock(){
		std::cout << name << ": My job here is done!\n";
	};

	std::string getName() const{return name;};
	std::string getTitle() const{return title;};

	void setTitle (const std::string & src){title = src;};

	void introduce() const{
		std::cout << name << ": I am " << name << ", "<< title<< "!\n";
	};
};


#endif