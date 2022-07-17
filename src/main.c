#include <stdio.h>
#include <stdlib.h>
#include <conio.c>

#include "menuData.h"
#include "menu.h"

int main (void){
    int cursor = CURSOR_MIN;

    while(1){

        clrscr();
        welcome();

        int i;
        for(i = 0; i < MENU_SIZE; i++){
            if(i == cursor){
                cprintf("-> ");
            }else{
                cprintf("   ");
            }
            cprintf("%s\n", menu[i]);
        }

        touch = getch();

        if(touch == up){
            cursor = cursor - 1;
        }

        if(touch == down){
            cursor = cursor + 1;
        }

        if(cursor < CURSOR_MIN){
            cursor = CURSOR_MIN;
        }
        
        if(cursor > CURSOR_MAX){
            cursor = CURSOR_MAX;
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