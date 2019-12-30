/*
 * Author: Chris Rangnow
 * Created on August 7, 2017
 * Class: COP1350C Section 01 C++ Programming - Online Plus - 2017 Summer Quarter Term 1
 * 
 * Hockey game statistic application.
 * 
 */

#include <cstdlib>
#include<iomanip>
#include<iostream>


using namespace std;
//To get total points
int totalPoints (string playerArray[5][4])
{ 
    playerArray[0][3] = playerArray[0][1] + playerArray[0][2];
    playerArray[1][3] = playerArray[1][1] + playerArray[1][2];
    playerArray[2][3] = playerArray[2][1] + playerArray[2][2];
    playerArray[3][3] = playerArray[3][1] + playerArray[3][2];
    playerArray[4][3] = playerArray[4][1] + playerArray[4][2];
    
}

int main(int argc, char** argv) 
{    
    string playerArray[5][4];
    char ch;
    string playerNameG;
    string playerNameA;
    
    cout<< "You will be entering the players names from your team." << endl;
    cout<< "Enter a players name" << endl;
    for (int i = 0; i <5; i++)
    {
        cin >> playerArray[i][0];
                
    }
    
    do
    {
        cout << "Select an option to continue, 0 to exit\n 1: Show all players.\n 2: Enter game goals.\n 3: Enter game assists.\n 4: Show game points.\n" << endl;
        cin >> ch;
        
        switch (ch)
        {
            case '0':
                return 0;
                // To show all players entered at the beginning of the program. 
            case '1':
                cout << "All players" << endl;
                for(int i = 0; i < 5 ; i++)
                cout << playerArray[i][0] << endl;
                break;
             
                // To search and enter players goals.
            case '2':
                cout << "Enter players name to enter their goals for the game." << endl;
                cin >> playerNameG;
                {
                    int idx = 0;
                    
                    for(int i=0;i<5;i++) 
                    {
                    if(playerArray[i][0] == playerNameG)
                    {
                    idx = 1;
                    } 
                    }
                    if(idx!= 0) 
                    {
                    cout<<"\n"<<"Enter "<<playerNameG[idx]<< " goals for the game.\n";
                    cin >> playerArray[idx][1];
                    }
                    else
                    {
                        cout << playerNameG <<" is not on your team." << endl;
                    }
                }
                break;
                
                // To search and enter players assists.
            case '3':
                cout << "Enter players name to enter their assists for the game." << endl;
                cin >> playerNameA;
                {
                    int idx = 0;
                    
                    for(int i=0;i<5;i++) 
                    {
                    if(playerArray[i][0] == playerNameA)
                    {
                    idx = 1;
                    } 
                    }
                    if(idx!=0) 
                    {
                    cout<<"\n"<<"Enter "<<playerNameA[idx]<< " assists for the game.\n";
                    cin >> playerArray[idx][2];
                    }
                    else
                    {
                        cout << playerNameA <<" is not on your team." << endl;
                    }
                }
                break;
                
                // To take array and get total points and display on console. 
            case '4':
                int totalPoints();
                
                for (int i = 0; i < 5; i++)
                    {
                        cout << "Name: " <<playerArray[i][0]<< "\t Goals: "<<playerArray[i][1]<< "\t Assists: " << playerArray[i][2] << "\t Total Points: " << playerArray[i][3] << endl;
                    }
               
                
        }
    }
    while (ch != 0);
}

