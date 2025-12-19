#include <stdio.h>

int main() {
    int seats[5][5];     
    int i, j, r, c;

    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            seats[i][j] = 0;
        }sdfghjikolp;'
		'
    }

    while(1) {
        printf("\n---------------------------------------\n");
        printf("           MOVIE TICKET BOOKING        \n");
        printf("---------------------------------------\n");
        printf(" 0 = Available   1 = Booked\n");

        
        printf("\n    SCREEN THIS SIDE\n");
        for(i = 0; i < 5; i++) {
            for(j = 0; j < 5; j++) {
                printf(" %d", seats[i][j]);
            }
            printf("\n");
        }

        
        printf("\nEnter Row (0-4): ");
        scanf("%d", &r);
        printf("Enter Column (0-4): ");
        scanf("%d", &c);

        
        if(r < 0 || r > 4 || c < 0 || c > 4) {
            printf("\nInvalid seat position! Try again.\n");
        }
        else if(seats[r][c] == 0) {
            seats[r][c] = 1;
            printf("\nSeat Booked Successfully!\n");
        }
        else {
            printf("\nSorry! Seat Already Booked.\n");
        }

        int choice;
        printf("\nDo you want to book another seat? (1-Yes / 0-No): ");
        scanf("%d", &choice);
        if(choice == 0)
            break;
    }

    printf("\nThank you for Booking! Enjoy the movie ????\n");
    return 0;
}