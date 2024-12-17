#include <iostream>
#include <cstring>
#include<windows.h>
using namespace std;



class player{
	protected:
		int x_position;
		int y_position;
		int count;
		int dont_play;
		int check;
		char direction[50];
		char temp;
		char Map[20][20];
		bool game_status;
		
	public:
		player(){
			map();
			check = 0;
			count = 0;
			x_position = 9;
			y_position = 0;
			dont_play = 0;
			direction[50] = {0};
			temp = NULL;
			game_status = false;
		}
		
		void setConsoleColor(WORD color) 
		{
		    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		    SetConsoleTextAttribute(hConsole, color);
		}
		
		bool get_game_status(){
			return game_status;
		}
		
		void map(){
				
				Map[0][0]= '@';
				Map[1][0]= '@';
				Map[2][0]= '@';
				Map[3][0]= '@';
				Map[4][0]= '@';
				Map[5][0]= '#';
				Map[6][0]= '#';
				Map[7][0]= '#';
				Map[8][0]= '#';
				Map[9][0]= '*';
				Map[10][0]= '#';
				Map[11][0]= '#';
				Map[12][0]= '#';
				Map[13][0]= '#';
				Map[14][0]= '#';
				Map[15][0]= '#';
				Map[16][0]= '#';
				Map[17][0]= '@';
				Map[18][0]= '@';
				Map[19][0]= '@';
				
				Map[0][1]= '@';
				Map[1][1]= '@';
				Map[2][1]= '@';
				Map[3][1]= '@';
				Map[4][1]= '6';
				Map[5][1]= '@';
				Map[6][1]= '#';
				Map[7][1]= '#';
				Map[8][1]= '#';
				Map[9][1]= ' ';
				Map[10][1]= '#';
				Map[11][1]= '#';
				Map[12][1]= '#';
				Map[13][1]= '#';
				Map[14][1]= '#';
				Map[15][1]= '#';
				Map[16][1]= '#';
				Map[17][1]= '#';
				Map[18][1]= '@';
				Map[19][1]= '@';
				
				Map[0][2]= '@';
				Map[1][2]= '1';
				Map[2][2]= '@';
				Map[3][2]= '@';
				Map[4][2]= ' ';
				Map[5][2]= '@';
				Map[6][2]= '#';
				Map[7][2]= '#';
				Map[8][2]= '#';
				Map[9][2]= ' ';
				Map[10][2]= '#';
				Map[11][2]= '#';
				Map[12][2]= '#';
				Map[13][2]= '#';
				Map[14][2]= '#';
				Map[15][2]= '#';
				Map[16][2]= '#';
				Map[17][2]= '#';
				Map[18][2]= '#';
				Map[19][2]= '@';
				
				Map[0][3]= '@';
				Map[1][3]= ' ';
				Map[2][3]= '@';
				Map[3][3]= '@';
				Map[4][3]= ' ';
				Map[5][3]= '@';
				Map[6][3]= '#';
				Map[7][3]= '7';
				Map[8][3]= ' ';
				Map[9][3]= ' ';
				Map[10][3]= ' ';
				Map[11][3]= ' ';
				Map[12][3]= ' ';
				Map[13][3]= ' ';
				Map[14][3]= ' ';
				Map[15][3]= ' ';
				Map[16][3]= ' ';
				Map[17][3]= ' ';
				Map[18][3]= '8';
				Map[19][3]= '@';
				
				Map[0][4]= '@';
				Map[1][4]= ' ';
				Map[2][4]= '@';
				Map[3][4]= '@';
				Map[4][4]= ' ';
				Map[5][4]= '@';
				Map[6][4]= '#';
				Map[7][4]= '@';
				Map[8][4]= '@';
				Map[9][4]= ' ';
				Map[10][4]= '~';
				Map[11][4]= ' ';
				Map[12][4]= '#';
				Map[13][4]= '#';
				Map[14][4]= '#';
				Map[15][4]= '#';
				Map[16][4]= ' ';
				Map[17][4]= '#';
				Map[18][4]= '#';
				Map[19][4]= '@';			
				
				Map[0][5]= '@';
				Map[1][5]= ' ';
				Map[2][5]= '@';
				Map[3][5]= '@';
				Map[4][5]= ' ';
				Map[5][5]= '@';
				Map[6][5]= '@';
				Map[7][5]= '@';
				Map[8][5]= '@';
				Map[9][5]= ' ';
				Map[10][5]= '~';
				Map[11][5]= ' ';
				Map[12][5]= '#';
				Map[13][5]= '#';
				Map[14][5]= '#';
				Map[15][5]= '#';
				Map[16][5]= ' ';
				Map[17][5]= ' ';
				Map[18][5]= ' ';
				Map[19][5]= '@';
				
				Map[0][6]= '@';
				Map[1][6]= ' ';
				Map[2][6]= ' ';
				Map[3][6]= ' ';
				Map[4][6]= ' ';
				Map[5][6]= ' ';
				Map[6][6]= ' ';
				Map[7][6]= ' ';
				Map[8][6]= ' ';
				Map[9][6]= ' ';
				Map[10][6]= '~';
				Map[11][6]= ' ';
				Map[12][6]= '#';
				Map[13][6]= '~';
				Map[14][6]= '~';
				Map[15][6]= '~';
				Map[16][6]= '~';
				Map[17][6]= '~';
				Map[18][6]= ' ';
				Map[19][6]= '@';			
				
				Map[0][7]= '@';
				Map[1][7]= '#';
				Map[2][7]= '#';
				Map[3][7]= '#';
				Map[4][7]= ' ';
				Map[5][7]= '~';
				Map[6][7]= '~';
				Map[7][7]= '~';
				Map[8][7]= '~';
				Map[9][7]= '~';
				Map[10][7]= '~';
				Map[11][7]= ' ';
				Map[12][7]= '~';
				Map[13][7]= '~';
				Map[14][7]= '2';
				Map[15][7]= ' ';
				Map[16][7]= ' ';
				Map[17][7]= '~';
				Map[18][7]= ' ';
				Map[19][7]= '@';
				
				Map[0][8]= '@';
				Map[1][8]= '#';
				Map[2][8]= '#';
				Map[3][8]= '#';
				Map[4][8]= ' ';
				Map[5][8]= '~';
				Map[6][8]= '@';
				Map[7][8]= '@';
				Map[8][8]= '@';
				Map[9][8]= '@';
				Map[10][8]= '~';
				Map[11][8]= ' ';
				Map[12][8]= '~';
				Map[13][8]= '~';
				Map[14][8]= '~';
				Map[15][8]= '~';
				Map[16][8]= ' ';
				Map[17][8]= '~';
				Map[18][8]= ' ';
				Map[19][8]= '@';
				
				Map[0][9]= '@';
				Map[1][9]= '#';
				Map[2][9]= '#';
				Map[3][9]= '#';
				Map[4][9]= ' ';
				Map[5][9]= '~';
				Map[6][9]= '@';
				Map[7][9]= '@';
				Map[8][9]= '@';
				Map[9][9]= '@';
				Map[10][9]= '~';
				Map[11][9]= ' ';
				Map[12][9]= '@';
				Map[13][9]= '~';
				Map[14][9]= '~';
				Map[15][9]= '@';
				Map[16][9]= ' ';
				Map[17][9]= '~';
				Map[18][9]= ' ';
				Map[19][9]= '@';
			
				Map[0][10]= '#';
				Map[1][10]= '#';
				Map[2][10]= '3';
				Map[3][10]= ' ';
				Map[4][10]= ' ';
				Map[5][10]= ' ';
				Map[6][10]= ' ';
				Map[7][10]= ' ';
				Map[8][10]= ' ';
				Map[9][10]= ' ';
				Map[10][10]= ' ';
				Map[11][10]= ' ';
				Map[12][10]= '@';
				Map[13][10]= '@';
				Map[14][10]= '@';
				Map[15][10]= '@';
				Map[16][10]= ' ';
				Map[17][10]= '~';
				Map[18][10]= ' ';
				Map[19][10]= '@';
			
				Map[0][11]= '#';
				Map[1][11]= '#';
				Map[2][11]= '#';
				Map[3][11]= '#';
				Map[4][11]= ' ';
				Map[5][11]= '#';
				Map[6][11]= '#';
				Map[7][11]= '#';
				Map[8][11]= '#';
				Map[9][11]= '#';
				Map[10][11]= '#';
				Map[11][11]= '#';
				Map[12][11]= '@';
				Map[13][11]= '@';
				Map[14][11]= '~';
				Map[15][11]= '@';
				Map[16][11]= ' ';
				Map[17][11]= '~';
				Map[18][11]= ' ';
				Map[19][11]= '@';
			
				Map[0][12]= '#';
				Map[1][12]= '~';
				Map[2][12]= '4';
				Map[3][12]= '~';
				Map[4][12]= ' ';
				Map[5][12]= '#';
				Map[6][12]= ' ';
				Map[7][12]= ' ';
				Map[8][12]= ' ';
				Map[9][12]= '@';
				Map[10][12]= '@';
				Map[11][12]= '@';
				Map[12][12]= '@';
				Map[13][12]= '@';
				Map[14][12]= '~';
				Map[15][12]= '@';
				Map[16][12]= ' ';
				Map[17][12]= ' ';
				Map[18][12]= ' ';
				Map[19][12]= '@';
			
				Map[0][13]= '#';
				Map[1][13]= '~';
				Map[2][13]= ' ';
				Map[3][13]= '~';
				Map[4][13]= ' ';
				Map[5][13]= '#';
				Map[6][13]= ' ';
				Map[7][13]= '#';
				Map[8][13]= ' ';
				Map[9][13]= '~';
				Map[10][13]= '~';
				Map[11][13]= '~';
				Map[12][13]= '~';
				Map[13][13]= '~';
				Map[14][13]= '~';
				Map[15][13]= '@';
				Map[16][13]= '@';
				Map[17][13]= '@';
				Map[18][13]= '@';
				Map[19][13]= '@';
			
				Map[0][14]= '#';
				Map[1][14]= '~';
				Map[2][14]= ' ';
				Map[3][14]= '~';
				Map[4][14]= ' ';
				Map[5][14]= '#';
				Map[6][14]= ' ';
				Map[7][14]= '#';
				Map[8][14]= ' ';
				Map[9][14]= '~';
				Map[10][14]= ' ';
				Map[11][14]= ' ';
				Map[12][14]= ' ';
				Map[13][14]= ' ';
				Map[14][14]= ' ';
				Map[15][14]= ' ';
				Map[16][14]= ' ';
				Map[17][14]= ' ';
				Map[18][14]= ' ';
				Map[19][14]= ' ';
			
				Map[0][15]= '~';
				Map[1][15]= '~';
				Map[2][15]= ' ';
				Map[3][15]= ' ';
				Map[4][15]= ' ';
				Map[5][15]= ' ';
				Map[6][15]= ' ';
				Map[7][15]= '#';
				Map[8][15]= ' ';
				Map[9][15]= '~';
				Map[10][15]= ' ';
				Map[11][15]= '#';
				Map[12][15]= '#';
				Map[13][15]= '#';
				Map[14][15]= '#';
				Map[15][15]= '#';
				Map[16][15]= '#';
				Map[17][15]= '#';
				Map[18][15]= '#';
				Map[19][15]= ' ';
				
				Map[0][16]= '~';
				Map[1][16]= '~';
				Map[2][16]= '~';
				Map[3][16]= '~';
				Map[4][16]= ' ';
				Map[5][16]= '#';
				Map[6][16]= '#';
				Map[7][16]= '#';
				Map[8][16]= ' ';
				Map[9][16]= '~';
				Map[10][16]= ' ';
				Map[11][16]= ' ';
				Map[12][16]= ' ';
				Map[13][16]= ' ';
				Map[14][16]= '#';
				Map[15][16]= '9';
				Map[16][16]= ' ';
				Map[17][16]= ' ';
				Map[18][16]= ' ';
				Map[19][16]= ' ';
			
				Map[0][17]= '~';
				Map[1][17]= ' ';
				Map[2][17]= ' ';
				Map[3][17]= ' ';
				Map[4][17]= ' ';
				Map[5][17]= '@';
				Map[6][17]= '@';
				Map[7][17]= '#';
				Map[8][17]= ' ';
				Map[9][17]= '~';
				Map[10][17]= '@';
				Map[11][17]= '@';
				Map[12][17]= '@';
				Map[13][17]= ' ';
				Map[14][17]= '~';
				Map[15][17]= '~';
				Map[16][17]= '#';
				Map[17][17]= '#';
				Map[18][17]= '#';
				Map[19][17]= ' ';
			
				Map[0][18]= '~';
				Map[1][18]= '5';
				Map[2][18]= '~';
				Map[3][18]= '~';
				Map[4][18]= '@';
				Map[5][18]= '@';
				Map[6][18]= '@';
				Map[7][18]= '#';
				Map[8][18]= ' ';
				Map[9][18]= '~';
				Map[10][18]= '~';
				Map[11][18]= '~';
				Map[12][18]= '@';
				Map[13][18]= ' ';
				Map[14][18]= '~';
				Map[15][18]= '~';
				Map[16][18]= '#';
				Map[17][18]= ' ';
				Map[18][18]= ' ';
				Map[19][18]= ' ';
			
				Map[0][19]= '~';
				Map[1][19]= '~';
				Map[2][19]= '~';
				Map[3][19]= '~';
				Map[4][19]= '@';
				Map[5][19]= '@';
				Map[6][19]= '0';
				Map[7][19]= ' ';
				Map[8][19]= ' ';
				Map[9][19]= ' ';
				Map[10][19]= ' ';
				Map[11][19]= ' ';
				Map[12][19]= ' ';
				Map[13][19]= ' ';
				Map[14][19]= '~';
				Map[15][19]= '~';
				Map[16][19]= '#';
				Map[17][19]= '+';
				Map[18][19]= '@';
				Map[19][19]= '@';
		}
				
