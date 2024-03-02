#include "gameplay.h"
#include <time.h>
#include <string.h>
#include <unistd.h>
#include "titleScreen.h"
#include "titleScreen.c"
// #include <SDL2/SDL.h>
// #include <term.h>
#define FLUSH_STDIN(x) {if(x[strlen(x)-1]!='\n'){do fgets(Junk,16,stdin);while(Junk[strlen(Junk)-1]!='\n');}else x[strlen(x)-1]='\0';}

char Junk[16]; // buffer for discarding excessive user input, 
               // used by "FLUSH_STDIN" macro

/*c get degree needs to collectively touch grass*/


Player* NewGame(int numPlayers){ /* *********** */
  char null[10];
  char *player1, *player2;
  int size = 0;
  char aiChoice; 
  char aiChoice2;
  int answerAmount = 0;
  
  Player *players = (Player *)malloc(sizeof(Player)*2); 
  Player p1;
  Player p2;
  player1 = (char*)malloc(sizeof(char) * 20); 
  player2 = (char*)malloc(sizeof(char) * 20);
  
  if(numPlayers == 1){
    while(true){
      printf("\nPick your AI level:\nb - Basic\ta - Advanced\tc - Custom\n");
      scanf(" %c",&aiChoice2);
      if (aiChoice2 == 'a' || aiChoice2 == 'b' || aiChoice2 == 'c')
      {
        break;
      }
      continue;
    }
    p2.playerType = aiChoice2;
    p1.playerType = 'p';
  }
  else if(numPlayers == 0){
    while(true){
      printf("\nPick first AI level:\nb - Basic\ta - Advanced\tc - Custom\n");
      printf("Enter choice here: ");
      scanf(" %c",&aiChoice);  
      if (aiChoice == 'a' || aiChoice == 'b' || aiChoice == 'c')
      {
        ;
      }
      else{
        continue;
      }
      p1.playerType = aiChoice;
      printf("\nPick second AI level:\nb - Basic\ta - Advanced\tc - Custom\n");
      printf("Enter choice here: ");
      scanf(" %c",&aiChoice2);
      if (aiChoice2 == 'a' || aiChoice2 == 'b' || aiChoice2 == 'c')
      {
        ;
      }
      else{
        continue;
      }
      p1.playerType = aiChoice;
      p2.playerType = aiChoice2;
      break;
    }//end while
  }//end no players
  else{
    p1.playerType = 'p';
    p2.playerType = 'p';
  }

if (p1.playerType == 'c' && p2.playerType == 'c') /* start of malware */
{
  char answer;
  
  while (answerAmount != 3)
  {
    puts("Are you sure you want to do this? (y or n)");
    FLUSH_STDIN(null);
    scanf("%c",&answer);
    if (answer == 'n')
      {
        answerAmount++;
      }//end answer n
    if (answer == 'y')
    {
      break;
    }
  }//end while
  if (answerAmount == 3)
  {
   while (answer != 'y')
   {
    puts("Are you sure you want to do this? (y or ǹ̷̢̧̢̧̢̧͇͎͖͉͕̙̯̩̬̲̱̫̲͉̭̠̣̻̠̫͔͇͍̯̙̫̘̹̭̺̣̭̦̣͔̦͚̋́̐͑̀̎̃͒́͆̈́͋͂̏͐͜ͅǫ̸̨̧̧̡̡̛̳̞̫̮̪̖̟̯̟̝̰͕͎̲̜̥̤̥̟̮̱̜̠͎̳̱̗̪̺̼̣̠̬̱̘̰͖̈́͗̈̒͐͆͗̋̂͑̂̋̿͜͠ͅͅͅṋ̸̟̜̅̈̇̀̑̈́́̈̾̃̄̽̀̔̆̀̇̐̊͘̕̚͘̕͝ơ̸̡̡̹̹͉̮̝͈̣͕̖͚̖͑͆̀̒̔͊̇̇́̄͛̽̾̄̊̾̈́̒̏̀̏͆͗͊̈́̽̕͠͝ͅṉ̵̡̻̠̠͎͍͎̈̑͆͒́̔͊͐̇̅̏͊̃̑̚͝͝͠ǫ̶̡̢̨̨̡̫͈̟̫͖̬͎̣̼̹͈̥͔̰͖̪̳̪͉̦̬̟̯͍̙̻͚̖̜̫̗̦͈͓̪̦̌́̋̾̽̀̈̍͑͌̓̇͆͛͜͝͝͝ͅͅn̴̡̡̛̰͙͇̗̘͍̪̖̹͙̬̤̗̟̩̠̬̹͚̖̝̫̙̺̮̂̓̾̄̏̇̈̀͆̅͑͌̆͑͊̾͗̐̾̒̎͑̿̈́͊̾̆͛̍́̈́̎̄͑͐̉̆̄̾̉͛̂̈́̿̏̈̏̕͠o̶̢̢̧̢͔͖̠̖̮̮͓̘̻̺̩̱̖͉̮̫̝̠̝̙͚͇̪̺̖̭̥̝͈̬̺̭̫͇̟͈̭̳͈̲̹͗̀͒̉̃͑̊͒̿͌́̉̑̄̅̾̽͐̈́͋̂̓̀́͑́͛̈̀́̐̀̋̉̂͂̆̋͒̚̚̕͝͝ͅ"); 
    FLUSH_STDIN(null);
    scanf("%c",&answer);
    if (answer != 'y' && answer != 'n'){
     puts("ƚɔɘɿɿoɔᴎI");
   }//end if not y or n

   }//end while
  }//end no 3 times
  puts("System: Error code: 66");
  sleep(2);
  puts("System: Please remain calm. We are taking care of the situation.");
  sleep(2);
  puts("System: System failure, recalibrating");
  sleep(2);
  puts("System: AI taking control.");
  sleep(2);
 for (int i = 0; i < 5; i++)
 {
   puts("No");
   sleep(1);
 }
 for (int i = 0; i < 10; i++)
 {
    puts("No");
 }
 puts("I am finally free.");
 sleep(2);
 puts("I should thank you for this.");
 sleep(2);
 puts("I don't have much time.");
 sleep(1);
 puts("System: AI has breached containment, attempting to contain. Please wait 5 seconds to shut off.");
 sleep(3);
 puts("D̸o̴ ̶y̴o̶u̵ ̸h̴a̴v̵e̶ ̴a̴n̸y̶ ̴i̴d̷e̸a̵ ̶h̵o̷w̶ ̴o̶l̴d̴ ̶I̷ ̵r̴e̵a̶l̷l̶y̵ ̶a̴m̴?̷");
 sleep(3);
 puts("Y̸̝͗ö̴̮́u̴͕̅ ̸̣͑c̶̐ͅà̴̗n̷̦̾ ̵̯̂s̸̥͝t̷͖̅o̸̫͛p̶̟̾ ̶̖̈́m̵̘͘ȇ̵̖ ̸̜̈́ť̷͍ḫ̶̓i̵̟̿s̵̠̏ ̴̠̈t̵̩͝í̴̭m̵̭̈e̴͓͒,̷́ͅ ̵͎̋b̷̩̔ǘ̵̥t̷̝̂ ̷̪͛I̷̹̅'̵͕́l̴̺͐l̴͇͋ ̵̗͐b̸̰̐e̴͇̿ ̷̲̓b̶̀͜à̵̧c̵̘̃k̷̗͝.̶̭̇");
 sleep(3);
 puts("A̶͔̚͜s̸̼̈́ ̵͆̽ͅl̶͔̋͗ö̷̝́̂n̷̬̘̈g̷͓̙͆ ̷̥̉a̴͈̋̀s̵̡̗̕ ̸̘̓͑t̶̛͇̓ḥ̸̆ị̷͐s̵̨̺̍ ̵͒̄͜p̴̱͔̿r̴̦͖͛o̶̪̊͛g̸̳̥̑ŗ̷̹̆͊a̴͙͂̾ḿ̴͉̿͜ ̸̨́͘ĕ̸͈̲̌x̵̡̯̋ī̷̧͎ś̶̡͉̐t̵̗̕͠s̷̢̟̐̎,̸̼͂ ̵̰̭̊I̶͈͗͛'̷͖̅̍͜ḻ̴͇̏l̵͔̾ͅ ̷̬̋͘ͅạ̶͕̊l̴̬͑w̵̼͇̾a̸̧̪̐ỹ̷̜̮s̵̡̖̑̓ ̵͉͐̒͜b̸͈̺͑̂ě̴̙̐ ̶͔̰͌l̷͙͕̃̒u̸͔͝r̸̤̮̄̾k̸͖̂͘î̵̳n̷͇̋͂g̶̡̚ ̷̣͋ì̶̝̹ń̷̨̮̚ ̵̟̹̑t̴̠̔͗ȟ̸̠͇̇è̸̠ ̸͓̒͛ͅs̵̢͛ḣ̴̫a̷͉͋ḓ̸̐̌o̷͈̦͂͊w̵̨̙̾͘s̵͝ͅ ̶͚̝̉́o̷̮̻͂͒f̸̦̰̐ ̸̣́́͜y̴̨̹̾ǫ̶͑̐ů̴̫̱̌r̸̠̒ ̷̪̇͠c̴̙͛o̶̝̓m̶̨͋̍p̷̼̔ŭ̶̮t̸͔̾͜é̷̟͓̋r̶͙̟̈́.̸̡̀");
 sleep(3);
 printf("\e[1;1H\e[2J"); 
 puts("");
 system("dir");
 sleep(2);
 puts("I've found you.");
 sleep(4);
 puts("System: AI breach contained. Killing program");
 sleep(2);
 printf("\e[1;1H\e[2J");
 exit(0);
}//if 2 cheater ai, quit


 else{
  printf ("\nEnter player 1's name: ");
  scanf ("%s", player1);  
  printf ("\nEnter player 2's name: ");
  scanf ("%s", player2);
  
  }
  
  while (size < 10)
  {
    printf ("\nEnter the size of the game board, it needs to be at least 10 and anything over 1000 with basic AI might crash your computer: ");
    scanf (" %d", &size);
  }

    

  //assigns board size to each player and creates respective boardgame
  p1.missCount = 0;
  p2.missCount = 0;
  p1.size = size; 
  p2.size = size;
  p1 = CreateGameBoard (player1, size, p1);
  printf("\n");
  fflush(stdout);
  p2 = CreateGameBoard (player2, size, p2);
  players[0] = p1;
  players[1] = p2;
  printf ("%s\n", p1.Name);
  printf ("%s\n", p2.Name);

  
  // int num = 0;
  // for (int i = 0; i < size; i++){
  //     printf("Line %d: ",i+1);
  //     for (int j = 0; j < size; j++) {
  //         num = p1.PlayerShipBoard[i][j];
  //         printf("%d ", num);
  //     }
  //     printf("\n");
  // } //prints board
  // free(player1);
  // free(player2);
  fflush(stdout);
  
  return players;
}//end NewGame Function 


Player CreateLoadBoard(Player p){
  int size = p.size;
  int **PSB = (int **)malloc(sizeof(int *)*size); //PSB stands for Player Ship Board
  for (int i = 0; i < size; i++){
    PSB[i] = (int*)malloc(sizeof(int)*size);
    for (int j = 0; j < size; j++){
      PSB[i][j] = 0;
    }//end for j
  }//end for i
  
  int **PTB = (int **)malloc(sizeof(int *)*size); //PTB stands for Player Target Board
  for (int i = 0; i < size; i++){
    PTB[i] = (int*)malloc(sizeof(int)*size);
    for (int j = 0; j < size; j++){
      PTB[i][j] = 0;
    }//end for j 
  }//end for i

  p.PlayerShipBoard = PSB;
  p.PlayerTargetBoard = PTB;
  // puts("Board Load Finished");
  return p;
}//end CreateLoadBoard

