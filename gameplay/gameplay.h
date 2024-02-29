#ifndef GAMEPLAY_H_
#define GAMEPLAY_H_

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
 

typedef struct Player_struct {
    /*The names can change*/
    int (**PlayerShipBoard);
    int (**PlayerTargetBoard);
    char (*Name);
    int hitCount; 
    int size;
    int shotCount;
    char playerType;
    int missCount;
    char gamemode;
    int (**Carrier); 
    int (**Battleship); 
    int (**Submarine); 
    int (**Cruiser); 
    int (**Destroyer); 
    int (hitx); 
    int (hity); 
} Player;

 
Player* NewGame(int numPlayers);
Player CreateGameBoard(char* pName,int size,Player Player);
Player CreateLoadBoard(Player p);
void Quit(Player p1, Player p2);
Player Attack(Player Player);
void PrintBoard(Player p);
void PrintShipBoard(Player p);
void PrintTargetBoard(Player Player);
Player BasicAIAttack(Player AI, Player p);
int coinFlip();
Player Manually_Place_Ships(Player p); 
Player Randomly_Place_Ships(Player p);
void Malware_exe_word_bank(Player AI, Player p);
Player AttackChoice(Player AI, Player p);
Player ShipTracker(Player AI, Player p);
Player AIAttackRight(Player AI, Player p);
Player AIAttackLeft(Player AI, Player p);
Player AIAttackUp(Player AI, Player p);
Player AIAttackDown(Player AI, Player p);
void create_marks_csv(Player p1, Player p2); 
char** namesplit(char* names);
Player CheaterAIAttack(Player p1, Player p2);
Player SalvoPlayerAttack(Player p1, Player p2);


#endif
	
