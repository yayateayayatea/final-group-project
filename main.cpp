
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

class player{
private:
    string name;
    bool game_status = false;
    char gender = NULL;
    char ex = NULL;
    char map[20][20];
    char direction = NULL;
    char tmp = NULL;
    int choice = NULL;
    int x_position = 6; // example for initial location;
    int y_position = 0; //star from the corner;

public:
    player(): map{
    {"###"},
    {"###"},
    {"###"}
    } {};

    void set_name(const string &name){
        this->name = name;
    }
    string get_name(){
        return name;
    }

    void set_gender(const char &gender){
        this->gender = gender;
    }
    char get_gender(){
        return gender;
    }

    void banner(){
        while(true){
            system("cls");
            cout << "##### this is the banner, ... believe me";
            cout << endl << endl << "1 - Enter the game";
            cout << endl << endl << "2 - See the scoreboard";
            cout << endl << endl << "3 - See the developer team";
            cout << endl << endl << "4 - Exit";
            cout << endl << endl << endl << endl << "please choose an option: ";
            cin >> choice;

            switch(choice){
                case 1: {
                    game();
                    break;
                }
                case 2:{
                    scoreboard();
                    break;
                }
                case 3: {
                    developer_team();
                    break;
                }
                case 4: {
                    if(game_status == false) {
                        cout << "You haven play our game :( ";
                    }
                    cout << endl << "Are you sure you want to exit? ";
                    ex = _getch();
                    if(ex == 'Y' || ex == 'y'){
                        exit(0);
                    }
                    break;
                }
            }
        }
    }

    void game(){
        system("cls");
        cout << map;
        cout << endl << "press W to move up\tpress S to move down";
        cout << endl << "press A to move left\tpress D to move right";
        cout << endl << "press Q to quit";
        cout << endl << "touch YELLOW box to enter quiz!";
        cout << endl << "touch PURPLE box to win!";
        cout << endl << "Enter Your Move(you are the RED box): ";
        direction = _getch();
        toupper(direction);

        switch(direction) {
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
                while(true){
                    cout << endl << "are your sure you want to quit the game? ";
                        ex = _getch();
                        tolower(ex);
                        switch(ex){
                            case 'y':{
                                banner();
                            }
                            case 'n':{
                                game();
                            }
                            default:{
                                cout << endl << "invalid input, please try again: ";
                            }
                        }
                }
            }
        }
    }

    void scoreboard(){}

    void developer_team() {
        system("cls");
        cout << "Team members: ";
        cout << endl << "Gordon - flowchart design";
        system("Pause");
        system("start ./team_pic.pdf");
    }

    void move_up() {
        tmp = map[x_position][y_position + 1];
        if(check_obstacle(tmp)){
            map[x_position][y_position] = ' ';
            map[x_position][y_position + 1] = '*';
            y_position++;
            game();
        }else {
            cout << endl << "you cannot enter obstacles!!";
            game();
        }
    }

    void move_down() {
        tmp = map[x_position][y_position - 1];
        if(check_obstacle(tmp)){
            map[x_position][y_position] = ' ';
            map[x_position][y_position - 1] = '*';
            y_position--;
            game();
        }else {
            cout << endl << "you cannot enter obstacles!!";
            game();
        }
    }

    void move_left() {
        tmp = map[x_position - 1][y_position];
        if(check_obstacle(tmp)){
            map[x_position][y_position] = ' ';
            map[x_position - 1][y_position] = '*';
            x_position--;
            game();
        }else {
            cout << endl << "you cannot enter obstacles!!";
            game();
        }
    }

    void move_right() {
        tmp = map[x_position + 1][y_position];
        if(check_obstacle(tmp)){
            map[x_position][y_position] = ' ';
            map[x_position + 1][y_position] = '*';
            x_position++;
            game();
        }else {
            cout << endl << "you cannot enter obstacles!!";
            game();
        }
    }

    bool check_obstacle(char &tmp) {
        switch(tmp) {
            case '+': {
                win();
            }
            case '1': {
                quiz1();
            }
            case '2': {
                quiz2();
            }
            case '3': {
                quiz3();
            }
            case '4': {
                quiz4();
            }
            case '5': {
                quiz5();
            }
            case '6': {
                quiz6();
            }
            case ' ': {
                return true;
            }
            default: {
                return false;
            }
        }
    }

};