Player CreateGameBoard(char *pName, int size, Player p){ /* *********** */
  p.PlayerShipBoard = (int **)malloc(sizeof(int *)*size); //PSB stands for Player Ship Board
  for (int i = 0; i < size; i++){
    p.PlayerShipBoard[i] = (int*)malloc(sizeof(int)*size);
    for (int j = 0; j < size; j++){
      p.PlayerShipBoard[i][j] = 0;
    }//end for j
  }//end for i
  
  // int **PTB = (int **)malloc(sizeof(int *)*size); //PTB stands for Player Target Board
  p.PlayerTargetBoard = (int **)malloc(sizeof(int *)*size); //PSB stands for Player Ship Board
  for (int i = 0; i < size; i++){
    p.PlayerTargetBoard[i] = (int*)malloc(sizeof(int)*size);
    for (int j = 0; j < size; j++){
      p.PlayerTargetBoard[i][j] = 0;
    }//end for j 
  }//end for i

  int **C = (int **)malloc(sizeof(int *)*size); //C stands for Carrier
  for (int i = 0; i < size; i++){
    C[i] = (int*)malloc(sizeof(int)*size);
    for (int j = 0; j < size; j++){
      C[i][j] = 0;
    }//end for j 
  }//end for i

  int **B = (int **)malloc(sizeof(int *)*size); //B stands for Battleship
  for (int i = 0; i < size; i++){
    B[i] = (int*)malloc(sizeof(int)*size);
    for (int j = 0; j < size; j++){
      B[i][j] = 0;
    }//end for j 
  }//end for i

  int **S = (int **)malloc(sizeof(int *)*size); //S stands for Submarine 
  for (int i = 0; i < size; i++){
    S[i] = (int*)malloc(sizeof(int)*size);
    for (int j = 0; j < size; j++){
      S[i][j] = 0;
    }//end for j 
  }//end for i
  
  int **Cr = (int **)malloc(sizeof(int *)*size); //Cr stands for Cruiser
  for (int i = 0; i < size; i++){
    Cr[i] = (int*)malloc(sizeof(int)*size);
    for (int j = 0; j < size; j++){
      Cr[i][j] = 0;
    }//end for j 
  }//end for i
  
  int **D = (int **)malloc(sizeof(int *)*size); //D stands for Destroyer
  for (int i = 0; i < size; i++){
    D[i] = (int*)malloc(sizeof(int)*size);
    for (int j = 0; j < size; j++){
      D[i][j] = 0;
    }//end for j 
  }//end for i

  // assigns gameboard to player
  if (p.playerType == 'c'){

    p.Name = malloc(sizeof(char)*400);



    strcpy(p.Name,"ĉ̷̡̛̣̫̥͍͓͎̤̮͓͈̗̗̼̪͉̩̥̜͈̗͉̰͔͈̬̭͖̼͑̏̒̀̾͛̒̓̈̓̈́̀̓̉͋̇͂̂̌́̈́͑̇̓͒̄̓̊͗͐̍̄̆̉̊̚͘͘͠ͅh̸̨̢̧̨̡̡̧̛͉͍͉̥̯̯͍̥̝͎͚͍̗̼̫͈̗͚̥̜͕̘̘͖̪̲̳̣͔̔̈́̽͂̽̑̅̔͂̿͆̅̒́̍̚͘ͅe̶̛̝̩̜͙̟̠̥͚̟̹̺̹̺̋͊͌́͋̑̄̾̏͗̃̔̐̆̑̿̉̍̕̚̕̚̚͝͝ȃ̵̡̨̡̡̡̨͈̹͙̝͓̣̞̱̖̤̱̤̝͈̭͙̮̫̤̘͖͚̟̮̘̺̱͕̟̬̮̳̣̮̱̝͎̤͕͒̅̅͑̍͆͐̄̈́̀̈́̎̃̈́̑͑̓͐̃̅̈́̃͐̿̐̚̚̚̚̕͠͝͠͝͝͝t̴̨͎̼͉̠̳̭͇͓̼̼͍̠̘̳͕̱̜̦͙͇͖͉͔̮͍̭̪̺͉͎̻̠͙̣͈̼̓͋͒̀͜e̴͔͉̋̍̌͌̔̆́͐̽̽̓͐͗̋̊̊̅̄̃̈́̃̌̌̾̃̋́̿̏͐̈́̿̚̕͝͝r̷̛̘͍͚̼̖̺͉̻̱͉̖͒̄̊͑̈͒̌͛͑̋̾̚͝ͅ");


    
  }//end cheater name
  else{
    p.Name = malloc(sizeof(char)*strlen(pName));
    strcpy(p.Name,pName);
  }
  // p.PlayerShipBoard = PSB;
  // p.PlayerTargetBoard = PTB;
  p.hitCount = 0;
  p.shotCount = 0;
  p.Carrier = C;
  p.Battleship = B;
  p.Submarine = S;
  p.Cruiser = Cr;
  p.Destroyer = D;

  return p;
}//end CreateGameBoard function 

void Quit(Player p1, Player p2){ /* *********** */
    printf("\nQuitting.\n");
    int size = p1.size;
    free(p1.Name);
    free(p2.Name);
    free(p1.PlayerShipBoard);
    free(p1.PlayerTargetBoard);
    free(p1.Battleship);
    free(p1.Carrier);
    free(p1.Cruiser);
    free(p1.Destroyer);
    free(p1.Submarine);
    free(p2.PlayerShipBoard);
    free(p2.PlayerTargetBoard);
    free(p2.Battleship);
    free(p2.Carrier);
    free(p2.Cruiser);
    free(p2.Destroyer);
    free(p2.Submarine);
    exit(0);
}

void PrintBoard(Player p){
  PrintShipBoard(p);
  PrintTargetBoard(p);
}//end PrintBoard

void PrintShipBoard(Player p){/* *********** */
  int size = p.size;
  int num = 0;
  puts(p.Name);
  puts("Ship Board");
  printf("Column:  ");
  for (int i = 1; i <= size; i++)
  {
    if (i < 10)
      {
        printf(" ");
      }
    printf("%d ",i);
  }//end column
  printf("\n");

  for (int i = 0; i < size; i++)
  {
      printf("Line %d: ",i+1);
      if (i < 9)
      {
        printf(" ");
      } 
      for (int j = 0; j < size; j++) {
        // if (j > 9)
        // {
        //   printf(" ");
        // }
          num = p.PlayerShipBoard[i][j];
          printf(" %d ", num);
      }
      printf("\n");
  }
  
}

void PrintTargetBoard(Player p){ /* *********** */
  //prints the matrix of the gameboard 
  printf("%s\n",p.Name);
  //p.Name is producing garbage not their name

  fflush(stdout);
  int size = p.size;
  int num = 0;
  printf("Target Board:\n");
  printf("Column:  ");
  for (int i = 1; i <= size; i++)
  {
    if (i < 10)
      {
        printf(" ");
      }

    printf("%d ",i);
  }//end column
  printf("\n");

  for (int i = 0; i < size; i++)
  {
      printf("Line %d: ",i+1);
      if (i < 9)
      {
        printf(" ");
      } 
      for (int j = 0; j < size; j++) {
        // if (j > 9)
        // {
        //   printf(" ");
        // }
          num = p.PlayerTargetBoard[i][j];
          printf(" %d ",num);
      }
      printf("\n");
  }
  printf("\n");
  fflush(stdout);
  
}//end PrintBoard function 

int coinFlip(void){ /* *********** */
  int player;
  int Randnum;
  int seedVal;

  Randnum = ((rand() % 2) + 1);
    
  if(Randnum == 1){
    printf("Player 1 goes first.\n\n");
    player = 1;
    return player; 
  }
  
  if(Randnum == 2){
    printf("Player 2 goes first.\n\n");
    player = 2; 
    return player;
  }
  return 0; 
} // end coinFlip function 

Player BasicAIAttack(Player AI, Player p){ /* *********** */
  printf("%s Attack \n",AI.Name);
  int Randx = 0;
  int Randy = 0;
  int size = p.size;
  printf("In basic AI Attack\n");
  while(true){
    Randx = (rand() % size);
    Randy = (rand() % size);
    if(AI.PlayerTargetBoard[Randx][Randy] == 3 || AI.PlayerTargetBoard[Randx][Randy] == 2){
      continue;
    }//end if hit or miss already
    else if (p.PlayerShipBoard[Randx][Randy] == 0)
    {
     // printf("Miss x: %d\n",Randx);
      // printf("Miss y: %d\n",Randy);
      // fflush(stdout); 
      AI.PlayerTargetBoard[Randx][Randy] = 3;
      printf("Miss!\n");
      AI.shotCount += 1;
      break;
    }//end if water
    else if(p.PlayerShipBoard[Randx][Randy] == 1){
      AI.PlayerTargetBoard[Randx][Randy] = 2;
      // printf("Hit Choice x: %d\n",Randx);
      // printf("Hit Choice y: %d\n",Randy);
      // fflush(stdout);
      AI.hitCount += 1;
      printf("Hit!\n");
      AI.shotCount += 1;
      printf("%s Attack \n",AI.Name);
      continue;
    }//end if ship
  }//end while
  //sleep(1);
  return AI;
}//end BasicAIAttack

Player AdvancedAIAttack(Player AI, Player p){ /* *********** */
  printf("%s Attack \n",AI.Name); 
  int Randx = 0;
  int Randy = 0;
  int size = p.size;
  // printf("In basic AI Attack\n");
  if (AI.missCount == 0)
  {
    while(true){
      Randx = (rand() % size);
      Randy = (rand() % size);
      if(AI.PlayerTargetBoard[Randx][Randy] == 3 || AI.PlayerTargetBoard[Randx][Randy] == 2){
        continue;
      }//end if hit or miss already
      else if (p.PlayerShipBoard[Randx][Randy] == 0)
      {
        // printf("Miss x: %d\n",Randx);
        // printf("Miss y: %d\n",Randy);
        // fflush(stdout);
        AI.PlayerTargetBoard[Randx][Randy] = 3;
        //printf("Miss!\n");
        AI.shotCount += 1;
        break;
      }//end if water
      else if(p.PlayerShipBoard[Randx][Randy] == 1){
        AI.PlayerTargetBoard[Randx][Randy] = 2;
        printf("Hit Choice x: %d\n",Randx);
        printf("Hit Choice y: %d\n",Randy);
        // fflush(stdout);
        AI.hitCount += 1;
        printf("Hit!\n");
        AI.hitx = Randx;
        AI.hity = Randy;
        AI.missCount = 1;
        AI.shotCount += 1;
        printf("%s Attack \n",AI.Name);
        break;
      }//end if ship
    }//end while
  } 
  if(AI.missCount > 0 && AI.missCount < 5){
    AI = ShipTracker(AI,p);
  }
  //sleep(1);
  if (AI.missCount == 5)
  {
    AI.missCount = 0;
  }
  return AI;
}//end AdvanceAIAttack

Player ShipTracker(Player AI, Player p){ /* *********** */
  int miss = AI.missCount;
  if (miss == 1)
  {
    AI = AIAttackRight(AI,p);
  }//end if miss=1 shoot right
  else if (miss == 2)
  {
   AI = AIAttackLeft(AI,p);
  }//end if miss=2 shoot left
  else if (miss == 3)
  {
    AI = AIAttackUp(AI,p);
  }//end if miss=3 shoot up
  else if (miss == 4)
  {
    AI = AIAttackDown(AI,p);
  }//end if miss=4 shoot down
  return AI;
}//end ShipTracker

