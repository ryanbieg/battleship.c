#include <stdio.h>
#include "titleScreen.h"
#include <string.h>
#include <stdlib.h>

int titleScreen()
{
 
 
  puts("RULES FOR 2 PLAYERS");
  puts("Place each ship manually or randomly, in any horizontal or vertical position, but not diagonally.");
  puts("One your turn, pick a target hole on your target grid and type out its location by number.");
  puts("If you call out a shot location that is occupied by a ship on your opponent’s ocean grid, your shot is a hit! Your opponent will tell you which ship you have hit (cruiser, submarine, etc.). An ‘X’  in the corresponding target hole of the ship you have hit will record the hit on your target grid. ");
  puts("If you call out a shot location not occupied by a ship on your opponent’s ocean grid, it’s a miss. An ‘O’ in the corresponding target hole on your target grid will record the miss so you won’t call this shot again");
  puts("After a hit or a miss, your turn is over. Play continues in this manner, with you and your opponent calling one shot per turn. ");
  puts("\nSINKING A SHIP");
  puts("Once the length of any one ship has been hit, it has been sunk. The ship that was sunk will be announced. ");
  puts("\nWINNING THE GAME");
  puts("If you’re the first player to sink your opponent’s entire fleet of 5 ships, you win the game!");
 
  char startgameinputvar;
  char savefilename[30];
  printf ("BATTLESHIP 2021\nPRESENTED BY:\nGROUP ONE, C GET DEGREE\n");
  printf ("Options:\nn - Start New Game\nl - load old game\n");
  scanf ("%c", &startgameinputvar);
  if (startgameinputvar == 'l'){
     return 3;
   }//end if load
  else if (startgameinputvar == 'n'){
    int numPlayers;
    char gamemode;
    do{
     printf("Enter number of players: \n0 - Watch computer simulation\t 1 - Player vs CPU\t 2 - Two Players\n");
     scanf("%d", &numPlayers);

    if(numPlayers == 2){
      printf("Select Game Type: \nc - Classic Mode\t s - Salvo shooting mode\n");
      scanf(" %c", &gamemode);
      if(gamemode == 'c'){
        return 2; 
      }//end player v player classic rules if 
      else if(gamemode == 's'){
        return 4; 
      }// End player v player Salvo mode if
    }// end 2 player if 
   
     if(numPlayers == 0 ){
       return 0;
     }//End AI vs AI if 
     else if(numPlayers == 1){
       return 1;
     }//End Player vs CPU if
     else{
       puts("Invalid input, please try again (you mongrel).");
     }
    }while(true);
  }//end if new game
 
}//end titleScreen
 
 

