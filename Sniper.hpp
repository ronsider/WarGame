#include "Soldier.hpp"

namespace WarGame
{

class Sniper:public Soldier
{
    public:
    Sniper(uint& team):Soldier(team){}
};

}
