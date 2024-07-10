#ifndef _CARD_H_
#define _CARD_H_

#include <iostream>
#include <string>

using namespace std;
using std::string;

class card {
    public:
        int mana;
        string name;
        string description;
        virtual void play();
};

class  minion : public card {
    public:
        int damage;
        int health;
        void play() override;
};

class spell : public card {
    public:
        void play() override;
};
#endif