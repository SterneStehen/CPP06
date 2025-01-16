#include <iostream>
#include <string>
#include <map>

int main(){
	std::map <std::string, int> myMap;

	myMap["Alice"] = 25;
	myMap["Sergii"] = 40;
	myMap["Alona"] = 38;
	myMap["Daryna"] =  3;
 
	std::cout << "Alice age : " << myMap["Alice"] << std::endl;

	auto it = myMap.find("Alona");
	if(it != myMap.end())
		std::cout << "find key :" << it->first << ". Age: " << it->second << std::endl;
	else
		std::cout << "key not find \n";

	auto it1 = myMap.find("Daryna");
	if(it1 != myMap.end())
		std::cout << "find key :" << it1->first << ". Age: " << it1->second << std::endl;
	else
		std::cout << "key not find \n";
}

