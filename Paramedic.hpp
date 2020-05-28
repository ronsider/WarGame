#include "Soldier.hpp"

namespace WarGame
{

class Paramedic:public Soldier
{
    public:

    Paramedic(uint& team):Soldier(team){}

};
}