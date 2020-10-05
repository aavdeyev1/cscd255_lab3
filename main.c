#include <stdio.h>
#include "lab3.h"

const double DISTANCE = 100.0;

// need clang -7 -pthread -lm -o main cscd255lab2.c lab3.c

// go one at a time.

int main()
{
  double winningTime = 15.00;

  winningTime = readWinningTime();
  
  double mps = calcMetersPerSecond(DISTANCE, winningTime);
  double fps = calcFeetPerSecond(winningTime);
  double kph = calculateKillmeterPerHour(DISTANCE, winningTime, 60);
  double mph = calcMilesPerHour(winningTime, 0.00062137121212121);

  displayResults(fps, kph, mph, mps);
  displayTimeToRunMile(mph);

  double hundredYards = calcTime100Yards(fps);
  displayHundredYardsTime(hundredYards);
  



}// end main
