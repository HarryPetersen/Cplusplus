#include <iostream>
using namespace std;

void displayboard(char board[3][3]){
    cout << "  1|2|3" << endl;
    for(int i = 0;i<3;i++){
        cout << i+1 << ' ' << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << endl;
        cout << "  -----" << endl;
    }
}

int getrow(){
    int row;
    cout << "Enter the row:";
    cin >> row;
    return row - 1;
}

int getcolumn(){
    int column;
    cout << "Enter the column:";
    cin >> column;
    return column - 1;
}

int isAllowed(int row,int column, char board[3][3]){
    if(board[row][column] == '-'){
        return 1;
    }
    cout << "Invalid Position";
    return 0;
}

int gameEnded(char board[3][3]){
    for(int r = 0; r<3;r++){
        if(board[r][0] == board[r][1] && board[r][1] == board[r][2] && board[r][0] != '-'){
            return 1;
            cout << "1";
        }
    }
    for(int c = 0; c<3; c++){
        if(board[0][c] == board[1][c] && board[1][c] == board[2][c] && board[0][c] != '-'){
            return 1;
        }
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-'){
        return 1;
    }
    if(board[0][3] == board[1][1] && board[1][1] == board[2][0] && board[0][3] != '-'){
        return 1;
    }
    return 0;
}

char changeturn(char currentturn){
    if(currentturn == 'x'){
        cout << "It's o's go!" << endl;
        return 'o';
    }else{
        cout << "It's x's go!" << endl;
        return 'x';
    }
}

int main(){
    char board[3][3] = 
    {
        {'-','-','-'},
        {'-','-','-'},
        {'-','-','-'}
    };
    displayboard(board);
    char turn = 'x';
    int numturns = 0;
    bool inplay = true;

    cout << "x starts!" << endl;
    while(inplay){
        int row = getrow();
        int column = getcolumn();
        if(isAllowed(row,column,board) == 0){
            board[row][column] = turn;
            numturns++;
            displayboard(board);
        }
        if(gameEnded(board) == 1){
            cout << "The winner is " << turn << endl;
            inplay = false;
        }
        if(numturns == 9){
            cout << "The game has ended in a draw" << endl;
            inplay = false;
        }
        turn = changeturn(turn);
    }
    
    
    
    return 0;
}