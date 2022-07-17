#include "stdio.h"
#include "menuData.h"
#include <conio.h>

void checkPositionCursor(int cursor, char menu[MENU_SIZE][MENU_SIZE_ITEM]){
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