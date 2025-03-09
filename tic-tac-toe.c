#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
char name[10]={'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},name1[10]={'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'};
char mark,choice,reset,close,undo,next;
char box[9] = {'1','2','3','4','5','6','7','8','9'};
char store[100];
int player=1,win,offset,player1,player2;
int check();
int checkwin();
int finish();
void display();
void welcome();
void player_name();
void enter_name(char name2[10],int left,int top,int colour,int player);
void welcomepattern(int left,int top,int colour);
void welcomerectangle(int left, int top, int leftnumber, int topnumber,int colour);
void rectangle(int left, int top, int leftnumber, int topnumber, char sym,int colour);
void soft_rectangle(int left, int top, int leftnumber, int topnumber,int colour);
void cross(int left, int top, int length,char ch,int colour);
void dil(int left, int top,int colour);
void main ()
{
	clrscr();
	welcome();
	clrscr();
	player_name();
	clrscr();
	check();
	display();
	getch();
	finish();
	getch();
}

int check()
{

	display();
	player = (player % 2 == 1) ? 1 : 2;
	textcolor(14);
	gotoxy(7,2);
	cprintf("%s : %d",name,player1);
	gotoxy(35,2);
	cprintf("%s : %d",name1,player2);
	textcolor(11);
	gotoxy(49,17);
	cprintf("Player %d (%s)",player,(player%2==1)?name:name1);
	textcolor(12);
	gotoxy(49,4);
	cprintf("-> Press R for Reset");
	gotoxy(49,5);
	cprintf("-> Press U for Undo");
	gotoxy(49,6);
	cprintf("-> Press E for Exit");
	textcolor(14);
	gotoxy(49,19);
	cprintf("Enter your choice (1-9)");
	choice=getch();
	store[offset]=choice;
	offset++;

	mark = (player == 1) ? 'x' : 'o';

	if(choice == '1' && box[0] == '1')
	{
		box[0] = mark;
		if(mark=='o')
		{
			gotoxy(11,6);
			cprintf(" ");
			rectangle( 9, 5,13, 7,'o',3);
		}
		else cross(10, 5, 3,'x',4);
	}
	else if(choice == '2' && box[1] == '2')
	{
		box[1] = mark;
		if(mark=='o')
		{
			gotoxy(25,6);
			cprintf(" ");
			rectangle(23, 5,28, 7,'o',3);
		}
		else cross(24, 5, 3,'x',4);
	}
	else if(choice == '3' && box[2] == '3')
	{
		box[2] = mark;
		if(mark=='o')
		{
			gotoxy(39,6);
			cprintf(" ");
			rectangle(37, 5,41, 7,'o',3);
		}
		else cross(38, 5, 3,'x',4);
	}
	else if(choice == '4' && box[3] == '4')
	{
		box[3] = mark;
		if(mark=='o')
		{
			gotoxy(11,13);
			cprintf(" ");
			rectangle( 9,12,13,14,'o',3);
		}
		else cross(10,12, 3,'x',4);
	}
	else if(choice == '5' && box[4] == '5')
	{
		box[4] = mark;
		if(mark=='o')
		{
			gotoxy(25,13);
			cprintf(" ");
			rectangle(23,12,28,14,'o',3);
		}
		else cross(24,12,3,'x',4);
	}
	else if(choice == '6' && box[5] == '6')
	{
		box[5] = mark;
		if(mark=='o')
		{
			gotoxy(39,13);
			cprintf(" ");
			rectangle(37,12,41,14,'o',3);
		}
		else cross(38,12,3,'x',4);
	}
	else if(choice == '7' && box[6] == '7')
	{
		box[6] = mark;
		if(mark=='o')
		{
			gotoxy(11,20);
			cprintf(" ");
			rectangle(9,19,13,21,'o',3);
		}
		else cross(10,19,3,'x',4);
	}
	else if(choice == '8' && box[7] == '8')
	{
		box[7] = mark;
		if(mark=='o')
		{
			gotoxy(25,20);
			cprintf(" ");
			rectangle(23,19,28,21,'o',3);
		}
		else cross(24,19,3,'x',4);
	}
	else if(choice == '9' && box[8] == '9')
	{
		box[8] = mark;
		if(mark=='o')
		{
			gotoxy(39,20);
			cprintf(" ");
			rectangle(37,19,41,21,'o',3);
		}
		else cross(38,19,3,'x',4);
	}
	else if((choice == 'r' || choice == 'R')&& (box[0] != '1' || box[1] != '2'|| box[2] != '3'|| box[3] != '4' || box[4] != '5'|| box[5] != '6'|| box[6] != '7'|| box[7] != '8'|| box[8] != '9') )
	{
		gotoxy(49,4);
		cprintf("                     ");
		gotoxy(49,5);
		cprintf("                     ");
		gotoxy(49,6);
		cprintf("                     ");
		gotoxy(49,17);
		cprintf("                          ");
		gotoxy(49,19);
		cprintf("                          ");
		gotoxy(49,4);
		textcolor(7);
		cprintf("Reset");
		gotoxy(49,5);
		cprintf("Do you want to reset ?(Y/N)");
		reset: reset=getch();

		if(reset == 'Y' || reset == 'y')
		{
			gotoxy(49,4);
			cprintf("     ");
			gotoxy(49,5);
			cprintf("                            ");

			gotoxy(9,5);
			cprintf("        ");
			gotoxy(9,6);
			cprintf("        ");
			gotoxy(9,7);
			cprintf("        ");

			gotoxy(23,5);
			cprintf("       ");
			gotoxy(23,6);
			cprintf("       ");
			gotoxy(23,7);
			cprintf("       ");

			gotoxy(36,5);
			cprintf("       ");
			gotoxy(36,6);
			cprintf("       ");
			gotoxy(36,7);
			cprintf("       ");

			gotoxy(9,12);
			cprintf("       ");
			gotoxy(9,13);
			cprintf("       ");
			gotoxy(9,14);
			cprintf("       ");

			gotoxy(23,12);
			cprintf("       ");
			gotoxy(23,13);
			cprintf("       ");
			gotoxy(23,14);
			cprintf("       ");

			gotoxy(36,12);
			cprintf("       ");
			gotoxy(36,13);
			cprintf("       ");
			gotoxy(36,14);
			cprintf("       ");

			gotoxy(9,19);
			cprintf("       ");
			gotoxy(9,20);
			cprintf("       ");
			gotoxy(9,21);
			cprintf("       ");

			gotoxy(23,19);
			cprintf("       ");
			gotoxy(23,20);
			cprintf("       ");
			gotoxy(23,21);
			cprintf("       ");

			gotoxy(36,19);
			cprintf("       ");
			gotoxy(36,20);
			cprintf("       ");
			gotoxy(36,21);
			cprintf("       ");
			box[0] = '1'; box[1] = '2'; box[2] = '3'; box[3] = '4'; box[4] = '5'; box[5] = '6'; box[6] = '7'; box[7] = '8'; box[8] = '9';
			   //	player--;
			check();
		}
		else if(reset == 'N' || reset == 'n')
		{
			gotoxy(49,4);
			cprintf("     ");
			gotoxy(49,5);
			cprintf("                            ");
			check();
		}
		else
		{
			textcolor(7);
			gotoxy(51,6);
			cprintf("Invalid Input");
			getch();
			gotoxy(51,6);
			cprintf("             ");
			goto reset;
		}
	}
	else if((choice == 'u' || choice == 'U') && (box[0] != '1' || box[1] != '2'|| box[2] != '3'|| box[3] != '4' || box[4] != '5'|| box[5] != '6'|| box[6] != '7'|| box[7] != '8'|| box[8] != '9'))
	{
		gotoxy(49,4);
		cprintf("                     ");
		gotoxy(49,5);
		cprintf("                     ");
		gotoxy(49,6);
		cprintf("                     ");
		gotoxy(49,17);
		cprintf("                          ");
		gotoxy(49,19);
		cprintf("                           ");
		gotoxy(49,4);
		textcolor(7);
		cprintf("Undo");
		gotoxy(49,5);
		cprintf("Do you want to Undo ?(Y/N)");
		undo: undo=getch();
		if(undo=='y' || undo=='Y')
		{
		  //	printf("%c",store[offset-2]);
			if(store[offset-2]=='1')
			{
				gotoxy(9,5);
				cprintf("        ");
				gotoxy(9,6);
				cprintf("        ");
				gotoxy(9,7);
				cprintf("        ");
				box[0]='1';
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;
				check();

			}
			else if(store[offset-2]=='2')
			{
				gotoxy(23,5);
				cprintf("       ");
				gotoxy(23,6);
				cprintf("       ");
				gotoxy(23,7);
				cprintf("       ");
				box[1]='2';
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;
				check();


			 }
			else if(store[offset-2]=='3')
			{
				gotoxy(36,5);
				cprintf("       ");
				gotoxy(36,6);
				cprintf("       ");
				gotoxy(36,7);
				cprintf("       ");
				box[2]='3';
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;
				check();
			}
			else if(store[offset-2]=='4')
			{
				gotoxy(9,12);
				cprintf("       ");
				gotoxy(9,13);
				cprintf("       ");
				gotoxy(9,14);
				cprintf("       ");
				box[3]='4';
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;
				check();  //player=player-1;
			}
			else if(store[offset-2]=='5')
			{
				gotoxy(23,12);
				cprintf("       ");
				gotoxy(23,13);
				cprintf("       ");
				gotoxy(23,14);
				cprintf("       ");
				box[4]='5';
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;
				check();//player=player-1;
			}
			else if(store[offset-2]=='6')
			{
				gotoxy(36,12);
				cprintf("       ");
				gotoxy(36,13);
				cprintf("       ");
				gotoxy(36,14);
				cprintf("       ");
				box[5]='6';
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;
				check(); //player=player-1;
			}
			else if(store[offset-2]=='7')
			{
				gotoxy(9,19);
				cprintf("       ");
				gotoxy(9,20);
				cprintf("       ");
				gotoxy(9,21);
				cprintf("       ");
				box[6]='7';
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;
				check(); //player=player-1;
			 }
			 else if(store[offset-2]=='8')
			 {
				gotoxy(23,19);
				cprintf("       ");
				gotoxy(23,20);
				cprintf("       ");
				gotoxy(23,21);
				cprintf("       ");
				box[7]='8';
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;
				check(); //player=player-1;
			 }
			 else if(store[offset-2]=='9')
			 {
				gotoxy(36,19);
				cprintf("       ");
				gotoxy(36,20);
				cprintf("       ");
				gotoxy(36,21);
				cprintf("       ");
				box[8]='9';
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;
				check();
			 }
			 else
			 {
				gotoxy(49,4);
				cprintf("     ");
				gotoxy(49,5);
				cprintf("                            ");
				textcolor(7);
				gotoxy(50,5);
				cprintf("Undo is allowed only");
				gotoxy(56,6);
				cprintf("one time");
				getch();
				gotoxy(50,5);
				cprintf("                    ");
				gotoxy(56,6);
				cprintf("         ");
				if(player==1)player=player+1;
				else if(player==2)player=player-1;

			 }

		}
		else if(undo=='n'||undo=='N')
		{
			gotoxy(49,4);
			cprintf("     ");
			gotoxy(49,5);
			cprintf("                            ");
					//player++;
			check();
		}
		else
		{
			textcolor(7);
			gotoxy(49,7);
			cprintf("Invalid Move");
			getch();
			gotoxy(49,7);
			cprintf("            ");
			goto undo;
		}
	}
	else if(choice == 'e' || choice == 'E')
	{
		gotoxy(49,17);
		cprintf("                         ");
		gotoxy(49,19);
		cprintf("                         ");
		gotoxy(49,4);
		cprintf("                     ");
		gotoxy(49,5);
		cprintf("                     ");
		gotoxy(49,6);
		cprintf("                     ");
		textcolor(7);
		gotoxy(49,4);
		cprintf("Exit");
		gotoxy(49,5);
		cprintf("Do you want to exit ?(Y/N)");
		close: close=getch();
		if(close == 'Y' || close == 'y')
		{
			finish();
		}
		else if(close == 'N' || close == 'n')
		{
			gotoxy(49,4);
			cprintf("     ");
			gotoxy(49,5);
			cprintf("                            ");
			check();
		}
		else
		{
			textcolor(8);
			gotoxy(51,6);
			cprintf("Invalid Input");
			getch();
			gotoxy(51,6);
			cprintf("             ");
			goto close;
		}
	}
	else
	{
		textcolor(8);
		gotoxy(55,10);
		cprintf("Invalid move");
		player--;
		getch();
		gotoxy(55,10);
		cprintf("            ");
	}

	win = checkwin();
	player++;
	if(win == -1)
	{
		check();
	}
	else if(win == 1)
	{
		gotoxy(49,4);
		cprintf("                     ");
		gotoxy(49,5);
		cprintf("                     ");
		gotoxy(49,6);
		cprintf("                     ");
		gotoxy(49,17);
		cprintf("                       ");
		gotoxy(49,19);
		cprintf("                       ");
		--player;
		if(player==1)
		{
			player1++;
		}
		else if(player==2)
		{
			player2++;
		}
		textcolor(14);
		gotoxy(52,4);
		cprintf("Winner : %s",(player1<player2)?name1:name) ;
		gotoxy(7,2);
		cprintf("%s : %d",name,player1);
		gotoxy(35,2);
		cprintf("%s : %d",name1,player2);
		getch();
	}
	else
	{
		gotoxy(49,4);
		cprintf("                       ");
		gotoxy(49,5);
		cprintf("                       ");
		gotoxy(49,6);
		cprintf("                       ");
		gotoxy(49,17);
		cprintf("                       ");
		gotoxy(49,19);
		cprintf("                       ");
	 //	dil(55,10);
		gotoxy(52,4);
		cprintf("Game draw");
		getch();
	}

	textcolor(4);
	gotoxy(49,10);
	cprintf("Play Again");
	gotoxy(49,11);
	cprintf("Do you want to play ? (Y/N)");
	next:	gotoxy(52,13);
			cprintf("             ");
	next=getch();
	if(next=='y'||next=='Y')
	{
			gotoxy(49,10);
			cprintf("           ");
			gotoxy(49,11);
			cprintf("                            ");

			gotoxy(9,5);
			cprintf("        ");
			gotoxy(9,6);
			cprintf("        ");
			gotoxy(9,7);
			cprintf("        ");

			gotoxy(23,5);
			cprintf("       ");
			gotoxy(23,6);
			cprintf("       ");
			gotoxy(23,7);
			cprintf("       ");

			gotoxy(36,5);
			cprintf("       ");
			gotoxy(36,6);
			cprintf("       ");
			gotoxy(36,7);
			cprintf("       ");

			gotoxy(9,12);
			cprintf("       ");
			gotoxy(9,13);
			cprintf("       ");
			gotoxy(9,14);
			cprintf("       ");

			gotoxy(23,12);
			cprintf("       ");
			gotoxy(23,13);
			cprintf("       ");
			gotoxy(23,14);
			cprintf("       ");

			gotoxy(36,12);
			cprintf("       ");
			gotoxy(36,13);
			cprintf("       ");
			gotoxy(36,14);
			cprintf("       ");

			gotoxy(9,19);
			cprintf("       ");
			gotoxy(9,20);
			cprintf("       ");
			gotoxy(9,21);
			cprintf("       ");

			gotoxy(23,19);
			cprintf("       ");
			gotoxy(23,20);
			cprintf("       ");
			gotoxy(23,21);
			cprintf("       ");

			gotoxy(36,19);
			cprintf("       ");
			gotoxy(36,20);
			cprintf("       ");
			gotoxy(36,21);
			cprintf("       ");
			box[0] = '1'; box[1] = '2'; box[2] = '3'; box[3] = '4'; box[4] = '5'; box[5] = '6'; box[6] = '7'; box[7] = '8'; box[8] = '9';
			check();
	}
	else if(next == 'N'||next=='n')
	{
		if(player1>player2)
		{
			gotoxy(49,10);
			cprintf("           ");
			gotoxy(49,11);
			cprintf("                           ");
			dil(54,10,7);
			gotoxy(60,11);
			textcolor(2);
			cprintf("%s",name);
			getch();
		}
		else if(player1<player2)
		{
			gotoxy(49,10);
			cprintf("           ");
			gotoxy(49,11);
			cprintf("                           ");
			dil(54,10,7);
			textcolor(2);
			gotoxy(60,11);
			cprintf("%s",name1);
		}
		else
		{
			gotoxy(49,10);
			cprintf("           ");
			gotoxy(49,11);
			cprintf("                           ");
			dil(54,10,7);
			textcolor(2);
			gotoxy(60,11);
			cprintf("Game Draw");
		}
		finish();
	}
	else
	{
		textcolor(7);
		gotoxy(52,13);
		cprintf("Invalid input");
		getch();
		goto next;
	}
   down: cprintf("");
   return 0;
}
void display()
{
	_setcursortype(_NOCURSOR);
//	rectangle( 1, 1,80,25,'x'); //main rectangle
  //	rectangle( 3, 2,47,24,'o'); //tictactoe rectangle
//	welcomerectangle(2,1,79,25);

	soft_rectangle( 5, 3,17, 9,13); //box[0]rectangle
		textcolor(3);
		gotoxy(11,6);
		cprintf("%c",box[0]);
		if(box[0]=='o')gotoxy(11,6);cprintf(" ");

	soft_rectangle(19, 3,31, 9,13); //box[1]rectangle
		textcolor(3);
		gotoxy(25,6);
		cprintf("%c",box[1]);
		if(box[1]=='o')gotoxy(25,6);cprintf(" ");

	soft_rectangle(33, 3,45, 9,13); //box[2]rectangle
		textcolor(3);
		gotoxy(39,6);
		cprintf("%c",box[2]);
		if(box[2]=='o')gotoxy(39,6);cprintf(" ");

	soft_rectangle( 5,10,17,16,13); //box[3]rectangle
		textcolor(3);
		gotoxy(11,13);
		cprintf("%c",box[3]);
		if(box[3]=='o')gotoxy(11,13);cprintf(" ");

	soft_rectangle(19,10,31,16,13); //box[4]rectangle
		textcolor(3);
		gotoxy(25,13);
		cprintf("%c",box[4]);
		if(box[4]=='o')gotoxy(25,13);cprintf(" ");

	soft_rectangle(33,10,45,16,13); //box[5]rectangle
		textcolor(3);
		gotoxy(39,13);
		cprintf("%c",box[5]);
		if(box[5]=='o')gotoxy(39,13);cprintf(" ");

	soft_rectangle( 5,17,17,23,13); //box[6]rectangle
		textcolor(3);
		gotoxy(11,20);
		cprintf("%c",box[6]);
		if(box[6]=='o')gotoxy(11,20);cprintf(" ");

	soft_rectangle(19,17,31,23,13);	//box[7]rectangle
		textcolor(3);
		gotoxy(25,20);
		cprintf("%c",box[7]);
		if(box[7]=='o')gotoxy(25,20);cprintf(" ");

	soft_rectangle(33,17,45,23,13); //box[8]rectangle
		textcolor(3);
		gotoxy(39,20);
		cprintf("%c",box[8]);
		if(box[8]=='o')gotoxy(39,20);cprintf(" ");
}

int checkwin()
{
	if(box[0] == box[1] && box[1] == box[2])
	{
		return 1;
	}
	else if(box[3] == box[4] && box[4] == box[5])
	{
		return 1;
	}
	else if(box[6] == box[7] && box[7] == box[8])
	{
		return 1;
	}
	else if(box[0] == box[3] && box[3] == box[6])
	{
		return 1;
	}
	else if(box[1] == box[4] && box[4] == box[7])
	{
		return 1;
	}
	else if(box[2] == box[5] && box[5] == box[8])
	{
		return 1;
	}
	else if(box[0] == box[4] && box[4] == box[8])
	{
		return 1;
	}
	else if(box[2] == box[4] && box[4] == box[6])
	{
		return 1;
	}
	else if(box[0] != '1' && box[1] != '2' && box[2] != '3' && box[3] != '4' && box[4] != '5' && box[5] != '6' && box[6] != '7' && box[7] != '8' && box[8] != '9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}


void welcome()
{
	int colour=1;
	_setcursortype(_NOCURSOR);
	welcomerectangle(3,1,75,25,6);
	textcolor(9);
	gotoxy(32,7);
	cprintf("Tic-Tac-Toe");
	welcomepattern(33,9,14);
	textcolor(RED);
	gotoxy(28,17);
	cprintf("Press any key to Play");
   /*	while(!kbhit())
	{
	   welcomerectangle(3,1,75,25,colour);
	   colour++;
	   if(colour=15)colour=1;
	} */
	getch();
}
void welcomepattern(int left,int top,int colour)
{

	textcolor(colour);
						gotoxy(left,top);
	cprintf("  |   |   ");
	top++;
						gotoxy(left,top);
	cprintf("o | x | o");
	top++;
	left--;
						gotoxy(left,top);
	cprintf("---|---|---");
	top++;
	left++;
						gotoxy(left,top);
	cprintf("x | o | o");
	top++;
	left--;
						gotoxy(left,top);
	cprintf("---|---|---");
	top++;
	left++;
						gotoxy(left,top);
	cprintf("x | o | x");
	left--;
	top++;
						gotoxy(left,top);
	cprintf("   |   |   ");
}


void welcomerectangle(int left, int top, int leftnumber, int topnumber,int colour)
{   int rightnumber, downnumber;
	rightnumber=left;
	downnumber=top;
	textcolor(colour);

	while(left<=leftnumber)
	{   delay(5);
		gotoxy(left,top);
		cprintf("ox");
		left = left+3;
	}
	left = left-3;

	while(top<=topnumber)
	{   delay(5);
		gotoxy(left,top);
		cprintf("ox");
		top++;
	}
	top--;
	while(left>=rightnumber)
	{   delay(5);
		gotoxy(left,top);
		cprintf("ox");
		left=left-3;
	}
	left=left+3;
	while(top>=downnumber)
	{   delay(5);
		gotoxy(left,top);
		cprintf("ox");
		top--;
	}
}
void rectangle(int left, int top, int leftnumber, int topnumber, char sym,int colour)
{   int rightnumber, downnumber;
	rightnumber=left;
	downnumber=top;
	textcolor(colour);

	while(left<=leftnumber)
	{
		gotoxy(left,top);
		cprintf("%c",sym);
		left=left+2;
	}
	left=left-2;

	while(top<=topnumber)
	{
		gotoxy(left,top);
		cprintf("%c",sym);
		top++;
	}
	top--;
	while(left>=rightnumber)
	{
		gotoxy(left,top);
		cprintf("%c",sym);
		left=left-2;
	}
	left=left+2;
	while(top>=downnumber)
	{
		gotoxy(left,top);
		cprintf("%c",sym);
		top--;
	}
}
void cross(int left, int top, int length,char ch,int colour)
{

	int rightnumber;
	_setcursortype(_NOCURSOR);
	rightnumber=left+length;
	textcolor(colour);
	while(left<rightnumber)
	{
		gotoxy(left,top);
		cprintf("%c",ch);
		top=top+1;
		left=left+1;
	}
	left=left-length;
	top=top-1;
	while(left<rightnumber)
	{
		gotoxy(left,top);
		cprintf("%c",ch);
		top=top-1;
		left=left+1;
	 }
}

int finish()
{
	clrscr();
	_setcursortype(_NOCURSOR);
	welcomerectangle(3,1,75,25,6);
	gotoxy(32,6);
	textcolor(LIGHTBLUE);
	cprintf("Tic-tac-toe");
  //	rectangle(24,8,52,16,'o');
  //	rectangle(26,9,50,15,'x');

  //	gotoxy(30,12);
  //	cprintf("Thanks for playing");
	textcolor(12);
	gotoxy(50,23);
	cprintf("Made by : Navjot Singh");
	getch();
	exit(0);
	return 0;
}



void dil(int left, int top,int colour)
{	  int leftnumber, topnumber, rightnumber;
	  rightnumber=top;
 //	  leftnumber=left+3;
	  topnumber=top+8;
	  textcolor(colour);
		while(top<=topnumber)
			{ delay(50);
			  gotoxy(left,top);
			  cprintf("+");
			  top++;
			  left++;
			}
		left--;
		top--;
		while(top>=rightnumber)
			{ delay(50);
			 gotoxy(left,top);
			 cprintf("+");
			 top--;
			 left++;
			 }
		 left--;
		 top++;
		 while(top>=rightnumber-2)
		 {   delay(50);
			 gotoxy(left,top);
			 cprintf("+");
			 top--;
			 left=left-2;
		 }
		 top++;
		 left=left+2;
		 while(top<=rightnumber)
		 {  delay(50);
			gotoxy(left,top);
			cprintf("+");
			top++;
			left=left-2;
		 }
		 top--;
		 left=left+2;
		 while(top>=rightnumber-2)
		 {  delay(50);
			gotoxy(left,top);
			cprintf("+");
			top--;
			left=left-2;
		 }
		 top++;
		 left=left+2;
		 while(top<=rightnumber)
		 {  delay(50);
			gotoxy(left,top);
			cprintf("+");
			top++;
			left=left-2;
		 }
}

void soft_rectangle(int left, int top, int leftnumber, int topnumber,int colour)
{
	int rightnumber = left, downnumber = top;
	textcolor(colour);
	gotoxy(left,top);
	cprintf("%c",218);
	left = left++;
	while(left<leftnumber)
	{
		gotoxy(left,top);
		cprintf("%c",196);
		left=left++;
	}

	gotoxy(left,top);
	cprintf("%c",191);
	top = top++;
	while(top<topnumber)
	{
		gotoxy(left,top);
		cprintf("%c",179);
		top++;
	}

	gotoxy(left,top);
	cprintf("%c",217);
	left=left-1;
	while(left>rightnumber)
	{
		gotoxy(left,top);
		cprintf("%c",196);
		left=left-1;
	}

	gotoxy(left,top);
	cprintf("%c",192);
	top--;
	while(top>=downnumber+1)
	{
		gotoxy(left,top);
		cprintf("%c",179);
		top--;
	}
}

void player_name()
{
	welcomerectangle(3,1,75,25,6);
	enter_name(name,10,5,13,1);
	enter_name(name1,10,10,13,2);

}
void enter_name(char name2[10],int left,int top,int colour,int player)
{
	int offset=0;
	char ch='\0';
up:
	_setcursortype(_NORMALCURSOR);
	textcolor(colour);
	gotoxy(left,top);
	cprintf("Enter Player %d name:",player);
	while(1)
	{
		ch=fgetc(stdin);
		if(ch!='\n')
		{
			name2[offset]=ch;
			offset++;
			if(offset>6)
			{
				gotoxy(left+2,2+top);
				cprintf("name accepted atmost of 6 characters");
				getch();
				gotoxy(left+2,2+top);
				cprintf("                                    ");
				goto out;
			}
			else if(offset==6)goto out;
		 }
		else
		{
			if(offset==0)
			{
				_setcursortype(_NOCURSOR);
				gotoxy(left+2,top+2);
				cprintf("Please enter a name");
				getch();
				gotoxy(left+2,top+2);
				cprintf("                   ");
				goto up;
			}
			else
			{
				goto out;
			}
		}

	}
	out:
	fflush(stdin);
}