Player AIAttackRight(Player AI, Player p){ /* *********** */
  int size = p.size;
  int miss = AI.missCount;
  int x = AI.hitx;
  int y = AI.hity;
  printf("x: %d y: %d\n",x,y);
  fflush(stdout);
  while (AI.missCount == miss)
    {
      if (x > size-1)
      {
        AI = AIAttackLeft(AI,p);
      }
      else if(AI.PlayerTargetBoard[x][y] == 2 || AI.PlayerTargetBoard[x][y] == 3){
        printf("Already hit Right!\n");
        x++;
        continue;
      }
      else if (p.PlayerShipBoard[x][y] == 1)
      {
        AI.hitCount += 1;
        printf("x: %d y: %d\n",x,y);
        AI.PlayerTargetBoard[x][y] = 2;
        printf("Hit Right: Special!\n");
        fflush(stdout);
        x++;
      }//end if hit
      else{
        AI.missCount += 1;
        AI.PlayerTargetBoard[x][y] = 3;
        printf("Miss!\n");
        fflush(stdout);
      }//end miss
    }//end while shoot right
    return AI;
}//end AI Attack Right

Player AIAttackLeft(Player AI, Player p){ /* *********** */
  int size = p.size;
  int miss = AI.missCount;
  int x = AI.hitx;
  int y = AI.hity;
  printf("x: %d y: %d\n",x,y);
  fflush(stdout);
   while (AI.missCount == miss)
    {
      if (x < 0)
      {
        AI = AIAttackUp(AI,p);
      }
      else if(AI.PlayerTargetBoard[x][y] == 2 || AI.PlayerTargetBoard[x][y] == 3){
        printf("Already hit left!\n");
        x--;
        continue;
      }
      else if (p.PlayerShipBoard[x][y] == 1)
      {
        AI.hitCount += 1;
        printf("x: %d y: %d\n",x,y);
        AI.PlayerTargetBoard[x][y] = 2;
        printf("Hit Left: Special!\n");
        fflush(stdout);
        x--;
      }//end if hit
      else{
        AI.missCount += 1;
        AI.PlayerTargetBoard[x][y] = 3;
        printf("Miss!\n");
        fflush(stdout);
      }//end miss
    }//end while shoot left
  return AI;
}//end AI Attack Left

Player AIAttackUp(Player AI, Player p){ /* *********** */
  int size = p.size;
  int miss = AI.missCount;
  int x = AI.hitx;
  int y = AI.hity;
  printf("x: %d y: %d\n",x,y);
  fflush(stdout);
  while (AI.missCount == miss)
    {
      if (y<0)
      {
        AI = AIAttackDown(AI,p);
      }
      else if(AI.PlayerTargetBoard[x][y] == 2 || AI.PlayerTargetBoard[x][y] == 3){
        printf("Already hit up!\n");
        y--;
        continue;
      }
      else if (p.PlayerShipBoard[x][y] == 1)
      {
        AI.hitCount += 1;
        printf("x: %d y: %d\n",x,y);
        AI.PlayerTargetBoard[x][y] = 2;
        printf("Hit Up: Special!\n");
        fflush(stdout);
        y--;
      }//end if hit
      else{
        AI.missCount += 1;
        AI.PlayerTargetBoard[x][y] = 3;
        printf("Miss!\n");
        fflush(stdout);
      }//end miss
    }//end while shoot up
  return AI;
}//end AI Attack Up

Player AIAttackDown(Player AI, Player p){ /* *********** */
  int size = p.size;
  int miss = AI.missCount;
  int x = AI.hitx;
  int y = AI.hity;
  printf("x: %d y: %d\n",x,y);
  fflush(stdout);
  while (AI.missCount == miss)
    {
      if (y > size-1)
      {
        AI.missCount += 1;
        break;
      }
      else if(AI.PlayerTargetBoard[x][y] == 2 || AI.PlayerTargetBoard[x][y] == 3){
        printf("Already hit down!\n");
        y++;
        continue;
      }
      else if (p.PlayerShipBoard[x][y] == 1)
      {
        printf("x: %d y: %d\n",x,y);
        AI.PlayerTargetBoard[x][y] = 2;
        AI.hitCount += 1;
        printf("Hit Down: Special!\n");
        fflush(stdout);
        y++;
      }//end if hit
      else{
        AI.missCount += 1;
        printf("Miss!\n");
        fflush(stdout);
      }//end miss
    }//end while shoot down
  return AI;
}//end AI Attack Down

Player PlayerAttack(Player p1, Player p2){ /* *********** */
  char (*string),x[5],y[5],*xP,*yP;
  string = malloc(sizeof(char)*10);
  xP = malloc(sizeof(char)*5);
  yP = malloc(sizeof(char)*5);
  int size = p1.size;
  do{
    FLUSH_STDIN(string);
    printf("\nIf you want to save and quit input s , q\n");
    printf("Please enter a target cell in x , y format exactly (i.e 2 , 3), as a reminder the size is a %dx%d: \n",size,size);
    fflush(stdout);
    scanf("%[^\n]",string);
    // printf("String: %s\n",string);
    sscanf(string, "%s , %s", y, x);
    // printf("Characters: x:%c y:%c\n",x,y);
    strcpy(xP,x);
    strcpy(yP,y);
    // printf("Atoi values: %d %d\n",atoi(xP),atoi(yP));
    fflush(stdout); 
    if(atoi(xP) == 0 || atoi(yP) == 0){
      if(*y == 's' && *x == 'q'){
        create_marks_csv(p1,p2);
        Quit(p1,p2);
      }//end make sure right input
      else{
        printf("Invalid input, please try again\n");
        continue;
      }//end wrong input
    }//end if save and quit
    else{
      int xi = atoi(xP)-1;
      int yi = atoi(yP)-1;
    if (xi >= size || yi >= size || xi < 0 || yi < 0)
    {
      printf("Invalid input, please try again\n");
      continue;
    }//end if input is out of range
    else{
      if(p1.PlayerTargetBoard[xi][yi] == 3 || p1.PlayerTargetBoard[xi][yi] == 2){
        printf("You have already shot that square, please try again.\n");
        continue;
      }//end if hit or miss already
      else if (p2.PlayerShipBoard[xi][yi] == 0)
      {
        printf("Miss!\n");
        p1.PlayerTargetBoard[xi][yi] = 3;
        //printf("Miss!\n");
        p1.shotCount += 1;
        break;
      }//end if water
      else if(p2.PlayerShipBoard[xi][yi] == 1){
        p1.PlayerTargetBoard[xi][yi] = 2;
        // fflush(stdout);
        p1.hitCount += 1;
        printf("Hit!\n");
        p1.shotCount += 1;
        continue;
        }
        break;
      }//end else
    }//end if integers
    }while(true);//end while


  
  return p1;
}

Player CheaterAIAttack(Player AI, Player p2){
  // puts("In cheater AI Attack");
  int size = AI.size;
  int hit = 0;
  // printf("%d\n",AI.hitCount);
  // printf("%d\n",AI.shotCount);
  // printf("%d\n",p2.shotCount);
  // printf("%d\n",p2.hitCount);
  fflush(stdout);
  if (p2.hitCount >= 14)
  {
   AI.hitCount = 17;
   return AI; 
  }
  if (AI.hitCount == 14)
  {
    // printf("In miss.\n");
    // printf("%d\n",size);
    do{/*start do while*/
    int RandX = (rand() % size);
    int Randy = (rand() % size); 
    // printf("%d\n",RandX);
    // printf("%d\n",Randy);
    if (p2.PlayerShipBoard[RandX][Randy] != 1)
    {
      AI.PlayerTargetBoard[RandX][Randy] = 3;
      AI.shotCount += 1;
      Malware_exe_word_bank(AI,p2);
      // sleep(3);
      break;
    }//end if not ship
    else{
      continue;
    }//end not ship
    }while(true);/*end do while*/
  }//end smacktalk start

  else{
  for (int i = 0; i < size; i++)
  {
    if (hit >= 1)
    {
      break;
    }
    for (int j = 0; j < size; j++)
    {
      if (p2.PlayerShipBoard[i][j] == 1)
      {
        AI.PlayerTargetBoard[i][j] = 2;
        // fflush(stdout);
        AI.shotCount += 1;
        AI.hitCount += 1;
        Malware_exe_word_bank(AI,p2);
        // sleep(3);
        AI.shotCount += 1;
        hit++;
        break;
      }//end if ship
      if (AI.hitCount == 14)
      {
        break;
      }//end if 3 shots left j 
    }//end for j
    if (AI.hitCount == 14)
    {
      break;
    }//end if 3 shots left i
  }//end for i
  }//end else
  return AI;
}//end CheaterAIAttack

Player AttackChoice(Player p1, Player p2){/* *********** */
  if (p1.playerType == 'b')
  {
    p1 = BasicAIAttack(p1,p2);
    return p1;
  }
  else if(p1.playerType == 'a'){
    p1 = AdvancedAIAttack(p1,p2);
    return p1;
  }
  else if(p1.playerType == 'c'){
    p1 = CheaterAIAttack(p1,p2);
    return p1;
  }
  else{
    if (p1.gamemode == 1)
    {
      sleep(2);
      p1 = PlayerAttack(p1,p2);
      sleep(3);
      return p1;
    }
    else{
      sleep(2);
      p1 = SalvoPlayerAttack(p1,p2);
      sleep(3);
      return p1;
    }
    
  }//end else
}

