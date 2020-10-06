#include "lab3.h"



double readWinningTime()
{
    double winningTime = 15.00;
      
    printf("Please enter the winning time of the race: ");
    scanf("%lf", &winningTime);
  return winningTime;

}// end readWinningTime


double calcMetersPerSecond(const double DISTANCE, double winningTime)
{
    
    return DISTANCE/winningTime; //ok because both are doubles
}


double calcFeetPerSecond(double winningTime)
{
    
    return (100.0*3.28084)/winningTime;
}


double calculateKillmeterPerHour(const double DISTANCE, double winningTime, double seconds)
{
    double kph = (DISTANCE/1000.0)/((winningTime/seconds)/60.0);

    return kph;
}


double calcMilesPerHour(double winningTime, double mph_factor)
{
    double mph = (100.0*mph_factor)/((winningTime/60.0)/60.0);

    return mph;
}


void displayResults(double fps, double kph, double mph, double mps)
{
    printf("\nThe person was traveling at a rate of:\n");
    printf("%.2lf  meters per second.\n", mps);
    printf("%.2lf feet per second.\n", fps);
    printf("%.2lf miles per hour.\n", mph);
    printf("%.2lf kilometers per hour.\n \n", kph);

}


void displayTimeToRunMile(double mph)
{
    double mileTimeD = (1.0/mph)*60.0;
    int mileTimeI    = (1.0/mph)*60.0;
    double mileTimeS = (mileTimeD-mileTimeI)*60.0; 

    printf("It would take the runner ");
    printf("%d minutes ", mileTimeI);
    printf("and ");
    printf("%.2lf seconds ", mileTimeS);
    printf("to run a mile. \n");

}


double calcTime100Yards(double fps)
{
    
    return 300.0/fps;
}


void displayHundredYardsTime(double yardsTime)
{
    printf("It would take the runner ");
    printf("%.2lf seconds ", yardsTime);
    printf("to run 100 yards.");

}