		void print_map()
{
				for(int x=0;x<=19;x++)
				{
					
					for(int y=0;y<=19;y++)
					{
						Map[x][y];
			HANDLE r=GetStdHandle(STD_OUTPUT_HANDLE); 
			if(Map[x][y]=='@')
			{
				SetConsoleTextAttribute (r,136);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='~')
			{
				SetConsoleTextAttribute (r,153);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='#')
			{
				SetConsoleTextAttribute (r,34);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]==' ')
			{
				SetConsoleTextAttribute (r,238);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='*')
			{
				SetConsoleTextAttribute (r,68);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='0')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='1')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='2')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='3')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='4')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='5')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='6')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='7')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='8')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='9')
			{
				SetConsoleTextAttribute (r,85);
				cout<<Map[x][y];
				cout<<"  ";
			}
			if(Map[x][y]=='+')
			{
				SetConsoleTextAttribute (r,255);
				cout<<Map[x][y];
				cout<<"  ";
			}
					}
		cout<<endl;
		setConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		

				}
}

		
		void banner(){

			system("cls");
			
			cout << "  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\ \n";
		    cout << " ( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )\n";
		    cout << "  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ < \n";
		    cout << "  /\\_/\\      ________  _______   ___      ___ _______   ___       ________  ________  _______   ________          /\\_/\\ \n";
		    cout << " ( o.o )    |\\   ___ \\|\\  ___ \\ |\\  \\    /  /|\\  ___ \\ |\\  \\     |\\   __  \\|\\   __  \\|\\  ___ \\ |\\   __  \\        ( o.o )\n";
		    cout << "  > ^ <     \\ \\  \\_|\\ \\ \\   __/|\\ \\  \\  /  / | \\   __/|\\ \\  \\    \\ \\  \\\\  \\ \\  \\|\\  \\ \\   __/|\\ \\  \\\\  \\          > ^ < \n";
		    cout << "  /\\_/\\      \\ \\  \\ \\\\ \\ \\  \\_|/_\\ \\  \\/  / / \\ \\  \\_|/_\\ \\  \\    \\ \\  \\\\\\  \\ \\   ____\\ \\  \\_|/_\\ \\   _  _\\       /\\_/\\ \n";
		    cout << " ( o.o )      \\ \\  \\_\\\\ \\ \\  \\_|_\\ \\ \\    / /   \\ \\  \\_\\|\\ \\  \\____\\ \\  \\\\\\  \\ \\  \\___|\\ \\  \\_\\|\\ \\  \\\\  \\|      ( o.o )\n";
		    cout << "  > ^ <        \\ \\_______\\ \\_______\\ \\__/ /     \\ \\_______\\ \\_______\\ \\_______\\ \\__\\    \\ \\_______\\ \\__\\\\ _\\      > ^ < \n";
		    cout << "  /\\_/\\         \\|_______|\\|_______|\\|__|/       \\|_______|\\|_______|\\|_______|\\|__|     \\|_______|\\|__|\\|__|     /\\_/\\ \n";
		    cout << " ( o.o )                                                                                                         ( o.o )\n";
		    cout << "  > ^ <                                                                                                           > ^ < \n";
		    cout << "  /\\_/\\                                                                                                           /\\_/\\ \n";
		    cout << " ( o.o )     ___  ________   ________ ________                                                                   ( o.o )\n";
		    cout << "  > ^ <     |\\  \\|\\   ___  \\|\\  _____\\\\   __  \\                                                                   > ^ < \n";
		    cout << "  /\\_/\\     \\ \\  \\ \\  \\\\ \\  \\ \\  \\__/\\ \\  \\|\\  \\                                                                  /\\_/\\ \n";
		    cout << " ( o.o )     \\ \\  \\ \\  \\\\ \\  \\ \\   __\\\\ \\  \\\\  \\                                                                 ( o.o )\n";
		    cout << "  > ^ <       \\ \\  \\ \\  \\\\ \\  \\ \\  \\_| \\ \\  \\\\  \\                                                                 > ^ < \n";
		    cout << "  /\\_/\\        \\ \\__\\ \\__\\\\ \\__\\ \\__\\   \\ \\_______\\                                                               /\\_/\\ \n";
		    cout << " ( o.o )        \\|__|\\|__| \\|__|\\|__|    \\|_______|                                                              ( o.o )\n";
		    cout << "  > ^ <                                                                                                           > ^ < \n";
		    cout << "  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\ \n";
		    cout << " ( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )\n";
		    cout << "  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <   \n";
		}
		
		void game(){
			game_status = true;
			do{
				do{
					system("cls");
					print_map();					
					cout << endl;
					cout << endl << "\t\tpress W to move up\tpress S to move down";
			        cout << endl << "\t\tpress A to move left\tpress D to move right";
			        cout << endl << "\t\tpress Q to quit";
			        cout << endl;
			        cout << endl << "\t\ttouch the PURPLE box to enter a quiz!";
			        cout << endl << "\t\ttouch WHITE box to win!";
			        cout << endl << "\t\tEnter Your Move(you are the RED box): ";
			        
			        direction[50] = {0};
			        count = 0;
			        cin.getline(direction, 50);
			        for(int i = 0; direction[i] != '\0'; i++){
			        	count++;
					}
					if(count != 1){
						cout << endl << "please enter one character only ";
						system("pause");
					}
				}while(count != 1);
				
				direction[0] = toupper(direction[0]);
				
				switch(direction[0]){
					case 'W':{
						move_up();
						break;
					}
					
					case 'S':{
						move_down();
						break;
					}
					
					case 'A':{
						move_left();
						break;
					}
					
					case 'D':{
						move_right();
						break;
					}
					
					case 'Q':{
						dont_play = 0;
						do{
							do{
								cout << endl << "are you sure you want to return to main manu?    Your answer: ";
								
								direction[50] = {0};
						        count = 0;
						        cin.getline(direction, 50);
						        for(int i = 0; direction[i] != '\0'; i++){
						        	count++;
								}
								
								if(count != 1){
									cout << endl << "please enter one character only...";
									system("pause");
									system("cls");
								}
							}while(count != 1);
								
							direction[0] = toupper(direction[0]);
							if(direction[0] == 'Y'){
								cout << endl << "you will leave the game and go back to main manu" << endl;
								system("pause");
								dont_play = 1;
							}else if(direction[0] == 'N'){
								cout << endl << "game continue..." << endl;
								system("pause");
								break;
							}else{
								cout << endl << "invalid input, Y for Yes and N for No only" << endl;
								system("pause");
							}
						}while(dont_play != 1);
	
						break;
					}
					
					default:{
						cout << endl << "invalid direction inputed" << endl;
						system("pause");
						break;
					}
				}
			}while(temp != '+' && dont_play != 1); //|| dont_play != 1
			if(temp == '+'){
				system("cls");
				cout << "congratulation, you win the game";
				system("pause");
				system("cls");
			}		
		}
		
		int check_obstacle(){
			if(temp == '~' || temp == '@' || temp == '#'){
				return 0;
			}
			return 1;
		}
		
		void move_up(){
			temp = Map[x_position - 1][y_position];
			if(x_position - 1 < 0){
				cout << endl << "you cannot move outside the boundary" << endl;
				system("pause");
			}else{
				check = check_obstacle();
				if(check == 1){
					Map[x_position - 1][y_position] = '*';
					Map[x_position][y_position] = ' ';
					x_position--;
				}else{
					cout << endl << "you cannot move into obstacles!!\t";
					system("pause");
				}
			}	
		}
		
		void move_down(){
			temp = Map[x_position + 1][y_position];
			if(x_position + 1 > 19){
				cout << endl << "you cannot move outside boundary" << endl;
				system("pause");
			}else{
				check = check_obstacle();
				if(check == 1){
					Map[x_position + 1][y_position] = '*';
					Map[x_position][y_position] = ' ';
					x_position++;
				}else{
					cout << endl << "you cannot move into obstacles!!\t";
					system("pause");
				}
			}			
		}
		
		void move_left(){
			temp = Map[x_position][y_position - 1];
			if(y_position - 1 < 0){
				cout << endl << "you cannot move outside boundary" << endl;
				system("pause");
			}else{
				check = check_obstacle();
				if(check == 1){
					Map[x_position][y_position - 1] = '*';
					Map[x_position][y_position] = ' ';
					y_position--;
				}else{
					cout << endl << "you cannot move into obstacles!!\t";
					system("pause");
				}
			}		
		}
		
		void move_right(){
			temp = Map[x_position][y_position + 1];
			if(y_position + 1 > 19){
				cout << endl << "you cannot move outside boundary" << endl;
				system("pause");
			}else{
				check = check_obstacle();
				if(check == 1){
					Map[x_position][y_position + 1] = '*';
					Map[x_position][y_position] = ' ';
					y_position++;
				}else{
					cout << endl << "you cannot move into obstacles!!\t";
					system("pause");
				}
			}		
		}
		
		void scoreboard(){
			cout << endl << "this is the score board";
		}
		
		void developer_team(){
			cout << endl << "this is the developer team";
		}
				
};

