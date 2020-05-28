#include "Soldier.hpp"

namespace WarGame
{
    class SniperCommander:public Soldier
    {
        SniperCommander(uint & team):Soldier(team){}

    };

}