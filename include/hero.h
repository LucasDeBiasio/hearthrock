#ifndef _HERO_H_
#define _HERO_H_

#include <iostream>
#include <string>

using namespace std;
using std::string;

class hero {
    public:
        int health;
        int armour;
        int damage;
        hero();
        void attack();
        virtual void heroPower() = 0;
};

class warlock : public hero {
    public:
        void heroPower() override;
};

class druid : public hero {
    public:
        void heroPower() override;
};

class rogue : public hero {
    public:
        void heroPower() override;
};

class mage : public hero {
    public:
        void heroPower() override;
};

class warrior : public hero {
    public:
        void heroPower() override;
};

class paladin : public hero {
    public:
        void heroPower() override;
};

class shaman : public hero {
    public:
        void heroPower() override;
};

class hunter : public hero {
    public:
        void heroPower() override;
};

class priest : public hero {
    public:
        void heroPower() override;
};

#endif