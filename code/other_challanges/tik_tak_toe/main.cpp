#include <iostream>
using namespace std;
#include <cstdlib>


const string PLAYER_ONE = "X";
const string PLAYER_TEXT_ONE = "Player One";
const string PLAYER_TWO = "O";
const string PLAYER_TEXT_TWO = "Player Two";
string winner;

string tiktaktoe[3][3] = {
    {" "," "," "},
    {" "," "," "},
    {" "," "," "}
};

// Every possible win (8);
int wins[8][3][2] = {
    {{0,0},{0,1},{0,2}},
    {{1,0},{1,1},{1,2}},
    {{2,0},{2,1},{2,2}},
    {{0,0},{1,0},{2,0}},
    {{0,1},{1,1},{2,1}},
    {{0,2},{1,2},{2,2}},
    {{0,0},{1,1},{2,2}},
    {{0,2},{1,1},{2,0}}
};

void printField(){
    for(int i=0;i<3;i++){
            for(int k=0;k<3;k++){
            cout << " " << tiktaktoe[i][k] << " ";
            if(k!=2){ cout << "|"; }
            }
            if(i!=2){ cout << endl << "-----------" << endl; }
    }
    cout << endl;
}

int checkForWin(){

    string row[3];
    for(int j=0;j<=7;j++){
        row[0] = " "; row[1] = " "; row[2] = " ";
        for(int f=0;f<=2;f++){
            row[f] = tiktaktoe[wins[j][f][0]][wins[j][f][1]];
        }
        if(row[0] == row[1] && row[1] == row[2] && row[0] != " "){
            if(row[0] == PLAYER_ONE){
                winner = PLAYER_TEXT_ONE;
            }else if(row[0] == PLAYER_TWO){
                winner = PLAYER_TEXT_TWO;
            }else{
                return 4;
            }
            return 2;
        }
        
    }
    bool draw = true;
    for(int r=0;r<=2;r++){
        for(int c=0;c<=2;c++){
            if(tiktaktoe[r][c] == " "){
                draw = false;
            }
        }
    }
    if(draw == 1){
        return 3;
    }
    return 0;
}

int setField(string player, int field){
    if (system("CLS")) system("clear");
    int row = 0;
    int col = 0;
    if(field > 0 && field <= 3){
        row = 0;
        col = field;
    }else if(field > 3 && field <= 6){
        row = 1;
        col = field - 3;
    }else if(field > 6 && field <= 9){
        row = 2;
        col = field - 6;
    }else{
        printField();
        cout << endl << " -> Field not found <- " << endl << endl;
        return 1;
    }
        col--;
        if(tiktaktoe[row][col] == " "){
            tiktaktoe[row][col] = player;
            int returner = checkForWin();
            printField();
            return returner;
        }else{
            printField();
            cout << endl << " -> Field already used <- " << endl << endl;
            return 1;
        }
}

int main(){
    printField();
    int field = 0;
    int returner = 0;
    string currentPlayer = "";
    string currentPlayerText = "";
    for(int t=0;t<=9;t++){
        if(t%2 == 0){
            currentPlayer = PLAYER_ONE;
            currentPlayerText = PLAYER_TEXT_ONE;
        }else{
            currentPlayer = PLAYER_TWO;
            currentPlayerText = PLAYER_TEXT_TWO;
        }
        cout << currentPlayerText << ": ";
        cin >> field;
        returner = setField(currentPlayer, field);
        if(returner == 1){ t--; }else if(returner == 0){ continue; }else{ break; }
    }
    if(returner == 2){
        cout << winner << " won the game!";
    }else if(returner == 3){
        cout << "Draw!";
    }else{
        cout << "Closed Game!";
    }

    return 0;
}