#include "Soldier.hpp"


namespace WarGame
{

class FootCommander:public Soldier
{
    public:
    
    FootCommander(uint& team):Soldier(team){}
    FootCommander(int team):Soldier(team){}

};
}