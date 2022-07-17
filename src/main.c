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

    while(1){

        //Clean screan CMD
        clrscr();

        //Welcome message
        welcome();

        //Check and set cursor position
        checkPositionCursor(cursor, menu);

        //Touch varialbe, get char enter by user
        char touch = getch();

        if(touch == up){
            cursor = cursor - 1;
        }

        if(touch == down){
            cursor = cursor + 1;
        }

        if(cursor == CURSOR_MIN){
            cursor = CURSOR_MIN;
        }else if(cursor < CURSOR_MIN){
            cursor = CURSOR_MAX;
        }
        
        if(cursor == CURSOR_MAX){
            cursor = CURSOR_MAX;
        }else if(cursor > CURSOR_MAX){
            cursor = CURSOR_MIN;
        }

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