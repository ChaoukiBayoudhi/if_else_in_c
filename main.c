#include <stdio.h>
#include <curses.h>
//#include <conio.h> //for windows platform

int main() {
    int p_player1,p_player2;
    printf("first player proposition : ");
    //p_player1=getch();//get value from keyboard without echo
    scanf("%d",&p_player1);
    printf("second player proposition : ");
    //p_player2=getch();
    scanf("%d",&p_player2);

    if(p_player1==p_player2)
        printf("draw match");
    else
        if(p_player1==0)//caillot
            if(p_player2==1)//papier
                printf("Player 2 win.");
            else
                printf("Player 1 win.");
        else
            if(p_player1==1)//papier
                if(p_player2==0)//
                    printf("Player 1 win.");
                else
                    printf("Player 2 win.");
            else //2: ciseaux
                if(p_player2==1)//papier
                    printf("Player 1 win.");
                else
                    printf("Player 2 win.");



    return 0;
}
