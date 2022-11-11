/***************************************************************
 *Class:                     CSCI 112                                                                                        *
 *Instructor:               Ronald Burgher                                                                              *
 *Programmer:          Ethan Grant                                                                                    *
 *Project:                  FishFry  Project                                                                               *
 *************************************************************************************************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
// Declare variables

    int waterAdded = 0;
    double tankvolume = 500;
    double ratelost = .1;

    // Get data from users and error trap

        printf("Please enter additional water added per hour: ");
        while (scanf("%d", &waterAdded) != 1 || waterAdded < 0 || waterAdded > 100)
        {
          printf("Invalid Input\nPlease enter additional water added per hour: ");

    // Flush it out
        while (getchar() != '\n');
        }
// Begin Loop to determine the amount of gallons per hour
    for (int hours = 1; hours <= 24; hours++)
    {
        tankvolume = tankvolume * (1-ratelost) + waterAdded;
        printf("The volume is %.2lf gallons after %d hours\n", tankvolume, hours);
// Determine if there was sufficient enough water to keep the fish alive.
        if (tankvolume < 100) {
            printf("Your fish has died after %d hours\n", hours);
            break;
        }
    }
// Error trap if value is too much.
if (tankvolume > 500)
    {
        printf("Your backyard is now a pool.\n");
    }

// If the fish didn't die, declare it alive.
    else if (tankvolume >= 100)
    {
        printf("Your fish has survived!\n");
    }
return 0;
}



 