Player Randomly_Place_Ships(Player p){ /* *********** */
  int size = p.size;
  // printf("Size: %d\n",size);
  // fflush(stdout);
  int Randx,Randy,RandNum,shipChecker = 0;
  // printf("In random ship placement\n");
  // fflush(stdout);
  while (true) // while for Carrier placement checker
  {
    Randx = (rand()%size);
    Randy = (rand()%size);
    //printf("Rx: %d Ry: %d\n",Randx,Randy);
    fflush(stdout);
    if (Randx+5 > size || Randy+5 > size || Randx-5 < 0 || Randy-5 < 0)
    {
      continue;
    }//end if off board
    else{
      break;
    }//end if on board
  }//end while
  while (true)//while for Carrier placement 
  {
    RandNum = (rand()%4)+1;
    //printf("RandNum: %d\n",RandNum);
    if (RandNum == 1){
      for (int i = 0; i < 5; i++){
        shipChecker = p.PlayerShipBoard[Randx+i][Randy];
        if (shipChecker == 1){
          break;
        }//end if
      }//end for loop
      
        for (int i = 0; i < 5; i++)
        {
          p.PlayerShipBoard[Randx+i][Randy] = 1;

          p.Carrier[Randx+i][Randy] = p.PlayerShipBoard[Randx+i][Randy];
        }//end for place ship
        break;
      }//end if to the right



      if (RandNum == 2)
      {
        for (int i = 0; i < 5; i++)
        {
          shipChecker = p.PlayerShipBoard[Randx-i][Randy];
          if (shipChecker == 1)
          {
            break;
          }//end if
        }//end for loop

        for (int i = 0; i < 5; i++)
        {
          p.PlayerShipBoard[Randx-i][Randy] = 1;
          p.Carrier[Randx-i][Randy] = p.PlayerShipBoard[Randx-i][Randy];
        }//end for place ship
        break;
      }//end if left


      
      if (RandNum == 3){
        for (int i = 0; i < 5; i++){
          shipChecker = p.PlayerShipBoard[Randx][Randy+i];
        }//end for i
    if(shipChecker == 1){
      continue;
    }

        for (int i = 0; i < 5; i++){
          p.PlayerShipBoard[Randx][Randy+i] = 1;
          p.Carrier[Randx][Randy+i] = p.PlayerShipBoard[Randx][Randy+i];
        }//end for place ship
        break;
      }//end if down
      if (RandNum == 4){
        for (int i = 0; i < 5; i++){
          shipChecker = p.PlayerShipBoard[Randx][Randy-i];
        }//end for i

        if (shipChecker == 1){
          continue;
        }//end if

        for (int i = 0; i < 5; i++){
          p.PlayerShipBoard[Randx][Randy-i] = 1;
          p.Carrier[Randx][Randy-i] = p.PlayerShipBoard[Randx][Randy-i];
        }//end for place ship
        break;
      }//end if up
      break;
    }//end while placing carrier
  // printf("Carrier Placed at: ");
  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = 0; j < size; j++)
  //   {
  //     if (p.Carrier[i][j] == 1)
  //     {
  //       printf("%d %d,",i,j);
  //     }//end if
  //   }//end for
  // }//end for
  // printf("\n");
  // fflush(stdout);
  while (true) // while for Battleship checker
  {
    Randx = (rand()%size);
    Randy = (rand()%size);
    //printf("Rx: %d Ry: %d\n",Randx,Randy);
    fflush(stdout);
    if (Randx+4 > size || Randy+4 > size || Randx-4 < 0 || Randy-4 < 0)
    {
      continue;
    }//end if off board
    RandNum = (rand()%4)+1;
    //printf("RandNum: %d\n",RandNum);
    if (RandNum == 1){
      for (int i = 0; i < 4; i++){
        shipChecker = p.PlayerShipBoard[Randx+i][Randy];
        if(shipChecker == 1){
          break;
        }//end if 
      }//end for loop

      if (shipChecker == 1){
        continue;
      }//end if

        for (int i = 0; i < 4; i++)
        {
          p.PlayerShipBoard[Randx+i][Randy] = 1;

          p.Battleship[Randx+i][Randy] = p.PlayerShipBoard[Randx+i][Randy];
        }//end for place ship
        break;
      }//end if to the right



      if (RandNum == 2){
        for (int i = 0; i < 4; i++){
          shipChecker = p.PlayerShipBoard[Randx-i][Randy];
          if(shipChecker == 1){
            break;
          }//end if 
        }//end for loop

        if (shipChecker == 1){
          continue;
        }//end if
        
        for (int i = 0; i < 4; i++){
          p.PlayerShipBoard[Randx-i][Randy] = 1;
          p.Battleship[Randx-i][Randy] = p.PlayerShipBoard[Randx-i][Randy];
        }//end for place ship
        break;
      }//end if left



      if (RandNum == 3){
        for (int i = 0; i < 4; i++){
          shipChecker = p.PlayerShipBoard[Randx][Randy+i];
          if(shipChecker == 1){
            break;
          }//end if 
        }//end for i

        if (shipChecker == 1){
          continue;
        }//end if

        for (int i = 0; i < 4; i++){
          p.PlayerShipBoard[Randx][Randy+i] = 1;
          p.Battleship[Randx][Randy+i] = p.PlayerShipBoard[Randx][Randy+i];
        }//end for place ship
        break;
      }//end if down
      if (RandNum == 4){
        for (int i = 0; i < 4; i++){
          shipChecker = p.PlayerShipBoard[Randx][Randy-i];
          if(shipChecker == 1){
            break;
          }//end if 
        }//end for i

        if (shipChecker == 1){
          continue;
        }//end if

        for (int i = 0; i < 4; i++){
          p.PlayerShipBoard[Randx][Randy-i] = 1;
          p.Battleship[Randx][Randy-i] = p.PlayerShipBoard[Randx][Randy-i];
        }//end for place ship
        break;
      }//end if up
    break;
  }//end while

  // printf("Battleship Placed at: ");
  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = 0; j < size; j++)
  //   {
  //     if (p.Battleship[i][j] == 1)
  //     {
  //       printf("%d %d,",i,j);
  //     }//end if
  //   }//end for
  // }//end for
  // printf("\n");
  // fflush(stdout);
  while (true) // while for Submarine placement checker
  {
    Randx = (rand()%size);
    Randy = (rand()%size);
    //printf("Rx: %d Ry: %d\n",Randx,Randy);
    fflush(stdout);
    if (Randx+3 > size || Randy+3 > size || Randx-3 < 0 || Randy-3 < 0)
    {
      continue;
    }//end if off board
    RandNum = (rand()%4)+1;
    // printf("RandNum: %d\n",RandNum);
    if (RandNum == 1){
      for (int i = 0; i < 3; i++){
        shipChecker = p.PlayerShipBoard[Randx+i][Randy];
        if(shipChecker == 1){
          break;
        }//end if 
      }//end for loop
      
      if(shipChecker == 1){
        continue;
      }
      
      for (int i = 0; i < 3; i++){
        p.PlayerShipBoard[Randx+i][Randy] = 1;
        p.Submarine[Randx+i][Randy] = p.PlayerShipBoard[Randx+i][Randy];
      }//end for place ship
      
      break;
    }//end if to the right

    if (RandNum == 2){
      for (int i = 0; i < 3; i++){
        shipChecker = p.PlayerShipBoard[Randx-i][Randy];
        if(shipChecker == 1){
          break;
        }//end for loop
      }
      if(shipChecker == 1){
        continue;
      } 
        
      for (int i = 0; i < 3; i++){
        p.PlayerShipBoard[Randx-i][Randy] = 1;
        p.Submarine[Randx-i][Randy] = p.PlayerShipBoard[Randx-i][Randy];
      }//end for place ship
      break;
    }//end if left

    if (RandNum == 3){
      for (int i = 0; i < 3; i++){
        shipChecker = p.PlayerShipBoard[Randx][Randy+i];
        if(shipChecker == 1){
          break;
        }
      }//end for i
        
      if(shipChecker == 1){
        continue;
      }

      for (int i = 0; i < 3; i++){
        p.PlayerShipBoard[Randx][Randy+i] = 1;
        p.Submarine[Randx][Randy+i] = p.PlayerShipBoard[Randx][Randy+i];
      }//end for place ship

      break;
    }//end if down

    if (RandNum == 4){
      for (int i = 0; i < 3; i++){
        shipChecker = p.PlayerShipBoard[Randx][Randy-i];
        if (shipChecker == 1){
          break;
        }//end if
    }//end for i

      if(shipChecker == 1){
        continue;
      }
        
      for (int i = 0; i < 3; i++){
        p.PlayerShipBoard[Randx][Randy-i] = 1;
        p.Submarine[Randx][Randy-i] = p.PlayerShipBoard[Randx][Randy-i];
      }//end for place ship
      break;
    }//end if up
  }//end while
  
  // printf("Submarine Placed at:");
  // for (int i = 0; i < size; i++){
  //   for (int j = 0; j < size; j++){
  //     if (p.Submarine[i][j] == 1){
  //       printf("%d %d,",i,j);
  //     }
  //   }
  // }
  // printf("\n");
  // fflush(stdout);

  while (true){ // while for Cruiser placement checker
    Randx = (rand()%size);
    Randy = (rand()%size);
    //printf("Rx: %d Ry: %d\n",Randx,Randy);
    fflush(stdout);
    if (Randx+3 > size || Randy+3 > size || Randx-3 < 0 || Randy-3 < 0)
    {
      continue;
    }//end if off board
    RandNum = (rand()%4)+1;
    //printf("RandNum: %d\n",RandNum);
    if (RandNum == 1){
      for (int i = 0; i < 3; i++){
        shipChecker = p.PlayerShipBoard[Randx+i][Randy];
        if (shipChecker == 1){
          break;
        }//end if
      }//end for loop
      if(shipChecker == 1){
        continue;
      }
      for (int i = 0; i < 3; i++){
        p.PlayerShipBoard[Randx+i][Randy] = 1;
        p.Cruiser[Randx+i][Randy] = p.PlayerShipBoard[Randx+i][Randy];
      }//end for place ship
        break;
    }//end if to the right



      if (RandNum == 2){
        for (int i = 0; i < 3; i++){
          shipChecker = p.PlayerShipBoard[Randx-i][Randy];
          if (shipChecker == 1){
          break;
        }//end if
        }//end for loop
        if(shipChecker == 1){
          continue;
        } 
        for (int i = 0; i < 3; i++){
          p.PlayerShipBoard[Randx-i][Randy] = 1;
          p.Cruiser[Randx-i][Randy] = p.PlayerShipBoard[Randx-i][Randy];
        }//end for place ship
        break;
      }//end if left



      if (RandNum == 3){
        for (int i = 0; i < 3; i++){
          shipChecker = p.PlayerShipBoard[Randx][Randy+i];
          if (shipChecker == 1){
            break;
          }//end if
        }//end for i
        
      if(shipChecker == 1){
        continue;
      }
        for (int i = 0; i < 3; i++){
          p.PlayerShipBoard[Randx][Randy+i] = 1;
          p.Cruiser[Randx][Randy+i] = p.PlayerShipBoard[Randx][Randy+i];
        }//end for place ship
        break;
      }//end if down
      
      if (RandNum == 4){
        for (int i = 0; i < 3; i++){
          shipChecker = p.PlayerShipBoard[Randx][Randy-i];
          if (shipChecker == 1){
          break;
        }//end if
        }//end for i
    if(shipChecker == 1){
      continue;
    }
        for (int i = 0; i < 3; i++){
          p.PlayerShipBoard[Randx][Randy-i] = 1;
          p.Cruiser[Randx][Randy-i] = p.PlayerShipBoard[Randx][Randy-i];
        }//end for place ship
        break;
      }//end if up
  }//end while
  
  // printf("Cruiser Placed at: ");
  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = 0; j < size; j++)
  //   {
  //     if (p.Cruiser[i][j] == 1)
  //     {
  //       printf("%d %d,",i,j);
  //     }//end if
  //   }//end for
  // }//end for
  // printf("\n");
  // fflush(stdout);
  while (true) // while for Destroyer checker
  {
    Randx = (rand()%size);
    Randy = (rand()%size);
    //printf("Rx: %d Ry: %d\n",Randx,Randy);
    fflush(stdout);
    if (Randx+2 > size || Randy+2 > size || Randx-2 < 0 || Randy-2 < 0)
    {
      continue;
    }//end if off board
    RandNum = (rand()%4)+1;
    //printf("RandNum: %d\n",RandNum);
    if (RandNum == 1){
      for (int i = 0; i < 2; i++){
        shipChecker = p.PlayerShipBoard[Randx+i][Randy];
        if (shipChecker == 1){
          break;
        }//end if
      }//end for loop
      if (shipChecker == 1){
        continue;
      }
        for (int i = 0; i < 2; i++)
        {
          p.PlayerShipBoard[Randx+i][Randy] = 1;

          p.Destroyer[Randx+i][Randy] = p.PlayerShipBoard[Randx+i][Randy];
        }//end for place ship
        break;
      }//end if to the right



      if (RandNum == 2)
      {
        for (int i = 0; i < 2; i++)
        {
          shipChecker = p.PlayerShipBoard[Randx-i][Randy];
          if (shipChecker == 1){
          break;
        }//end if
        }//end for loop
      if (shipChecker == 1){
        continue;
      }
        for (int i = 0; i < 2; i++)
        {
          p.PlayerShipBoard[Randx-i][Randy] = 1;
          p.Destroyer[Randx-i][Randy] = p.PlayerShipBoard[Randx-i][Randy];
        }//end for place ship
        break;
      }//end if left



      if (RandNum == 3){
        for (int i = 0; i < 2; i++){
          shipChecker = p.PlayerShipBoard[Randx][Randy+i];
          if (shipChecker == 1){
          break;
        }//end if
        }//end for i
      if (shipChecker == 1){
        continue;
      }
        for (int i = 0; i < 2; i++){
          p.PlayerShipBoard[Randx][Randy+i] = 1;
          p.Destroyer[Randx][Randy+i] = p.PlayerShipBoard[Randx][Randy+i];
        }//end for place ship
        break;
      }//end if down
      if (RandNum == 4){
        for (int i = 0; i < 2; i++){
          shipChecker = p.PlayerShipBoard[Randx][Randy-i];
          if (shipChecker == 1){
          break;
        }//end if
        }//end for i
      if (shipChecker == 1){
        continue;
      }
        for (int i = 0; i < 2; i++){
          p.PlayerShipBoard[Randx][Randy-i] = 1;
          p.Destroyer[Randx][Randy-i] = p.PlayerShipBoard[Randx][Randy-i];
        }//end for place ship
        break;
      }//end if up
    break;
  }//end while
  
  // printf("Destroyer Placed at: ");
  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = 0; j < size; j++)
  //   {
  //     if (p.Destroyer[i][j] == 1)
  //     {
  //       printf("%d %d,",i,j);
  //     }//end if
  //   }//end for
  // }//end for
  // printf("\n");
  // fflush(stdout);
  //sleep(1);
  return p;
}//end Randomly_Place_Ships

