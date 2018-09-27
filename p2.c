//
//  p2.c
//  assignment2
//
//  Created by Daniel on 9/26/18.
//  Copyright © 2018 Daniel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int numberOfPlayers = 4, bats, hits;
    int x;
    float individualAvg = 0, hitAvg = 0, batAvg = 0, overallAvg = 0;
    char c;
    
    
    printf("Welcome to the Red Sox batting Analysis\n\n");
    
    printf("This program will calculate the average for %i Red Sox baseball players after you have entered the at bats and hits for each player.\n", numberOfPlayers);
    
    for (x = 1; x <= numberOfPlayers; x++) {
        
        printf("\nEnter the number of at bats for baseball player #%i: ", x);
        scanf("%i", &bats);
        while ( (c = getchar() != '\n') && c != EOF);
        
        printf("Enter the number of hits for baseball player #%i: ", x);
        scanf("%i", &hits);
        while ( (c = getchar() != '\n') && c != EOF);
        
        individualAvg = (float) hits / bats;
        
        printf("*** The batting average for baseball player #%i is %.3f \n", x, individualAvg);
        
        hitAvg = hitAvg + hits;
        batAvg = batAvg + bats;
        
    }
    
    overallAvg = hitAvg / batAvg;
    
    printf("\n\n*** The overall running batting average for the Red Sox is %.3f\n\n", overallAvg);
    
    printf("Thanks for using the Red Sox batting Analysis program.\n");
    
    return 0;
}
