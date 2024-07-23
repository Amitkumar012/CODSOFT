

/////////////////////////        TIC - TAC - TOE - GAME        //////////////////////////








#include<bits/stdc++.h>
using namespace std;

char board[3][3] ;

// function to return the game status check the win rows and column
int checkWin()
{
    if(board[0][0] == board[1][0] && board[1][0] == board[2][0]) //column 1
    {
        return 1;
    }
    else if(board[0][1] == board[1][1] && board[1][1] == board[2][1]) //column 2
    {
        return 1;
    }
    else if(board[0][2] == board[1][2] && board[1][2] == board[2][2]) //column 3
    {
        return 1;
    }
    else if(board[0][0] == board[0][1] && board[0][1] == board[0][2]) //row 1
    {
        return 1;
    }
    else if(board[1][0] == board[1][1] && board[1][1] == board[1][2]) //row 2
    {
        return 1;
    }
    else if(board[2][0] == board[2][1] && board[2][1] == board[2][2]) //row 3
    {
        return 1;
    }
    else if(board[0][0] == board[1][1] && board[1][1] == board[2][2])//right diagonal
    {
        return 1;
    }
    else if(board[2][0] == board[1][1] && board[1][1] == board[0][2])//left diagonal
    {
        return 1;
    }
    else if((board[0][0] != '1' && board[0][1] != '2') && (board[0][2] != '3' && board[1][0] != '4') && 
    (board[1][1] != '5' && board[1][2] != '6') && (board[2][0] != '7' && board[2][1] != '8') && (board[2][2] != '9'))
    //all places visited , game draw none won.
    {
        return 0;
    }
    else
    {
        return -1;
    }

}

//this function will draw the board all positions and players markings
void playBoard()
{
    system("cls");
    cout<<"Player 1 - X\nPlayer 2 - O\n\n";
    //drawing the board
    cout<<"\t         |           |           \n";
    cout<<"\t    "<<board[0][0]<<"    |     "<<board[0][1]<<"     |     "<<board[0][2]<<"     \n";
    cout<<"\t---------|-----------|-----------\n";
    cout<<"\t         |           |           \n";
    cout<<"\t    "<<board[1][0]<<"    |     "<<board[1][1]<<"     |     "<<board[1][2]<<"     \n";
    cout<<"\t---------|-----------|-----------\n";
    cout<<"\t         |           |           \n";
    cout<<"\t    "<<board[2][0]<<"    |     "<<board[2][1]<<"     |     "<<board[2][2]<<"     \n";
    cout<<"\t         |           |           \n";

}

void playerTurn()
{
    int player =1 ,i=-1 ;
    char mark , choice;

    do{
        playBoard();

        player=(player%2) ? 1 : 2;
        cout<<"player "<<player<<" enter the Number ";
        cin>>choice;

        mark = (player == 1)? 'X' : 'O';

        //Marking the positions according to input Choices
        if(choice=='1' && board[0][0] =='1')
        {
            board[0][0]= mark;
        }
        else if(choice=='2' && board[0][1]=='2')
        {
            board[0][1]=mark;
        }
        else if(choice=='3' && board[0][2]=='3')
        {
            board[0][2]=mark;
        }
        else if(choice=='4' && board[1][0]=='4')
        {
            board[1][0]=mark;
        }
        else if(choice=='5' && board[1][1]=='5')
        {
            board[1][1]=mark;
        }
        else if(choice=='6' && board[1][2]=='6')
        {
            board[1][2]=mark;
        }
        else if(choice=='7' && board[2][0]=='7')
        {
            board[2][0]=mark;
        }
        else if(choice=='8' && board[2][1]=='8')
        {
            board[2][1]=mark;
        }
        else if(choice=='9' && board[2][2]=='9')
        {
            board[2][2]=mark;
        }
        else//if Invalid Position is Entered
        {
            cout<<"\tINVALID MOVE! "<<endl;
            player--;
            cin.ignore();
            cin.get();
        }
        i = checkWin();
        player++;

    }
    while(i == -1 );

    playBoard();
    if(i==1)
    {
        cout <<"\tCongratulations Player "<<--player<<" Won!!!!  \n";
    }
    else{
        cout<<"\tGame Draw \n";
    }

}

int main()
{
    cout<<" \t  T I C -- T A C -- T O E -- G A M E \t\n \tPress Enter to start the Game";
    cin.get();
    char repeat='y';
    while(repeat=='y')
    {
        board[0][0] = '1' ;
        board[0][1] = '2' ; 
        board[0][2] = '3' ;
        board[1][0] = '4' ; 
        board[1][1] = '5' ;
        board[1][2] = '6' ; 
        board[2][0] = '7' ;
        board[2][1] = '8' ; 
        board[2][2] = '9' ;
        playerTurn();
        cout<<" Do you Want to play again (y / n) : ";
        cin>>repeat;
    }
    
    return 0;
}
//End