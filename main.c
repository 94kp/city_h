/* CITY_H GAME START POINT
 * Description: 
 * This file contains all basic stuff to begin my game with
 * Author:
 * Karan Patil
 */

#include <stdio.h>
#include <curses.h>

void game_start()
{
    // This function should take the program to the actual game program and start the game
}

void game_quit()
{
    // Goodbye message

    printf ("\nThank you for playing City_H\n");
    textcolor("RED");
    printf ("\nThis Game was created by Karan Patil\n");
}

int main()
{
    //Menu for options to start, or quit game to be added here

    int ch;

    while(1)
    {
        printf ("Welcome to City_H\n");

        printf ("\n1. Start Game\n2. Exit Game\n");

        printf ("\n*Select an option from the menu by pressing the number corresponding to that option*\n");

        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                game_start();
                break;
            case 2:
                game_quit();
                return 1;
                break;
            default:
                printf ("\nInvalid Option, Please select either 1 or 2\n");
        }
    }
}