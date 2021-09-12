#include <stdio.h>

                                                         /* PLAYER VS PLAYER */.                    <VERSION_1>


int Box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9'};


/* you can also use a nested array */
char arrayBox[2][2] =
{{1,2,3}
{4,5,6}
{7,8,9}}
               

int choice;
int player;
char mark;

                           int main(int argc, const char * argv[]) {
                               
    /* SO LOOP KEEP GOING UNTIL SOME ONE WINS */
             
                               for( int i = 0; i < 10; i++)
                               {
    Board();
    Play();
          
    if(player == 1) {
    mark = 'X';
        game();
      
                }

    else if (player == 2){
    mark = 'O';
        game();
        
                }
    else { printf("not valid");}
               
                    
     if (Box[1] == Box[2] && Box[2] == Box[3])
        {break;}
                                                                   
         else if (Box[4] == Box[5] && Box[5] == Box[6])
         {break;}
                                                                   
         else if (Box[7] == Box[8] && Box[8] == Box[9])
         {break;}
                                                                   
         else if (Box[1] == Box[4] && Box[4] == Box[7])
         {break;}
          
         else if (Box[2] == Box[5] && Box[5] == Box[8])
          {break;}
                                                                   
         else if (Box[3] == Box[6] && Box[6] == Box[9])
         {break;}
                                                                   
         else if (Box[1] == Box[5] && Box[5] == Box[9])
         {break;}
                                                                   
         else if (Box[3] == Box[5] && Box[5] == Box[7])
         {break;}
          }
            printf("\n \n");
            printf("you won player %d\n",player);
            printf("\n \n"); }
                           
                                   
int Board() {
    printf("Player 1 (X)  AND  Player 2 (O)\n\n\n");
    printf(" | %c | %c | %c | \n ", Box[1] ,Box[2] , Box[3] );
    printf("|---|---|---| \n");
    printf(" | %c | %c | %c | \n ", Box[4] ,Box[5] , Box[6] );
    printf("|---|---|---| \n");
    printf(" | %c | %c | %c | \n ", Box[7] ,Box[8] , Box[9] );
    
    
    return 0; }

/*int checkwin() */
                            

int Play() {
printf("\n \n");
 printf("Enter the player: ");
 scanf("%d",&player);
 printf("choose a number: ");
 scanf("%d",&choice);
    return 0 ;
};

int game() {
    if (choice == 1)
    {  Box[1] = mark; }
    
    else if (choice == 2)
    { Box[2] = mark;}
        
    else if (choice == 3)
    {  Box[3] = mark; }
    
   else if (choice == 4)
    { Box[4] = mark;}
    
    else if (choice == 5)
    {  Box[5] = mark;}
    
    else if (choice == 6)
    { Box[6] = mark;}
    
    else if (choice == 7)
    { Box[7] = mark;}
    
    else if (choice == 8)
    {  Box[8] = mark;}
    
    else if (choice == 9)
    {  Box[9] = mark;}
    return 0 ;
}

      { MOST PERFECT VERSION }                     <VERSION_2>
                                                                       
                                                                       
                                                                       
  #include <stdio.h>


 int Box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9'};

int choice;
int player;
const int mark1 = 'X';
 const int mark2 = 'O';

                           int main(int argc, const char * argv[]) {
                               
    /* SO LOOP KEEP GOING UNTIL SOME ONE WINS THEREFORE WITH THE ENTER THE PLAYER NUMBER AND ALL */
             
                               for( int i = 0; i < 18; i++) {
    Board();
    Play();
        
                                   
    if(player == 1) {
        game1(); }
       
    else if (player == 2){
        game2(); }
 
    else {printf("not valid");}
                                 
                             
                                       if (Box[1] == Box[2] && Box[2] == Box[3])
                                                                           {break;}
                                                                   
                                       else if (Box[4] == Box[5] && Box[5] == Box[6])
                                                                           {break;}
                                                                   
                                       else if (Box[7] == Box[8] && Box[8] == Box[9])
                                                                           {break;}
                                                                   
                                       else if (Box[1] == Box[4] && Box[4] == Box[7])
                                                                           {break;}
                                                                   
                                       else if (Box[2] == Box[5] && Box[5] == Box[8])
                                                                           {break;}
                                                                   
                                       else if (Box[3] == Box[6] && Box[6] == Box[9])
                                                                           {break;}
                                                                   
                                       else if (Box[1] == Box[5] && Box[5] == Box[9])
                                                                           {break;}
                                                                
                                       else if (Box[3] == Box[5] && Box[5] == Box[7])
                                       {break;}                                     }
                              
                                       printf("\n \n");
                                       printf("you won player %d\n",player);
                                       printf("\n \n");
                                       Board();
                                       printf("\n\n");
                                       return 0; }
                           
                                                         /* Functions */
int Board() {
    printf("Player 1 (X)  AND  Player 2 (O)\n\n\n");
    printf(" | %c | %c | %c | \n ", Box[1] ,Box[2] , Box[3] );
    printf("|---|---|---| \n");
    printf(" | %c | %c | %c | \n ", Box[4] ,Box[5] , Box[6] );
    printf("|---|---|---| \n");
    printf(" | %c | %c | %c | \n ", Box[7] ,Box[8] , Box[9] );
    
    
    return 0; }

int Play() {
printf("\n \n");
 printf("Enter the player: ");
 scanf("%d",&player);
 printf("Choose a number: ");
 scanf("%d",&choice);
    printf("\n");
    return 0 ;
};

int game1() {
    if (choice == 1 && Box[1] == '1')
    {  Box[1] = mark1;}
    
    else if (choice == 2 && Box[2] == '2')
    { Box[2] = mark1;}
        
    else if (choice == 3 && Box[3] == '3')
    {  Box[3] = mark1; }
    
   else if (choice == 4 && Box[4] == '4')
    { Box[4] = mark1;}
    
    else if (choice == 5 && Box[5] == '5')
    {  Box[5] = mark1;}
    
    else if (choice == 6 && Box[6] == '6')
    { Box[6] = mark1;}
    
    else if (choice == 7 && Box[7] == '7')
    { Box[7] = mark1;}
    
    else if (choice == 8 && Box[8] == '8')
    {  Box[8] = mark1;}
    
    else if (choice == 9 && Box[9] == '9')
    {  Box[9] = mark1;}
    return 0 ; }
                                                                                

int game2() {
    if (choice == 1 && Box[1] == '1')
    {  Box[1] = mark2;}
    
    else if (choice == 2 && Box[2] == '2')
    { Box[2] = mark2;}
        
    else if (choice == 3 && Box[3] == '3')
    {  Box[3] = mark2; }
    
   else if (choice == 4 && Box[4] == '4')
    { Box[4] = mark2;}
    
    else if (choice == 5 && Box[5] == '5')
    {  Box[5] = mark2;}
    
    else if (choice == 6 && Box[6] == '6')
    { Box[6] = mark2;}
    
    else if (choice == 7&& Box[7] == '7')
    { Box[7] = mark2;}
    
    else if (choice == 8 && Box[8] == '8')
    {  Box[8] = mark2;}
    
    else if (choice == 9 && Box[9] == '9')
    {  Box[9] = mark2;}
    return 0 ; }