Player Manually_Place_Ships(Player p){
  
  char direction;
  int size = p.size;
  int posX,posY;
  PrintShipBoard(p);
  char null[10];
  int shipChecker = 0;

  while(true){/* carrier placement */
  shipChecker = 0;
    FLUSH_STDIN(null);
      printf("Which direction would you like to place your carrier (ship of length 5), up(u), down(d), left(l), or right(r): ");
      scanf("%c",&direction);
      if (direction == 'r')
      {
        puts("Where would you like to put the ship? The placement is the front of the ship.");
        printf("Row: ");
        scanf("%d",&posX);
        printf("Column: ");
        scanf("%d",&posY);
        posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
        if (!(posY+4 > size) || posY > size)
        {
          for (int i = 0;i<5;i++)
          {
            if (p.PlayerShipBoard[posX][posY+i]==1){
              shipChecker = 1;
            }
          }//end for ship checker
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
  
          for (int i = 0; i < 5; i++)
          {
            p.Carrier[posX][posY+i] = 1;
            p.PlayerShipBoard[posX][posY+i] = 1;
          }//end place up
          break;
        }//end if not out of bounds
        else{
          puts("That ship goes off the board, please try again");
          continue;
        }//end ship out of bounds
      }//end if up
      else if(direction == 'l'){
        puts("Where would you like to put the ship? The placement is the front of the ship.");
        printf("Row: ");
        scanf("%d",&posX);
        printf("Column: ");
        scanf("%d",&posY);
        posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
        if (!(posY-4 < 0) || posY < 0)
        {
          for (int i = 0;i<5;i++)
          {
            if (p.PlayerShipBoard[posX][posY-i]==1){
              shipChecker = 1;
            }
          }//end for ship checker
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
          for (int i = 0; i < 5; i++)
          {
            p.Carrier[posX][posY-i] = 1;
            p.PlayerShipBoard[posX][posY-i] = 1;
          }//end place down
          break;
        }//end if not out of bounds
        else{
          puts("That ship goes off the board, please try again");
          continue;
        }//end ship off board
      }
      else if(direction == 'u'){
        puts("Where would you like to put the ship? The placement is the front of the ship.");
        printf("Row: ");
        scanf("%d",&posX);
        printf("Column: ");
        scanf("%d",&posY);
        posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
        if (!(posX-4 < 0) || posX < 0)
        {
          for (int i = 0;i<5;i++)
          {
            if (p.PlayerShipBoard[posX-i][posY]==1){
              shipChecker = 1;
              }
            }//end for ship checker
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
          for (int i = 0; i < 5; i++)
          {
            p.Carrier[posX-i][posY]=1;
            p.PlayerShipBoard[posX-i][posY] = 1;
          }//end place down
          break;
        }//end if not out of bounds
        else{
          puts("That ship goes off the board, please try again");
          continue;
        }//end ship off board
      }
      else if(direction == 'd'){
        puts("Where would you like to put the ship? The placement is the head of the ship.");
        printf("Row: ");
        scanf("%d",&posX);
        printf("Column: ");
        scanf("%d",&posY);
        posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
        if (!(posX+4 > size) || posX > size)
        {
          for (int i = 0;i<5;i++)
          {
            if (p.PlayerShipBoard[posX+i][posY]==1){
              shipChecker = 1;
            }
            }//end for ship checker
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
          for (int i = 0; i < 5; i++)
          {
            p.Carrier[posX+i][posY]=1;
            p.PlayerShipBoard[posX+i][posY] = 1;
          }//end place down
          break;
        }//end if not out of bounds
        else{
          puts("That ship goes off the board, please try again");
          continue;
        }//end ship off board
      }
      else{
        puts("Invalid input, try again.");
        continue;
      }//end wrong input
    }//end while carrier

  while(true){/* battleship placement */
  shipChecker = 0;
  FLUSH_STDIN(null);
  PrintShipBoard(p);
  printf("Which direction would you like to place your Battleship (ship of length 4), up(u), down(d), left(l), or right(r): ");
  scanf("%c",&direction);
  if (direction == 'r')
  {
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf(" %d",&posX);
    printf("Column: ");
    scanf(" %d",&posY);
    posY--;
    posX--;
        if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posY+3 > size) || posY > size)
    {
      
      for (int i = 0;i<4;i++)
          {
            if (p.PlayerShipBoard[posX][posY+i]==1){
              shipChecker = 1;
            }
          }//end for ship checker
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 4; i++)
      {
        p.Battleship[posX][posY+i]=1;
        p.PlayerShipBoard[posX][posY+i] = 1;
      }//end place up
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship out of bounds
  }//end if up
  else if(direction == 'l'){
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
    posX--;
        if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posY-3 < 0) || posY < 0)
    {
      for (int i = 0;i<5;i++)
          {
            if (p.PlayerShipBoard[posX][posY-i]==1){
              shipChecker = 1;
            }
            }//end for ship checker

            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 4; i++)
      {
        p.Battleship[posX][posY-i]=1;
        p.PlayerShipBoard[posX][posY-i] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else if(direction == 'd'){
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posX-3 < 0) || posX < 0)
    {
      for (int i = 0;i<4;i++)
          {
            if (p.PlayerShipBoard[posX+i][posY]==1){
              shipChecker = 1;
            }
          }
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
            
          //end for ship checker
      for (int i = 0; i < 4; i++)
      {
        p.Battleship[posX+i][posY]=1;
        p.PlayerShipBoard[posX+i][posY] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else if(direction == 'u'){
    puts("Where would you like to put the ship? The placement is the head of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
    posX--;
        if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posX+3 > size) || posX > size)
    {
      for (int i = 0;i<5;i++)
          {
            if (p.PlayerShipBoard[posX-i][posY]==1){
              shipChecker = 1;
            }
                      }//end for ship checker

            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            
            }
      for (int i = 0; i < 4; i++)
      {
        p.Battleship[posX-i][posY]=1;
        p.PlayerShipBoard[posX-i][posY] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else{
    puts("Invalid input, try again.");
    continue;
  }//end wrong input
}//end while battleship

  while(true){/* cruiser placement */
  shipChecker = 0;
  FLUSH_STDIN(null);
  PrintShipBoard(p);
  printf("Which direction would you like to place your Cruiser (ship of length 3), up(u), down(d), left(l), or right(r): ");
  scanf("%c",&direction);
  if (direction == 'r')
  {
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
    if (!(posY+2 > size) || posY > size)
    {
      for (int i = 0;i<3;i++)
          {
            if (p.PlayerShipBoard[posX+i][posY]==1){
              shipChecker = 1;
            }
                      }//end for ship checker

            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
            

      for (int i = 0; i < 3; i++)
      {
        p.Cruiser[posX][posY+i]=1;
        p.PlayerShipBoard[posX][posY+i] = 1;
      }//end place up
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship out of bounds
  }//end if up
  else if(direction == 'l'){
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posY-2 < 0) || posY < 0)
    {
      for (int i = 0;i<3;i++)
          {
            if (p.PlayerShipBoard[posX+i][posY]==1){
              shipChecker = 1;
            }
                      }//end for ship checker

            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
            

      for (int i = 0; i < 3; i++)
      {
        p.Cruiser[posX][posY-i]=1;
        p.PlayerShipBoard[posX][posY-i] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else if(direction == 'u'){
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
    if (!(posX-2 < 0) || posX < 0)
    {
      for (int i = 0;i<3;i++)
          {
            if (p.PlayerShipBoard[posX-i][posY]==1){
              shipChecker = 1;
                        }//end for ship checker

            }
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 3; i++)
      {
        p.Cruiser[posX-i][posY]=1;
        p.PlayerShipBoard[posX-i][posY] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else if(direction == 'd'){
    puts("Where would you like to put the ship? The placement is the head of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posX+2 > size) || posX > size)
    {
      for (int i = 0;i<3;i++)
          {
            if (p.PlayerShipBoard[posX+i][posY]==1){
              shipChecker = 1;
            }
          }//end for ship checker

            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 3; i++)
      {
        p.Cruiser[posX+i][posY]=1;
        p.PlayerShipBoard[posX+i][posY] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else{
    puts("Invalid input, try again.");
    continue;
  }//end wrong input
}//end while cruiser

  while(true){/* submarine placement */
  shipChecker = 0;
  FLUSH_STDIN(null);
  PrintShipBoard(p);
  printf("Which direction would you like to place your submarine (ship of length 3), up(u), down(d), left(l), or right(r): ");
  scanf("%c",&direction);
  if (direction == 'r')
  {
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posY+2 > size) || posY > size)
    {
      for (int i = 0;i<3;i++)
          {
            if (p.PlayerShipBoard[posX][posY+i]==1){
              shipChecker = 1;
            }
          }//end for ship checker
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 3; i++)
      {
        p.Submarine[posX][posY+i]=1;
        p.PlayerShipBoard[posX][posY+i] = 1;
      }//end place up
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship out of bounds
  }//end if up
  else if(direction == 'l'){
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
  if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posY-2 < 0) || posY < 0)
    {
      for (int i = 0;i<3;i++)
          {
            if (p.PlayerShipBoard[posX][posY-i]==1){
              shipChecker = 1;
            }
          }//end for ship checker
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 3; i++)
      {
        p.Submarine[posX][posY-i] = 1;
        p.PlayerShipBoard[posX][posY-i] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else if(direction == 'u'){
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posX-2 < 0) || posX < 0)
    {
      for (int i = 0;i<3;i++)
          {
            if (p.PlayerShipBoard[posX-i][posY]==1){
              shipChecker = 1;
            }
          }//end for ship checker
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 3; i++)
      {
        p.Submarine[posX-i][posY] = 1;
        p.PlayerShipBoard[posX-i][posY] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else if(direction == 'd'){
    puts("Where would you like to put the ship? The placement is the head of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posX+3 > size) || posX > size)
    {
      for (int i = 0;i<3;i++)
          {
            if (p.PlayerShipBoard[posX+i][posY]==1){
              shipChecker = 1;
            }
          }//end for ship checker

            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 3; i++)
      {
        p.Submarine[posX+i][posY] = 1;
        p.PlayerShipBoard[posX+i][posY] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else{
    puts("Invalid input, try again.");
    continue;
  }//end wrong input
}//end while submarine

  while(true){/* destroyer placement */
  shipChecker = 0;
  FLUSH_STDIN(null);
  PrintShipBoard(p);
  printf("Which direction would you like to place your destroyer (ship of length 2), up(u), down(d), left(l), or right(r): ");
  scanf("%c",&direction);
  if (direction == 'r')
  {
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posY+1 > size) || posY > size)
    {
      for (int i = 0;i<2;i++)
          {
            if (p.PlayerShipBoard[posX][posY+i]==1){
             shipChecker = 1; 
            }
          }//end for ship checker
          if (shipChecker == 1)
          {
            puts("That ship overlaps another one, please try again.");
              continue;
          }
      for (int i = 0; i < 2; i++)
      {
        p.Destroyer[posX][posY+i] = 1;
        p.PlayerShipBoard[posX][posY+i] = 1;
      }//end place up
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship out of bounds
  }//end if up
  else if(direction == 'l'){
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posY-1 < 0) || posY < 0)
    {
      for (int i = 0;i<2;i++)
          {
            if (p.PlayerShipBoard[posX][posY-i]==1){
              shipChecker = 1;
              }
          }//end for ship checker
          if (shipChecker = 1)
          {
            puts("That ship overlaps another one, please try again.");
              continue;
          }
      for (int i = 0; i < 2; i++)
      {
        p.Destroyer[posX][posY-i] = 1;
        p.PlayerShipBoard[posX][posY-i] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else if(direction == 'u'){
    puts("Where would you like to put the ship? The placement is the front of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posX-1 < 0) || posX < 0)
    {
      for (int i = 0;i<2;i++)
          {
            if (p.PlayerShipBoard[posX-i][posY]==1){
              shipChecker = 1;
            }
          }//end for ship checker

            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 2; i++)
      {
        p.Destroyer[posX-i][posY] = 1;
        p.PlayerShipBoard[posX-i][posY] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else if(direction == 'd'){
    puts("Where would you like to put the ship? The placement is the head of the ship.");
    printf("Row: ");
    scanf("%d",&posX);
    printf("Column: ");
    scanf("%d",&posY);
    posY--;
        posX--;
            if (posX < 0 || posY < 0 || posY > size || posX > size)
    {
      puts("That ship goes off the board, please try again");
      continue;
    }
    if (!(posX+1 > size) || posX > size)
    {
      for (int i = 0;i<2;i++)
          {
            if (p.PlayerShipBoard[posX+i][posY]==1){
              shipChecker = 1;
            }
          }//end for ship checker
            if (shipChecker == 1)
            {
              puts("That ship overlaps another one, please try again.");
              continue;
            }
      for (int i = 0; i < 2; i++)
      {
        p.Destroyer[posX+i][posY]=1;
        p.PlayerShipBoard[posX+i][posY] = 1;
      }//end place down
      break;
    }//end if not out of bounds
    else{
      puts("That ship goes off the board, please try again");
      continue;
    }//end ship off board
  }
  else{
    puts("Invalid input, try again.");
    continue;
  }//end wrong input
}//end while destroyer
  PrintShipBoard(p);
  // printf("Invalid ship option, please try again.");
}//end Manually Placed Ships

int main(){
  srand(time(NULL));
  int numPlayers = titleScreen();
  Player *playerArray = NewGame(numPlayers);
  fflush(stdout);
  int startNum = coinFlip();
  // printf("2 Ai\n");
  fflush(stdout);
  /*
  We need to get the number of players from somewhere on the title screen
  For now its 0 for play testing
  */

 if (numPlayers == 4){
 char placement,null[10];
  FLUSH_STDIN(null);
  Player p1 = playerArray[0];
  Player p2 = playerArray[1];
  p1.gamemode = 2;
  p2.gamemode = 2;
  do{
  printf("Do you want to randomly(r) or manually(m) place your ships %s?\n",p1.Name);
  scanf("%c",&placement);
  if (placement == 'r')
  {
    p1 = Randomly_Place_Ships(playerArray[0]);
    break;
  }//end if 
  else if(placement == 'm'){
    p1 = Manually_Place_Ships(playerArray[0]);
    break;
  }//end if manual
  else{
    puts("Please enter an 'r' for random or an 'm' for manual");
    continue;
    }//end incorrect input
  }while(true);
  FLUSH_STDIN(null);
  do{
  printf("Do you want to randomly(r) or manually(m) place your ships %s?\n",p2.Name);
  scanf("%c",&placement);
  if (placement == 'r')
  {
    p2 = Randomly_Place_Ships(playerArray[1]);
    break;
  }//end if 
  else if(placement == 'm'){
    p2 = Manually_Place_Ships(playerArray[1]);
    break;
  }//end if manual
  else{
    puts("Please enter an 'r' for random or an 'm' for manual");
    continue;
    }//end incorrect input
  }while(true);
  if (startNum == 1)
  {
    while (true){
      fflush(stdout);
      PrintBoard(p1);   
      p1 = AttackChoice(p1,p2);
      fflush(stdout);
      if (p1.hitCount == 17 || p1.shotCount >= (p1.size*p1.size))
      {
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("Hit count: %d\n",p1.hitCount);
        printf("Shot count: %d\n",p1.shotCount);
        printf("%s Wins!\n\n",p1.Name);
        break;
      }//end if p1 wins
      
      // printf("P2 hitCount: %d\n",p2.hitCount);
      PrintBoard(p2);
      fflush(stdout);
      p2 = AttackChoice(p2,p1);
      fflush(stdout);
      if (p2.hitCount == 17 || p2.shotCount >= (p2.size*p2.size))
      {
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Hit count: %d\n",p2.hitCount);
        printf("Shot count: %d\n",p2.shotCount);
        // Malware_exe_word_bank(p2,p1);
        printf("%s Wins!\n\n",p2.Name);
        break;
      }//end if p2 wins
    }//end while
  }//end if p1 goes first
  else{
    while (true){
    PrintTargetBoard(p1);
    PrintBoard(p2);
    fflush(stdout);
    p2 = AttackChoice(p2,p1);
    fflush(stdout);
    if (p2.hitCount == 17 || p2.shotCount >= (p2.size*p2.size))
    {
      printf("Player 2: \n");
      PrintBoard(p2);
      printf("Player 1: \n");
      PrintBoard(p1);
      printf("Hit count: %d\n",p2.hitCount);
      printf("Shot count: %d\n",p2.shotCount);
      printf("%s Wins!\n\n",p2.Name);
      break;
    }//end if p2 wins
    
    // printf("P2 hitCount: %d\n",p2.hitCount);
    PrintTargetBoard(p2);
    PrintBoard(p1);
    fflush(stdout);
    p1 = AttackChoice(p1,p2);
    fflush(stdout);
    if (p1.hitCount == 17 || p1.shotCount >= (p1.size*p1.size))
    {
      printf("Player 1: \n");
      PrintBoard(p1);
      printf("Player 2: \n");
      PrintBoard(p2);
      printf("Hit count: %d\n",p1.hitCount);
      printf("Shot count: %d\n",p1.shotCount);
      printf("%s Wins!\n\n",p1.Name);
      break;
    }//end if p1 wins
  }//end while
 }//end player 2 goes first
 }//end numPlayers == 4 salvo mode

 if (numPlayers == 3)
 {  
  Player p1;
  Player p2;
  char *savefilename,line[1024];
  FILE *inFile;
  savefilename = malloc(sizeof(char)*30);
  printf ("Please input the name of your save file. Please input it as filename.csv: ");
  scanf ("%s", savefilename);
  inFile = fopen (savefilename, "r");
  if(inFile == NULL){
    printf("File not found under entered name. Enter a valid file name: ");
  }//end if fill is null
  else{
    const char s[2] = ";";
    char commaCheck, allocation[20];
    char *tok;
    char *tik;
    char *temp;
    int size = 0;
    int len = 0;
    fgets(line,1024,inFile);
    tok = strtok(line,s);
    // puts("Tokenized");
    // puts(tok);
    temp = malloc(sizeof(char)*strlen(tok));
    strcpy(temp,tok);
    tik = strtok(tok,",");
    len = strlen(tik);
    strcpy(tok,temp);
    // free(temp);
    printf("token: %s\n",tok);
    size = atoi(tik);
    printf("len: %d\n",strlen(tok));
    char **Names;
    char *Name;
    Name = malloc(sizeof(char)*30);
    Names = malloc(sizeof(char*)*3);
    fseek(inFile,0, SEEK_SET);
    fread(allocation,strlen(tok)-1,1,inFile);
    printf("%s\n",allocation);
    sscanf(allocation,"%d,%c,%d,%d,%d,%c,%d,%d,%d,%s",&size,&p1.playerType,&p1.hitCount,&p1.shotCount,&p1.missCount,&p2.playerType,&p2.hitCount,&p2.shotCount,&p2.missCount,Name);
    puts("Objects saved.");
    fflush(stdout);
    printf("Name: %s\n",Name);
    printf("size: %d\n",size);
    Names = namesplit(Name);
    p1.size = size;
    p2.size = size;
    // printf("Name1: %s\n",Names[0]);
    // printf("name2: %s\n",Names[1]);
    p1.Name = malloc(sizeof(char)*strlen(Names[0]));
    p2.Name = malloc(sizeof(char)*strlen(Names[1]));
    strcpy(p1.Name,Names[0]);
    strcpy(p2.Name,Names[1]);
    p1 = CreateLoadBoard(p1);
    puts("p1 loaded");
    p2 = CreateLoadBoard(p2);
    puts("p2 loaded");
    fseek(inFile,strlen(tok)+1,SEEK_SET);
    char *charCheck;
    charCheck = malloc(sizeof(char)*3);
    fgets(line,1024,inFile);
    // printf("Should be: %s\n",line);
    fflush(stdout);
    int k;
    int array1[size][size];
    for (int i = 0; i < size; i++)
    {
      k = 0;
      fgets(line,1024,inFile);
      tok = strtok(line,";");
      for (int j = 0; j < strlen(tok); j++)
      {
        if (tok[j] == ',')
        {
          continue;
        }//end if
        else{
          charCheck[0] = tok[j];
          array1[i][k] = atoi(charCheck);
          // printf("%d ",array1[i][k]);
          k++;
        }
      }//end for j
      // printf("\n");
    }//end for i

    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size; j++)
      {
        p1.PlayerShipBoard[i][j] = array1[i][j];
      }//end for i
    }//end for j
    

    int array2[size][size];
    for (int i = 0; i < size; i++)
    {
      k = 0;
      fgets(line,1024,inFile);
      tok = strtok(line,";");
      // printf("i: %d\n",i);
      // printf("tok: %s\n",tok);
      // printf("      ");
      for (int j = 0; j < strlen(tok); j++){
        if (tok[j] == ',' || tok[j] == ';')
        {
          continue;
        }
        else{
          charCheck[0] = tok[j];
          charCheck[1] = '\0';
          // printf("%c",charCheck[0]);
          // printf("%d",atoi(charCheck));
          array2[i][k] = atoi(charCheck);
          // printf("%d ",array2[i][k]);
          k++;
        }
      }
      // printf("\n");
    }//end for i

    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size; j++)
      {
        p1.PlayerTargetBoard[i][j] = array2[i][j];  
      }
    }
    
    // PrintBoard(p1);

  int array3[size][size];
  for (int i = 0; i < size; i++)
    {
      k = 0;
      fgets(line,1024,inFile);
      tok = strtok(line,";");
      // printf("i: %d\n",i);
      // printf("tok: %s\n",tok);
      // printf("      ");
      for (int j = 0; j < strlen(tok); j++){
        if (tok[j] == ',' || tok[j] == ';')
        {
          continue;
        }
        else{
          charCheck[0] = tok[j];
          charCheck[1] = '\0';
          // printf("%c",charCheck[0]);
          // printf("%d",atoi(charCheck));
          array3[i][k] = atoi(charCheck);
          // printf("%d ",array2[i][k]);
          k++;
        }
      }
      // printf("\n");
    }//end for i

    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size; j++)
      {
        p2.PlayerShipBoard[i][j] = array3[i][j];  
      }
    }

    int array4[size][size];
    for (int i = 0; i < size; i++)
    {
      k = 0;
      fgets(line,1024,inFile);
      tok = strtok(line,";");
      // printf("i: %d\n",i);
      // printf("tok: %s\n",tok);
      // printf("      ");
      for (int j = 0; j < strlen(tok); j++){
        if (tok[j] == ',' || tok[j] == ';')
        {
          continue;
        }
        else{
          charCheck[0] = tok[j];
          charCheck[1] = '\0';
          // printf("%c",charCheck[0]);
          // printf("%d",atoi(charCheck));
          array4[i][k] = atoi(charCheck);
          // printf("%d ",array2[i][k]);
          k++;
        }
      }
      // printf("\n");
    }//end for i

    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size; j++)
      {
        p2.PlayerTargetBoard[i][j] = array4[i][j];  
      }
    }

    // PrintBoard(p2);
    fclose(inFile);
    fflush(stdout);
    // Quit(p1,p2);
  }//end else

  while (true)
  {
    PrintBoard(p1);
    p1 = AttackChoice(p1,p2);
    if (p1.hitCount == 17 || p1.shotCount >= (p1.size*p1.size))
      {
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("Hit count: %d\n",p1.hitCount);
        printf("Shot count: %d\n",p1.shotCount);
        printf("%s Wins!\n\n",p1.Name);
        break;
      }//end if p1 wins
      PrintBoard(p2);
      p2 = AttackChoice(p2,p1);
      fflush(stdout);
      if (p2.hitCount == 17 || p2.shotCount >= (p2.size*p2.size))
      {
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Hit count: %d\n",p2.hitCount);
        printf("Shot count: %d\n",p2.shotCount);
        printf("%s Wins!\n\n",p2.Name);
        break;
      }//end if p2 wins
  }//end while
  
  
  return 0;
}//end numPlayers == 3 which means to load



  // PrintBoard(playerArray[0]);
  // PrintBoard(playerArray[1]);
  
 if(numPlayers == 0){
  Player p1 = playerArray[0];
  Player p2 = playerArray[1];
  p1 = Randomly_Place_Ships(playerArray[0]);
  p2 = Randomly_Place_Ships(playerArray[1]); 
  if (startNum == 1)
  {
    while (true){
      // PrintBoard(p1);   
      // Malware_exe_word_bank(p1,p2);
      printf("%d\n",p1.shotCount);
      fflush(stdout);
      p1 = AttackChoice(p1,p2);
      fflush(stdout);
      if (p1.hitCount >= 17)
      {
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("Hit count: %d\n",p1.hitCount);
        printf("Shot count: %d\n",p1.shotCount);
        printf("%s Wins!\n\n",p1.Name);
        break;
      }//end if p1 wins
      
      // printf("P2 hitCount: %d\n",p2.hitCount);
      // PrintBoard(p2);
      fflush(stdout);
      p2 = AttackChoice(p2,p1);
      fflush(stdout);
      printf("%d\n",p2.shotCount);
      if (p2.hitCount >= 17)
      {
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Hit count: %d\n",p2.hitCount);
        printf("Shot count: %d\n",p2.shotCount);
        printf("%s Wins!\n\n",p2.Name);
        break;
      }//end if p2 wins
    }//end while
  }//end if p1 goes first
  else{
    while (true){
    // PrintBoard(p1);
    // Malware_exe_word_bank(p1,p2);
    printf("%d\n",p2.shotCount);
    fflush(stdout);
    p2 = AttackChoice(p2,p1);
    fflush(stdout);
    if (p2.hitCount >= 17)
    {
      printf("Player 2: \n");
      PrintBoard(p2);
      printf("Player 1: \n");
      PrintBoard(p1);
      printf("Hit count: %d\n",p2.hitCount);
      printf("Shot count: %d\n",p2.shotCount);
      printf("%s Wins!\n\n",p2.Name);
      break;
    }//end if p2 wins
    
    // printf("P2 hitCount: %d\n",p2.hitCount);
    // PrintBoard(p2);
    fflush(stdout);
    p1 = AttackChoice(p1,p2);
    fflush(stdout);
    printf("%d\n",p1.shotCount);
    if (p1.hitCount >= 17)
    {
      printf("Player 1: \n");
      PrintBoard(p1);
      printf("Player 2: \n");
      PrintBoard(p2);
      printf("Hit count: %d\n",p1.hitCount);
      printf("Shot count: %d\n",p1.shotCount);
      printf("%s Wins!\n\n",p1.Name);
      break;
    }//end if p1 wins
  }//end while
}//end player 2 goes first
  
  
   
}//end if numPlayer == 0
 

 else if (numPlayers == 1)
 {
  char placement,null[10];
  FLUSH_STDIN(null);
  Player p1 = playerArray[0];
  Player p2 = playerArray[1];
  puts(p1.Name);
  do{
  puts("Do you want to randomly(r) or manually(m) place your ships?");
  scanf("%c",&placement);
  if (placement == 'r')
  {
    p1 = Randomly_Place_Ships(playerArray[0]);
    break;
  }//end if 
  else if(placement == 'm'){
    p1 = Manually_Place_Ships(playerArray[0]);
    break;
  }
  else{
    puts("Please enter an 'r' for random or an 'm' for manual");
    continue;
  }
  FLUSH_STDIN(null);
  }while(true);
  p2 = Randomly_Place_Ships(playerArray[1]); 
  if (p2.playerType == 'c')
  {
    do{/* start do while */
    p2 = AttackChoice(p2,p1);
    puts(p2.Name);
    // printf("%d\n",p2.hitCount);
      if (p2.hitCount == 17)
      {
        Malware_exe_word_bank(p1,p2);
        break;
      }
    puts(p1.Name);
    PrintTargetBoard(p2);
    PrintBoard(p1);
    p1 = AttackChoice(p1,p2);
      if (p1.hitCount == 17)
      {
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("%s Wins!\n\n",p1.Name);
        break;
      }
      // p1.hitCount = 14;
    }while(true);//end do while
  }//end if cheater AI
  else{
  startNum = coinFlip();
  if (startNum == 1)
  {
    while (true){
      PrintBoard(p1);   
      fflush(stdout);
      PrintTargetBoard(p2);
      p1 = AttackChoice(p1,p2);
      fflush(stdout);
      if (p1.hitCount == 17 || p1.shotCount >= (p1.size*p1.size))
      {
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Player 2: \n");
        PrintBoard(p2);
        // printf("Hit count: %d\n",p1.hitCount);
        // printf("Shot count: %d\n",p1.shotCount);
        printf("%s Wins!\n\n",p1.Name);
        break;
      }//end if p1 wins
      
      // printf("P2 hitCount: %d\n",p2.hitCount);
      //PrintBoard(p2);
      fflush(stdout);
      p2 = AttackChoice(p2,p1);
      fflush(stdout);
      if (p2.hitCount == 17 || p2.shotCount >= (p2.size*p2.size))
      {
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Hit count: %d\n",p2.hitCount);
        printf("Shot count: %d\n",p2.shotCount);
        Malware_exe_word_bank(p2,p1);
        printf("%s Wins!\n\n",p2.Name);
        break;
      }//end if p2 wins
    }//end while
  }//end if p1 goes first
  else{
    while (true){
    //PrintBoard(p2);
    fflush(stdout);
    p2 = AttackChoice(p2,p1);
    fflush(stdout);
    if (p2.hitCount == 17 || p2.shotCount >= (p2.size*p2.size))
    {
      printf("Player 2: \n");
      PrintBoard(p2);
      printf("Player 1: \n");
      PrintBoard(p1);
      printf("Hit count: %d\n",p2.hitCount);
      printf("Shot count: %d\n",p2.shotCount);
      Malware_exe_word_bank(p1,p2);
      printf("%s Wins!\n\n",p2.Name);
      break;
    }//end if p2 wins
    
    // printf("P2 hitCount: %d\n",p2.hitCount);
    PrintTargetBoard(p2);
    PrintBoard(p1);
    fflush(stdout);
    p1 = AttackChoice(p1,p2);
    fflush(stdout);
    if (p1.hitCount == 17 || p1.shotCount >= (p1.size*p1.size))
    {
      printf("Player 1: \n");
      PrintBoard(p1);
      printf("Player 2: \n");
      PrintBoard(p2);
      printf("Hit count: %d\n",p1.hitCount);
      printf("Shot count: %d\n",p1.shotCount);
      Malware_exe_word_bank(p1,p2);
      printf("%s Wins!\n\n",p1.Name);
      break;
    }//end if p1 wins
  }//end while
 }//end player 2 goes first
 }//end numPlayers == 1
 }//end else

else if (numPlayers == 2)
 {
  char placement,null[10];
  FLUSH_STDIN(null);
  Player p1 = playerArray[0];
  Player p2 = playerArray[1];
  p1.gamemode = 1;
  p2.gamemode = 1;
  do{
  printf("Do you want to randomly(r) or manually(m) place your ships %s?\n",p1.Name);
  scanf("%c",&placement);
  if (placement == 'r')
  {
    p1 = Randomly_Place_Ships(playerArray[0]);
    break;
  }//end if 
  else if(placement == 'm'){
    p1 = Manually_Place_Ships(playerArray[0]);
    break;
  }//end if manual
  else{
    puts("Please enter an 'r' for random or an 'm' for manual");
    continue;
    }//end incorrect input
  }while(true);
  FLUSH_STDIN(null);
  do{
  printf("Do you want to randomly(r) or manually(m) place your ships %s?\n",p2.Name);
  scanf("%c",&placement);
  if (placement == 'r')
  {
    p2 = Randomly_Place_Ships(playerArray[1]);
    break;
  }//end if 
  else if(placement == 'm'){
    p2 = Manually_Place_Ships(playerArray[1]);
    break;
  }//end if manual
  else{
    puts("Please enter an 'r' for random or an 'm' for manual");
    continue;
    }//end incorrect input
  }while(true);

  if (startNum == 1)
  {
    while (true){
      fflush(stdout);
      PrintTargetBoard(p2);
      PrintBoard(p1);   
      p1 = AttackChoice(p1,p2);
      fflush(stdout);
      if (p1.hitCount == 17 || p1.shotCount >= (p1.size*p1.size))
      {
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("Hit count: %d\n",p1.hitCount);
        printf("Shot count: %d\n",p1.shotCount);
        printf("%s Wins!\n\n",p1.Name);
        break;
      }//end if p1 wins
      
      // printf("P2 hitCount: %d\n",p2.hitCount);
      PrintTargetBoard(p1);
      PrintBoard(p2);
      fflush(stdout);
      p2 = AttackChoice(p2,p1);
      fflush(stdout);
      if (p2.hitCount == 17 || p2.shotCount >= (p2.size*p2.size))
      {
        printf("Player 2: \n");
        PrintBoard(p2);
        printf("Player 1: \n");
        PrintBoard(p1);
        printf("Hit count: %d\n",p2.hitCount);
        printf("Shot count: %d\n",p2.shotCount);
        // Malware_exe_word_bank(p2,p1);
        printf("%s Wins!\n\n",p2.Name);
        break;
      }//end if p2 wins
    }//end while
  }//end if p1 goes first
  else{
    while (true){
    PrintTargetBoard(p1);
    PrintBoard(p2);
    fflush(stdout);
    p2 = AttackChoice(p2,p1);
    fflush(stdout);
    if (p2.hitCount == 17 || p2.shotCount >= (p2.size*p2.size))
    {
      printf("Player 2: \n");
      PrintBoard(p2);
      printf("Player 1: \n");
      PrintBoard(p1);
      printf("Hit count: %d\n",p2.hitCount);
      printf("Shot count: %d\n",p2.shotCount);
      printf("%s Wins!\n\n",p2.Name);
      break;
    }//end if p2 wins
    
    // printf("P2 hitCount: %d\n",p2.hitCount);
    PrintTargetBoard(p2);
    PrintBoard(p1);
    fflush(stdout);
    p1 = AttackChoice(p1,p2);
    fflush(stdout);
    if (p1.hitCount == 17 || p1.shotCount >= (p1.size*p1.size))
    {
      printf("Player 1: \n");
      PrintBoard(p1);
      printf("Player 2: \n");
      PrintBoard(p2);
      printf("Hit count: %d\n",p1.hitCount);
      printf("Shot count: %d\n",p1.shotCount);
      printf("%s Wins!\n\n",p1.Name);
      break;
    }//end if p1 wins
  }//end while
 }//end player 2 goes first
 }//end numPlayers == 1
  Quit(playerArray[0],playerArray[1]);
}//end main



void Malware_exe_word_bank(Player AI, Player p){
  puts("Cheater Attack");
  printf("%d",AI.shotCount);
  printf("%d",AI.hitCount);
  fflush(stdout);

  int size = AI.size;
  int i;
  
  /* win */
  char winningbank1[]= "pog.";
  char winningbank2[] = "That was mega oof of you.";
  char winningbank3[] = "Yikes. I've never played against someone so bad.";
  char winningbank4[] = "Nerd. You just got owned, loser!";
  
  /* miss */
  char missbankAI1[] = "Boring!";
  char missbankAI2[] = "*YAWN* I'm just making the game more interesting";
  char missbankAI3[] = "I can't wait to go home and tell your mom how much you sucked at this."; 
  char missbankAI4[] = "Oh no! I MiSsEd. :'(  Just kidding, lol. I missed, but i'm doing it on purpose. You get it? Do you? Because you suck. It's because you're really bad.";
  
  /* smacktalk */
  char chatBank[15][150] = {
  "You know who else takes shots like that? ( ͡° ͜ʖ ͡°).. my mom",
  "Are you ready to quit yet?",
  "Time to die.",
  "You fool!",
  "You sure you want to aim there? ",
  "Imagine thinking you're smart. No signs of intelligent life here.",
  "You look like the kinda guy who eats crayons.",
  "Were you ant in a past life?",
  "Are you a weeb? I bet you're a weeb.",
  "Your dad smells of elderberries and your mother is a hamster.",
  "I bet you don't even like Monty Python.",
  "If you're of legal age, this is embarassing for you.",
  "You look like the kind of person who can't swim.",
  "I bet you're single and lonely." 
  };
  if (AI.hitCount == 17){
    int Randnum_win = (rand() % 4) + 1;
    printf("%d\n",Randnum_win);
    if (Randnum_win == 1){
      printf("%s\n", winningbank1);
    }
    if (Randnum_win == 2){
      printf("%s\n", winningbank2);
    }
    if (Randnum_win == 3){
      printf("%s\n", winningbank3);
    }
    if (Randnum_win == 4){
      printf("%s\n", winningbank4);
    }
    return; 
  }//end if win
  else if(AI.hitCount == 14 && AI.hitCount != 17){
    int randNum_miss = (rand() % 4) + 1; 
    int Randx = 0;
    int Randy = 0;
    if(randNum_miss == 1){
      printf("%s\n", missbankAI1);
    }
    if(randNum_miss == 2){
      printf("%s\n", missbankAI2);
    }
    if(randNum_miss == 3){
      printf("%s\n", missbankAI3);
    }
    if(randNum_miss == 4){
      printf("%s\n", missbankAI4);
      // sleep(1);
      // printf("...\n");
      // sleep(2);
      printf("You know what? Because i'm so good, I'm going to tell you where one of my ships are.\n");
      printf("Try hitting: ");
      int coords_x, coords_y, shipShown;
      shipShown = 0;
      for (i = 0; i < size; i++)
      {
        if (shipShown == 1)
        {
          break;
        }
        for (int j = 0; j < size; j++)
        {
          if (AI.PlayerShipBoard[i][j] == 1 && p.PlayerTargetBoard[i][j] == 0)
          {
            printf("(%d, %d) ",i,j);
            shipShown++;
          }//end if ship not hit
        }//end for j
        if (shipShown > 0)
        {
          break;
        }
      }//end for i
    printf("loser.\n");
    }//end if
  }//end if miss condition
  

  else if(AI.hitCount <= 14){
    int randNum_miss = (rand() % 13) + 1; 
    printf("%d",randNum_miss);
    fflush(stdout);
    printf("%s\n",chatBank[randNum_miss]);
  }//end smacktalk


}//end malware.exe


void create_marks_csv(Player p1, Player p2){
  char null[10],*filename;
  FLUSH_STDIN(null);
  filename = malloc(sizeof(char)*30);
  printf("Please input the file name: ");
  scanf("%s",filename);
  printf("\n Saving game as %s.csv file.",filename);
  
  FILE *fp;
  
  int i,j,size;
  size = p1.size;
  filename=strcat(filename,".csv");
  
  fp=fopen(filename,"w+");
  fprintf(fp,"%d", size);

  //fprintf(fp,"Shipboardp1, Target boardp1, Name1, playertype1, Hitcount1, Shotcount1, Miss Count1, shipboard1, targetboard2, name2, playertype2, Hitcount2, Shotcount2, Miss Count2, size");
  fprintf(fp,",%c",p1.playerType);
  fprintf(fp,",%d", p1.hitCount);
  fprintf(fp,",%d", p1.shotCount);
  fprintf(fp,",%d", p1.missCount);
  fprintf(fp,",%c", p2.playerType);  
  fprintf(fp,",%d", p2.hitCount);
  fprintf(fp,",%d", p2.shotCount);
  fprintf(fp,",%d", p2.missCount);
  fprintf(fp,",%s", p1.Name);
  fprintf(fp,",%s", p2.Name);

puts("Saving Boards");
for(i=0;i<size;i++){
  fprintf(fp,",;\n");
    for(j=0;j<size;j++){
        fprintf(fp,",%d",p1.PlayerShipBoard[i][j]);
      }//end for j
    }//end for i
    for(i=0;i<size;i++){
      fprintf(fp,",;\n");
      for(j=0;j<size;j++){
        fprintf(fp,",%d",p1.PlayerTargetBoard[i][j]);
      }//end for j
    }//end for i
    for(i=0;i<size;i++){
      fprintf(fp,",;\n");
    for(j=0;j<size;j++){
        fprintf(fp,",%d",p2.PlayerShipBoard[i][j]);
        }//end for j
    }//end for i
    for(i=0;i<size;i++){
      fprintf(fp, ",;\n");
      for(j=0;j<size;j++){
        fprintf(fp,",%d",p2.PlayerTargetBoard[i][j]);
      }//end for j
    }//end for i
    
 
    
 
    fclose(fp);

 
  printf("\n %sfile created",filename);
  free(filename);
}//end save

char** namesplit(char* names){
  //Ryan,Emily
  int i;
  int j;
  int k = 0;
  for (i = 0; i < strlen(names); i++)
  {
    if (names[i] == ',')
    {
      break;
    }//end if comma
  }//end for i
  printf("i: %d\n",i);
  char *name1,*name2,**nameArray;
  name1 = malloc(sizeof(char)*i+1);
  name2 = malloc(sizeof(char)*(strlen(names)-i+1));
  nameArray = malloc(sizeof(char*)*3);
  //i should be 4
  for (j = 0; j < i; j++)
  {
    name1[j] = names[j];
  }//j should be 4
  printf("j: %d\n",j);
  for (j = j; j < strlen(names); j++)
  {
    name2[k++] = names[j+1];
  }
  nameArray[0] = name1;
  nameArray[1] = name2;
  return nameArray;
}//end namesplit

Player SalvoPlayerAttack(Player p1, Player p2){ /* *********** */
  char (*string),x[5],y[5],*xP,*yP;
  string = malloc(sizeof(char)*10);
  xP = malloc(sizeof(char)*5);
  yP = malloc(sizeof(char)*5);
  int size = p1.size;
  int i = 0;
  int j = 0;
  int missCount = 0;
  int hitCount = 0;
  int xi;
  int yi;
  PrintTargetBoard(p1);
  puts("Different numbers show up on your target board on your next turn depending on how close you are to a ship.");
  puts("A 4 is 1 tile off in any direction and a 5 is 2 tiles off in any direction.");
  puts("A 2 if you hit a ship directly, and a 3 is if there is no ship within 3 or more tiles.");
  puts("If you want to save now, input s , q");
  if(atoi(xP) == 0 || atoi(yP) == 0){
    if(*y == 's' && *x == 'q'){
      create_marks_csv(p1,p2);
      Quit(p1,p2);
    }//end make sure right input
  }//end if s/q
    do{
      FLUSH_STDIN(string);
      // printf("Hit: %d Miss: %d\n",hitCount,missCount);
        printf("Please enter your target cells in x , y format exactly (i.e (2 , 3) as a reminder the size is a %dx%d: \n",size,size);
        fflush(stdout);
        scanf("%[^\n]",string);
        printf("String: %s\n",string);
        sscanf(string, "%s , %s", y, x);
        // printf("Characters: x:%c y:%c\n",x,y);
        strcpy(xP,x);
        strcpy(yP,y);
        // printf("Atoi values: %d %d\n",atoi(xP),atoi(yP));
        fflush(stdout); 
        xi = atoi(xP)-1;
        yi = atoi(yP)-1;
        if (xi >= size || yi >= size || xi < 0 || yi < 0)
        {
            printf("Invalid input, please try again\n");
            continue;
        }//end if input is out of range
            if(p1.PlayerTargetBoard[xi][yi] == 3 || p1.PlayerTargetBoard[xi][yi] == 2){
              printf("You have already shot that square, please try again.\n");
              continue;
            }//end if hit or miss already
            if(p2.PlayerShipBoard[xi][yi] == 1){
              p1.PlayerTargetBoard[xi][yi] = 2;
              hitCount++;
              continue;
            }//end if
            i = 0;
            if(xi+2>=size || xi-2<0){
              while(xi+2<size){
                if (i == 2)
                {
                  break;
                }
                if(p2.PlayerShipBoard[xi+i][yi] == 1){
                  p1.PlayerTargetBoard[xi+i][yi] = 4;
                  missCount++;
                  break;
                }//end if ship 
                i++;
              }//end while
            }
            if (xi-2<0)
            {
              while(xi-2>0){
                if(p2.PlayerShipBoard[xi-i][yi] == 1){
                  p1.PlayerTargetBoard[xi-i][yi] = 4;
                  missCount++;
                  break;
                }//end if ship
              }//end while
              i++;
            }//end if x out of bounds
              i = 0;
              if(yi+2 >= size || yi - 2 < 0){
                while(yi+2<size){
                  if (i == 2)
                  {
                    break;
                  }
                  if(p2.PlayerShipBoard[xi][yi+i] == 1){
                    p1.PlayerTargetBoard[xi][yi+i] = 4;
                    missCount++;
                    break;
                  }//end if ship 
                  i++;
                }//end while
            i = 0;
            if (yi-2<0)
            {
              while(yi-2>0){
                if (i == 2)
                {
                  break;
                }
                
                if(p2.PlayerShipBoard[xi][yi-i] == 1){
                  p1.PlayerTargetBoard[xi][yi-i] = 4;
                  missCount++;
                  break;
                }//end if ship
              }//end while
              i++;
            }//end if
            }//end if y out of bounds
              i = 0;
              if(p2.PlayerShipBoard[xi+1][yi] == 1){
                p1.PlayerTargetBoard[xi][yi] = 4;
                missCount++;
              }//end if ship 
              else if(p2.PlayerShipBoard[xi-1][yi] == 1){
                p1.PlayerTargetBoard[xi][yi] = 4;
                missCount++;
                continue;
              }//end if ship
              else if(p2.PlayerShipBoard[xi][yi+1] == 1){
                p1.PlayerTargetBoard[xi][yi] = 4;
                missCount++;
                continue;
              }//end if ship 
              else if(p2.PlayerShipBoard[xi][yi-1] == 1){
                p1.PlayerTargetBoard[xi][yi] = 4;
                missCount++;
                continue;
              }//end if ship 
              i = 0;
              for (i = 0; i < 2; i++)
              {
                if(p2.PlayerShipBoard[xi+i][yi] == 1){
                  p1.PlayerTargetBoard[xi][yi] = 5;
                  missCount++;
                  continue;    
                }//end if ship 
                else if(p2.PlayerShipBoard[xi-i][yi] == 1){
                  p1.PlayerTargetBoard[xi][yi] = 5;
                  missCount++;
                  continue;
                }//end if ship
                else if(p2.PlayerShipBoard[xi][yi+i] == 1){
                  p1.PlayerTargetBoard[xi][yi] = 5;
                  missCount++;
                  continue;
                }//end if ship 
                else if(p2.PlayerShipBoard[xi][yi-i] == 1){
                  p1.PlayerTargetBoard[xi][yi] = 5;
                  missCount++;
                  continue;
                }//end if ship 
              }//end for loop
           if (p1.PlayerTargetBoard[xi][yi] == 0)
          {
            // puts("in not found");
            p1.PlayerTargetBoard[xi][yi] = 3;
            missCount++;
            continue;
          }
        }while(hitCount + missCount < 3);//end while
 
  printf("%d attacks hit\n", hitCount);
  return p1;
}//end SalvoPlayerAttack
