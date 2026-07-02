#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
public:
	Weapon();
	Weapon(std::string _type);
	std::string getType();
	void setType(std::string _type);

private:
	std::string	type;
};

#endif // WEAPON_HPP