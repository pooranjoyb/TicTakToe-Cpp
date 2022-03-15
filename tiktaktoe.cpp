#include <iostream>
#include <conio.h>
#include<stdlib.h>
using namespace std;;
void gameboard();
void tictactow();
int maingame1();
int maingame2();
void map1();
void map2();
int playerturn();
int flag, button,draw=0;
char box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};


void gameboard()
{

    char box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    cout << "     |     |     " << endl;
    cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;

    cout << "     |     |     " << endl;
}

void map1(char x)
{

    box[x] = 'X';
    cout << "     |     |     " << endl;
    cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;

    cout << "     |     |     " << endl;
}

void map2(char x)
{

    box[x] = 'O';
    cout << "     |     |     " << endl;
    cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;

    cout << "     |     |     " << endl;
}
int maingame1()
{
    int ind;

    cout << "Player 1 turn " << endl;
l1:
    cout << "\nChoose numbers between 1 to 9 to mark your position in the game board : ";
    cin >> ind;
    system("CLS");
    if(ind==1,2,3,4,5,6,7,8,9)
    {

        switch (ind)
        {
        case 1:map1(ind);break;
        case 2:map1(ind);break;
        case 3:map1(ind);break;
        case 4:map1(ind);break;
        case 5:map1(ind);break;
        case 6:map1(ind);break;
        case 7:map1(ind);break;
        case 8:map1(ind);break;
        case 9:map1(ind);break;
        }

    
    }
    else
    {
        cout<<"\nInvalid input ! \n";
        gameboard();
        goto l1;
    }
    flag = 1;
    return 0;
}

int maingame2()
{
    int ind;

    cout << "Player 2 turn " << endl;
l1:
    cout << "\nChoose numbers between 1 to 9 to mark your position in the game board : ";
    cin >> ind;
    system("CLS");
    if (ind==1,2,3,4,5,6,7,8,9)

    {
        switch (ind)
        {
        case 1:map2(ind);break;
        case 2:map2(ind);break;
        case 3:map2(ind);break;
        case 4:map2(ind);break;
        case 5:map2(ind);break;
        case 6:map2(ind);break;
        case 7:map2(ind);break;
        case 8:map2(ind);break;
        case 9:map2(ind);break;
        }
    }
    else
    {
        cout<<"\nInvalid input ! \n";
        gameboard();
        goto l1;  
    }
    flag = 0;
    return 0;
}
int playerturn()
{
    if (flag == 1)
    {
        maingame2();
        {

            if (box[1] == box[2] && box[3] == box[2])
            {
                cout << "Player 2 WINS ! \n";
                button = -1;
                draw=1; 
            }
            else if (box[4] == box[5] && box[6] == box[5])
            {

                cout << "Player 2 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[7] == box[8] && box[8] == box[9])
            {

                cout << "Player 2 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[1] == box[4] && box[4] == box[7])
            {

                cout << "Player 2 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[2] == box[5] && box[5] == box[8])
            {

                cout << "Player 2 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[3] == box[6] && box[6] == box[9])
            {

                cout << "Player 2 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[1] == box[5] && box[5] == box[9])
            {

                cout << "Player 2 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[3] == box[5] && box[5] == box[7])
            {

                cout << "Player 2 WINS! \n";
                button = -1;
                draw=1; 
            }
        }
    }

    else 
    {
        maingame1();
        {

            if (box[1] == box[2] && box[3] == box[2])
            {
                cout << "Player 1 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[4] == box[5] && box[6] == box[5])
            {

                cout << "Player 1 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[7] == box[8] && box[8] == box[9])
            {

                cout << "Player 1 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[1] == box[4] && box[4] == box[7])
            {

                cout << "Player 1 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[2] == box[5] && box[5] == box[8])
            {

                cout << "Player 1 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[3] == box[6] && box[6] == box[9])
            {

                cout << "Player 1 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[1] == box[5] && box[5] == box[9])
            {

                cout << "Player 1 WINS! \n";
                button = -1;
                draw=1; 
            }
            else if (box[3] == box[5] && box[5] == box[7])
            {

                cout << "Player 1 WINS! \n";
                button = -1;
                draw=1; 
            }
        }
    }
    return 0;
}

void tictaktoe()
{
    int ch;
    char playch;
    cout << "Welcome to Tik - Tak - Toe \n";
    cout << "Press 1 to choose 'X' or 2 to choose 'O' : ";
    char box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    cin >> ch;
    system("CLS");
    if (ch == 1)
    {
       
        cout << "You have choosen 'X' !\nYou are Player 1 " << endl;
        cout << "\nLets Begin ! \n" << endl;
        gameboard();
        maingame1();
        for (int i = 0; i < 8; i++)
        {
            if (button == -1)
            {
               cout << "Thanks for Playing the game\nBuilt by Pooranjoy Bhattacharya Version : 1.0\n " << endl;
                    
            }
            else
            playerturn();
        }            
       
        if (draw==0)
        {
            cout<<"\nGAME DRAW ! "<<endl;
        }
    }
    else if( ch == 2)
    {
        cout << "You have choosen 'O' !\nYou are Player 2 \n"
             << endl;
        cout << "\nLets Begin ! \n"
             << endl;

        gameboard();
        maingame2();
        for (int i = 0; i < 8; i++)
        {
            if (button==-1)
            {
              cout << "Thanks for Playing the game\nBuilt by Pooranjoy Bhattacharya Version : 1.0\n " << endl;
            }
            else
            playerturn();
        }
        if (draw==0)
        {
            cout<<"\nGAME DRAW ! "<<endl;
        }
    }
    else
    {
        cout<<"\nINVALID INPUT !\n";
        cout << "\nThanks for Playing the game\nBuilt by Pooranjoy Bhattacharya Version : 1.0\n " << endl;
        
    }
}

int main()
{
    char choice;
    tictaktoe();
    system("PAUSE");
    return 0;
    
}