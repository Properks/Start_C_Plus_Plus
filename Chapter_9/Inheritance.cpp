#include <iostream>
#include<string>
using namespace std;
// Design a class hierarchy for the characters in the game
class Charater // Including Health, mana point and defense(ex. resistance) 
{
private:
    int Max_Health_point;
    int Max_Mana_point;
public:
    int Current_Health_point;
    int Current_Mana_point;
    int Magic_resistance;
    void Set_point(int health, int man);
}; 
void Charater::Set_point(int health, int mana) 
{
    Max_Health_point = health;
    Max_Mana_point = mana;
    Current_Health_point = Max_Health_point;
    Current_Mana_point = Max_Mana_point;
}

class Warrior : public Charater // Warrior character including normal attack power and special attack
{
private:
    int Weapon_strength;
    int Special_attacks;
public:
    Warrior();
    ~Warrior() {}
    void Weapon_str(Charater &A) // Normal attack
    {
        A.Current_Health_point -= Weapon_strength;
    }
    void Special_atk(Charater &A) // Special attack
    {
        if (this -> Current_Mana_point < 2)
        {
            cout << "Cannot attack because of no mana" << endl;
            return;
        }
        else
        {
            A.Current_Health_point -= (Weapon_strength * Special_attacks - A.Magic_resistance); // Calculate resistance
            this -> Current_Mana_point -=  Special_attacks; // reduce mana
        }
    }
};

Warrior::Warrior() // Initialize stats of warrior
{
    Set_point(100, 20);
    Weapon_strength = 8;
    Special_attacks = 2;
    Magic_resistance = 0;
}

class Mage : public Charater
{
private:
    int Spell_power;
public:
    Mage();
    ~Mage() {}
    void Spell_pw(Charater &A) // Spell attack
    {
        if (this -> Current_Mana_point < 3)
        {
            cout << "Cannot attack because of no mana" << endl;
            return;
        }
        else
        {
            A.Current_Health_point -= (Spell_power * 5 - A.Magic_resistance);
            this -> Current_Mana_point -=  Spell_power;
        }
    }
};

Mage::Mage() // initialize stats of mage
{
    Set_point(70, 50);
    Spell_power = 3;
    Magic_resistance = 3;
}
void print(Mage A, Warrior B) // For interface
{
    cout << endl << "Warrior" << endl;
    cout << "Health" << B.Current_Health_point << "/" << 100 << endl;
    cout << "Mana" << B.Current_Mana_point << "/" << 20 << endl;
    cout << "Mage" << endl;
    cout << "Health" << A.Current_Health_point << "/" << 70 << endl;
    cout << "Mana" << A.Current_Mana_point << "/" << 50 << endl << endl;
}

int main()
{
    
    return 0;
}