#include <iostream>
#include <vector>
#pragma once
///////
///////
//describing the layout of a soldier////
///////
//////
 namespace WarGame
 {
     enum type{footsoldier,footcommander,snipercommander,paramedic,paramediccommander};

     class Soldier
     {
         protected:
         type soldier;
         uint team;
         int hp;//health points
         int kk;//delete this in part b

         public:
         Soldier(uint& number)
         {
             team=number;

         }
         Soldier(int number)/*delete this in part b*/
         {
             kk=number;

         }

         void soldier_stats()
         {
             std::cout<<"type :" <<this->soldier;
             std::cout<<"team : "<<this->team;
             std::cout<<"hp : "<<this->hp;
         }

        //add later in part b// virtual void heal_attack(Soldier& soldiers)=0;//pure virtual function==>no instance of soldier


     };
     
 
 }