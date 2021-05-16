#include <studio.h>
#include <conio.h>

/* array to hold the cell status */
char gameboard [3][3];
/* function prototypes */
 void drawBoard ();
int showResult (char ch);
int validateInput ( int cell);
void turnPlayerO (int* pCell);
void turnPlayerX (int* pCell);
void getRowCol (int cell,int{* pX,int* pY);
 
int main()
 {
int x = 0,
row = 0,
Col = 0,
selectedCell = 0,
availablwCell = 9;

char startChar = '1';
clrscr();
/*make all the cell numbered from 1 to 10*/

for (row = 0; row <3; row++)
for (col = 0; col <3; col++)
 gameBoard[row][col] = startChar++;
/*now draw board with current data in gameBoard[][] arry*/
drawBoard();
/* loop untill we've played all the cell*/
while ( availableCell >= 0 )
{
 /*assume Player One is X*/
turnPlayerX(&selectedCell);

getRowCol (selectedCell,&x,&y);

gameBoard [X][Y] = 'X';

availableCell -= 1;

clrscr();
drawBoard();

if( showResult('x') ==1)

{
break;
}
else if (availableCell ==0)[
{
printf ("\n Game Drawn");
break;
}
 /*assume Player One is X*/
turnPlayerO(&selectedCell);

getRowCol (selectedCell,&x,&y);

gameBoard [X][Y] = 'O';

availableCell -= 1;
clrscr();
drawBoard();

if( showResult('O') ==1) 
{
break;
}
else if (availableCell ==0)
{
printf("\ Game Drawn");
break;
}


}
getch();
return 0;
void drawBoard()
{
int i,j;
printf ("\n TIC TAC TOE");
printf ("\n Select valid cell");
printf ("\n \t|\t|\t"
,gameBoard[0][0]
,gameBoard[0][1]
,gameBoard[0][2]);
printf ("\n --|--|--";
printf ("\n \t|\t|\t"
,gameBoard[1][0]
,gameBoard[1][1]
,gameBoard[1][2]);
printf ("\n --|--|--");
printf ("\n \t|\t|\t"
,gameBoard[2][0]
,gameBoard[2][1]
,gameBoard[2][3]);
}
{
int cell;
do
{
printf ("\n Player O,\n select valid cell number:");
scanf("%d",&cell);
}
while(0 == validateInpute(cell) );
*pCell = cell;(
}
{int cell;
do
{
printf ("\n Player X,\n select valid cell number:");
scanf("%d",&cell);
}
while(0 == validateInpute(cell) );
*pCell = cell;}
{*pX = (cell-1)/3;
{*pY = (cell-1)%3;
