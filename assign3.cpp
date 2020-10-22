/**
* Catapult Calculator Assignment #2
* Randy Randall
*/

#include <iostream>
#include <cmath>
using namespace std;
  
int main()
{
    const double 
    PI = 3.141592654, 
    g = 32.17405, 
    DEGREERAD = 45.0 * (3.14159265359 / 180), 
    WALL = 75.0;

        //Input for distance of catapult from wall
        double catapultDistance;
        cout << "Enter distance from wall: ";
        cin >> catapultDistance;

        //Input for velocity 
        double velocity;
        cout << "Enter velocity: ";
        cin >> velocity;

        
        //Calculates height over time
        double heightOverTime = catapultDistance / (velocity * cos(DEGREERAD));


        //Range
        double range = (pow(velocity,2) * sin(2 * DEGREERAD)) / g;

        
        //Veritcal displacement
        double verticalDisplacement = velocity * heightOverTime * sin(DEGREERAD) - 0.5 * g * pow(heightOverTime, 2);

 
        //Provides output of result
        if (range >= catapultDistance && verticalDisplacement <= WALL)
        {
            cout << "Hits the wall!" << endl;
            return (0);
        }
        else if (range < catapultDistance || (range < catapultDistance + 150 && range > catapultDistance))
        {
            cout << "Too short!" << endl;
        }
        else if (range >= catapultDistance + 150 && range <= catapultDistance + 200)
        {
            cout << "Hit!" << endl;
        }
        else
        {
            cout << "Too far!" << endl;
        }

        cout << "Rock traveled " << range << " feet." << endl;

        return (0);
}
