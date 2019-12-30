#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    char trafficLight;
    char oncomingTraffic;
    char turnSignal;
    
cout << "What color the traffic light is. Red (R), Yellow (Y) or Green (G)." << endl;
cin >> trafficLight;

cout << "Is there oncoming traffic? Yes (Y) or No (N)" << endl;
cin >> oncomingTraffic;

cout << "Is the turn signal currently set to indicate a left turn (L), a right turn (R), or is it off(O)?" << endl;
cin >> turnSignal;

switch(turnSignal)
{
    case 'l':
    case 'L':
        cout << "Turn signal is correct." <<endl;
        break;
    case 'r':
    case 'R':
        cout << "Change your turn signal direction." << endl;
        break;
    case 'o':    
    case 'O':
        cout << "Turn the turn signal on." << endl;
        break;
}

switch(trafficLight)
{
    case'r':
    case 'R':
        cout << "Wait for green to possibly turn" << endl;
        break;
        
    case'y':   
    case 'Y':
        //switch(oncomingTraffic)
        //case 'y':
        //case 'Y':
        //cout << "Do not turn!" << endl;
        //case'n':
        //case 'N':
          //  cout <<"If you hurry you might make it" << endl;
        //break;
        
    case'g':   
    case 'G':
      switch(oncomingTraffic)
        case 'y':
        case'Y':
        cout << "Wait for traffic to pass," << endl;
    case 'n':
    case'N':
        cout << "You can turn" << endl;
        break;
}


return 0;
}

