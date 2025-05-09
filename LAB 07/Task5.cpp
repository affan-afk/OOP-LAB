#include <iostream>
#include <string>

using namespace std;

class Character {
protected:
    string characterName, weaponType;
    int level, healthPoints;

public:
    Character(string name, int lvl, int hp, string weapon = "")
        : characterName(name), level(lvl), healthPoints(hp), weaponType(weapon) {}

    virtual void attack() {
        cout << characterName << " attacks with " << weaponType << "!" << endl;
    }

    virtual void defend() {
        cout << characterName << " defends!" << endl;
    }

    virtual void displayStats() {
        cout << "Name: " << characterName << "\nLevel: " << level
             << "\nHP: " << healthPoints << "\nWeapon: " << weaponType << endl;
    }
};

class Warrior : public Character {
    int armorStrength, meleeDamage;

public:
    Warrior(string name, int lvl, int hp, string weapon, int armor, int dmg)
        : Character(name, lvl, hp, weapon), armorStrength(armor), meleeDamage(dmg) {}

    void attack() {
        cout << characterName << " strikes with melee power of " << meleeDamage << endl;
    }
};

class Mage : public Character {
    int manaPoints, spellPower;

public:
    Mage(string name, int lvl, int hp, int mana, int spell)
        : Character(name, lvl, hp, "Staff"), manaPoints(mana), spellPower(spell) {}

    void defend() {
        cout << characterName << " casts a magical barrier using " << manaPoints << " mana." << endl;
    }
};

class Archer : public Character {
    int arrowCount;
    double rangedAccuracy;

public:
    Archer(string name, int lvl, int hp, int arrows, double accuracy)
        : Character(name, lvl, hp, "Bow"), arrowCount(arrows), rangedAccuracy(accuracy) {}

    void attack() {
        cout << characterName << " fires an arrow with " << (rangedAccuracy * 100) << "% accuracy!" << endl;
    }
};

class Rogue : public Character {
    int stealthLevel, agility;

public:
    Rogue(string name, int lvl, int hp, int stealth, int agi)
        : Character(name, lvl, hp, "Dagger"), stealthLevel(stealth), agility(agi) {}

    void displayStats() {
        Character::displayStats();
        cout << "Stealth: " << stealthLevel << "\nAgility: " << agility << endl;
    }
};

int main() {
    Warrior w("Thorn", 5, 100, "Sword", 80, 25);
    Mage m("Elora", 4, 70, 100, 40);
    Archer a("Lina", 6, 90, 30, 0.85);
    Rogue r("Shade", 7, 85, 90, 95);

    w.displayStats();
    w.attack();
    cout << endl;

    m.displayStats();
    m.defend();
    cout << endl;

    a.displayStats();
    a.attack();
    cout << endl;

    r.displayStats();

    return 0;
}