int main(){

    player rock;

    string name;
    char gender;

    cout << "welcome to our game";
    cout << endl << "before we start the game, please enter your name: ";
    cin >> name;
    rock.set_name(name);

    cout << "what is your gender: ";
    while(true){

        gender = _getch();
        toupper(gender);

        switch(gender){
            case 'M':{
                cout << endl << "welcome Mr." << name;
                break;
            }
            case 'F':{
                cout << endl << "welcome Ms." << name;
                break;
            }
            default:{
                cout << endl << "invalid gender, please enter your gender again: ";
                continue;
            }
        }
        break;
    }
    rock.set_gender(gender);
    system("Pause");

    rock.banner();

    return 0;
}

    }

    void banner(){
        while(true){
            system("cls");
            cout << "##### this is the banner, ... believe me";
            cout << endl << endl << "1 - Enter the game";
            cout << endl << endl << "2 - See the scoreboard";
            cout << endl << endl << "3 - See the developer team";
            cout << endl << endl << "4 - Exit";
            cout << endl << endl << endl << endl << "please choose an option: ";
            cin >> choice;

            switch(choice){
                case 1: {
                    game();
                    break;
                }
                case 2:{
                    scoreboard();
                    break;
                }
                case 3: {
                    developer_team();
                    break;
                }
                case 4: {
                    if(game_status == false) {
                        cout << "You haven play our game :( ";
                    }
                    cout << endl << "Are you sure you want to exit? ";
                    ex = _getch();
                    if(ex == 'Y' || ex == 'y'){
                        exit(0);
                    }
                    break;
                }
            }
        }
    }

    void game(){
        system("cls");
        cout << map;
        cout << endl << "press W to move up\tpress S to move down";
        cout << endl << "press A to move left\tpress D to move right";
        cout << endl << "press Q to quit";
        cout << endl << "touch YELLOW box to enter quiz!";
        cout << endl << "touch PURPLE box to win!";
        cout << endl << "Enter Your Move(you are the RED box): ";
        direction = _getch();
        toupper(direction);

        switch(direction) {
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
            case 'Q'{
              whiel(true){
                  cout << endl << "are your sure you want to quit the game? ";
                  ex = _getch();
                  tolower(ex);
                  switch(ex){
                      case 'y':{
                         banner();
                      }
                      case 'n':{
                          game();
                      }
                      default:{
                          cout << endl << "invalid input, please try again: ";
                      }
                  }
               }
            }
        }
    }

    void scoreboard(){}

    void developer_team() {
        system("cls");
        cout << "Team members: ";
        cout << endl << "Gordon - floochart design";
        system("Pause");
        system("start ./team_pic.pdf");
    }

    void move_up(){}

    void move_down(){}

    void move_left(){}

    void move_right(){}

};

int main(){

    player rock;

    string name;
    char gender;

    cout << "welcome to our game";
    cout << endl << "before we start the game, please enter your name: ";
    cin >> name;
    rock.set_name(name);

    cout << "what is your gender: ";
    while(true){

        gender = _getch();
        toupper(gender);

        switch(gender){
            case 'M':{
                cout << endl << "welcome Mr." << name;
                break;
            }
            case 'F':{
                cout << endl << "welcome Ms." << name;
                break;
            }
            default:{
                cout << endl << "invalid gender, please enter your gender again: ";
                continue;
            }
        }
        break;
    }
    rock.set_gender(gender);
    system("Pause");

    rock.banner();

    return 0;
}
