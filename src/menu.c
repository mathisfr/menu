#include <stdio.h>

#include "menuData.h"
#include "menu.h" 

void welcome(){
    printf("------------------------\n");
    printf("--       WELCOME      --\n");
    printf("------------------------\n");
    printf("z:Up | s:Down | e:Select\n");
    printf("------------------------\n");
}

//Currently: MENU_SIZE = 2, change in menuData.h MENU_SIZE for more length
char menu[MENU_SIZE][MENU_SIZE_ITEM] = {"Google", "Exit"};

char up = 'z';
char down = 's';
char choice = 'e';

char touch = ' ';
