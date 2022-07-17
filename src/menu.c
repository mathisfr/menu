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

char up = 'z';
char down = 's';
char choice = 'e';
