/**
 * \class Character
 * 
 * \brief Character class
 * 
 * This is the Character class. In this class there is a constructor, which is setting up
 * the variables. There are four simple getter functions. In here we generating a fight between two player and
 * chechking who is the winner in each fights. There is a parseUnit function for the .json input files.
 * Finally there's a operator overloding to the output.
 * 
 * \author davidpokorni
 * 
 * \date 2020/10/11 11:17
*/
#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

class Character{
private:
    std::string name; ///< This is the name of the player.
    int hp;///< This is the health points of the player.
    int dmg;///<This is the damage of the player.
public:
    /// It's a basic constructor of the class.
    Character(/**< [in] There's no parameter in this contructor*/);
    /// This contructor is setting up the private variables.
    Character(std::string name/** [in] Name of the player.*/, int hp/** [in] Health points of the player.*/, int dmg/** [in] Damage of the player.*/);
    /// Its's a simple getter, returns with the name of te player.
    std::string getName(/**< [in] There's no parameter in this getter*/) const;
    /// Its's a simple getter, returns with the healt points of te player.
    int getHp(/**< [in] There's no parameter in this getter*/) const;
    /// Its's a simple getter, returns with the damage of te player.
    int getDmg(/**< [in] There's no parameter in this getter*/) const;
    /// This function is chechking the hp of the players. If it's 0, return false, else true.
    bool isAlive(/**< [in] There's no parameter in this getter*/) const;
    /// This function is doing the attacks and setting up the health points of the players.
    void attack(Character &c/** [in] This is the created palyer*/);
    /// This method manage the input datas from the .json file
	static void parseUnit(Character &C/** [in] This is the cerated player*/, std::string charSheetName/** This is the string for the .json file name*/);
    /// This is the friend of the class and overload the "cout".
    friend std::ostream & operator<<(std::ostream & os/** [in] This is a ostream referenc to the output*/, const Character &C /**This class what the program print out*/);
};

#endif // !CHARACTER_H
