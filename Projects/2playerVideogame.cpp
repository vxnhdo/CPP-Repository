#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand() for random number generation
#include <ctime>   // for time() to seed random numbers
using namespace std;

/* 1. 2 players are initialized with NAMES, HEALTH & STRENGTH
2. Each round: Odd = Regular Attack, Even = Special Attack
3. Players deal damage to each other
4. Damage is partially blocked randomly
5. Health is updated
6. When a player's health reached 0 or less, the game announcess the result and ends
*/

class Player {
    private: // not accessible from outside of Class
        string Name;
        int Health;
        int Strength;
    public:
        Player(string name, int health, int strength){
            Name = name;
            Health = health;
            Strength = strength;
        }

        int regAttack(){ // Generate random number between 1 and 'strength', simulating a regular attack
            return rand() % Strength + 1;
        }

        int specialAttack(){
            int chance = rand() % 3; // 0 1 2
            if (chance < 2){ // if chance is less than 2, so 0 or 1
                return rand() % Strength + Strength; // Return a number that's AT LEAST Strength but less than 2 X Strength
            } else {
                return 0; // Miss
            }
        }

        bool takeDamage(int damage){ // Blocks random portion of attack then subtracts remaining from Health, returns true if player health drops to or below zero 0
            int block = rand() & (damage + 1); // random num between 1 and damage
            int blockedDamage = damage - block;
            Health -= blockedDamage;

            cout << Name << " blocked " << block << " damage, and TOOK " << blockedDamage << ", and now has " << Health << " health left." << endl;

            return Health <= 0; // only return true if Health is less than or equal to 0
        }

        void playerInfo(){ // prints player name and health
            cout << Name << " | Health: " << Health << " hp." << endl;
        }

        string getName(){ // returns Name 
            return Name; 
        }
};

int main(){
    srand(time(0)); // Seed random number generation with current time

    Player p1("Dragonborn", 300, 30); 
    Player p2("Daedrea", 250, 40);

    int round = 1;

    while(true){ // Battle loop, infinite loop runs each battle round then will only break when a player dies
        cout << "---Round " << round << " ---" << endl;
        int p1Damage, p2Damage;

        if (round % 2 == 1){ // Odd rounds = regular attacks 
            p1Damage = p1.regAttack();
            p2Damage = p2.regAttack();
            cout << "Regular damage!" << endl;
        } else { // Even rounds = special attacks
            p1Damage = p1.specialAttack();
            p2Damage = p2.specialAttack();
            cout << "Special attack!" << endl;
        }

        // Calls bool takeDamage which will return true only if player health is less than or equal to 0
        bool p1State = p1.takeDamage(p1Damage); 
        bool p2State = p2.takeDamage(p2Damage);

        p1.playerInfo(); // Print info after each round
        p2.playerInfo(); 

        if (p1State || p2State){ // If either return true
            cout << "---Battle Over---" << endl;
            if (p1State && p2State){ // If both return true 
                cout << "Draw! Both are alive." << endl;
            } else if (p1State){ // if p1State returns true (their health is less than or equal to 0)
                cout << p2.getName() << " wins." << endl;
            } else {
                cout << p1.getName() << " wins." << endl;
            }
            break;
        }
        round ++;
    }


    return 0;
}