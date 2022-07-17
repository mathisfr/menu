#include <stdio.h>
#include <stdlib.h>
#include <conio.c>

//All info for menu
#include "menuData.h"
#include "menu.h"

//All info for cursor
#include "cursorData.h"
#include "cursor.h"


int main (void){

    //Create cursor
    int cursor = CURSOR_MIN;

    //Currently: MENU_SIZE = 2, change in menuData.h MENU_SIZE for more length
    char menu[MENU_SIZE][MENU_SIZE_ITEM] = {"Google", "Exit"};

    //Touch variable, get char enter by user
    char touch;

    while(1){

        //Clean screan CMD
        clrscr();

        //Welcome message
        welcome();

        //Draw cursor first position
        drawCursor(cursor, menu);

        //Touch variable, get char enter by user
        touch = getch();

        //Set position cursor (Pass by reference)
        setCursorPosition(&cursor, touch);

        if(touch == choice){
            // Google
            if(cursor == 0){
                system("start \"Chrome\" \"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\" --app=\"https://www.google.com/\"");
            }
            // Exit
            if(cursor == 1){
                break;
            }
        }

    }

    return 0;
}