int main(int argc, char** argv) {

	char name[50] = {0};
	char gender[50] = {0};
	char ex[50] = {0};
	int count = 0;
	
	do{
		name[50] = {0};
		cout << endl << "welcome to our game, please enter your name here: ";
		cin.getline(name, 50);
		if(name[0] == '\0'){
			cout << endl << "your name cannot be empty";
		}
	}while(name[0] == '\0');
	
	do{
		do{	
			gender[50] = {0};
			count = 0;
			cout << endl << "please enter your gender here: ";
			cin.getline(gender, 50);
			for(int i = 0; gender[i] != '\0'; i++){
				count++;
			}
			if(count != 1){
				cout <<endl << "please enter one character only";
			}
		}while(count != 1);
		
		gender[0] = toupper(gender[0]);
		if(gender[0] == 'M'){
			cout << endl << "Hello! Mr." << name << ". Welcome to our game!!" << endl;
		}else if(gender[0] == 'F'){
			cout << endl << "hellow! Ms." << name << ". Welcome to our game!!" << endl;
		}else {
			cout << endl << "please enter male(M) or female(F) only ";
		}
	}while(gender[0] != 'M' && gender[0] != 'F');
	system("pause");
	player love;
	
	char choice;
	
	do{		
		do{
			love.banner();
			cout<<"\t\t1. Journey into our maze"<<endl;
			cout<<"\t\t2. View Scoreboard"<<endl;
			cout<<"\t\t3. Meet the team"<<endl;
			cout<<"\t\t4. Exit"<<endl;
			cout<<endl;
			cout<<"\t\tChoice: ";
			cin >> choice;
			cin.ignore();
			switch(choice){
				case '1':{
					cout << endl << "you are entering the game...";
					system("pause");
					system("cls");
					love.game();
					break;
				}
				
				case '2':{
					cout << endl << "you are entering the scoreboard...";
					system("pause");
					system("cls");
					love.scoreboard();
					break;
				}
				
				case '3':{
					cout << endl << "you are entering the developer info tap...";
					system("pause");
					system("cls");
					love.developer_team();
					break;
				}
				
				case '4':{
					if(!love.get_game_status()){
						cout << endl << "yuo have not yet played our game :( ";
					}
					do{
						do{
							ex[50] = {0};
							count = 0;
							
							cout << endl << "are you sure you want to exit the game? ";
							cout << endl << "Enter your choice here, Yes(Y) or No(N): ";
							cin.getline(ex, 50);
							
							for(int i = 0; ex[i] != '\0'; i++){
								count++;
							}
							if(count != 1){
								cout << endl << "please enter one character only " << endl;
								system("pause");
								system("cls");
							}
						}while(count != 1);
						
						ex[0] = toupper(ex[0]);
						if(ex[0] == 'Y'){
							cout << endl << "See you in the future..." << endl;
							system("pause");
							exit(0);
						}else if(ex[0] == 'N'){
							cout << endl << "I know you wouldn't abandon me : )...returing to the game..." << endl;
							system("pause");
						}else{
							cout << endl << "invalid chice, please enter Y for exit and N for staying " << endl;
							system("pause");
							system("cls");
						}
					}while(ex[0] != 'Y' && ex[0] != 'N');
					break;
				}
				
				default:{
					cout << endl << "invalid choice, please try again: " << endl;
					break;
				}
			}
		}while(choice != '4');
	}while(true);
	return 0;
}




