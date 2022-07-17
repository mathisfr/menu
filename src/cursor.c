#include <stdio.h>
#include <conio.h>

#include "menuData.h"
#include "menu.h"

#include "cursorData.h"

void drawCursor(int cursor, char menu[MENU_SIZE][MENU_SIZE_ITEM]){
    int i;
    for(i = 0; i < MENU_SIZE; i++){
        if(i == cursor){
            cprintf("-> ");
        }else{
            cprintf("   ");
        }
        cprintf("%s\n", menu[i]);
    }
}

void setCursorPosition(int* cursor, char touch){
    if(touch == up){
        *cursor = *cursor - 1;
    }

    if(touch == down){
        *cursor = *cursor + 1;
    }

    if(*cursor == CURSOR_MIN){
        *cursor = CURSOR_MIN;
    }else if(*cursor < CURSOR_MIN){
        *cursor = CURSOR_MAX;
    }
            
    if(*cursor == CURSOR_MAX){
        *cursor = CURSOR_MAX;
    }else if(*cursor > CURSOR_MAX){
        *cursor = CURSOR_MIN;
    }
}