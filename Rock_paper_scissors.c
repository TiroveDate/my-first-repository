#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define win "You win!"
#define lose "You lose..."
#define draw "Draw game"
#define a "rock"
#define b "paper"
#define c "scissors"

int getRand(int max, int min) {
    return min + (int)(rand() % (max - min + 1));
}

int main() {
    int pla, com;
    srand(time(NULL));
    printf("A game of rock-paper-scissors with the computer!\n");
    printf("rock > 1    paper > 2   scissors > 3\n>");
    scanf("%d", &pla);
    com = getRand(3, 1);
    //printf("%d", com);    test

   if (pla == 1) {
    printf("player: "a "\n");
    if (com == 2) {
        printf("com: "b "\n"lose);
    } else if (com == 3) {
        printf("com: "c "\n"win);
    } else {
        printf("com: "a "\n"draw);
    }
    
   } else if (pla == 2) {
    printf("player: "b "\n");
    if (com == 3) {
        printf("com: "c "\n"lose);
    } else if (com == 1) {
        printf("com: "a "\n"win);
    } else {
        printf("com: "b "\n"draw);
    }

   } else if (pla == 3) {
    printf("player: "c "\n");
    if (com == 1) {
        printf("com: "a "\n"lose);
    } else if (com == 2) {
        printf("com: "b "\n"win);
    } else {
        printf("com :"c "\n"draw);
    }

   } else {
    printf("Wrong number");
   }
   return 0;
}