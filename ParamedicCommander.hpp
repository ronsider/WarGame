#include "Soldier.hpp"

namespace WarGame
{
    class ParamedicCommander:public Soldier{
        public:
        ParamedicCommander(uint& team):Soldier(team){}

    };
}