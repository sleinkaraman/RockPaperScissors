//
//  main.c
//  Rock Paper Scissor in C
//
//  Created by Selin Karaman on 30.06.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    // 0==Rock, 1==Paper, 2==Scissors
    
    int userMove, computerMove;
    
    while(1){
        
        printf(" 0 for Rock, \n 1 for Paper,\n 2 for Scissors\n 9 for Exit\n\n ");
        printf("Enter Your Move:");
        scanf("%d",&userMove);
        
        if (userMove > 2 && userMove!=9) {
            printf("\n\nInvalid Action.\n\n");
            continue;
        }
        
        if(userMove==9){
            exit(1);
        }
        
        computerMove = rand() % 3;
                
                printf("\n Computer Move is: %d\n", computerMove);

                if (userMove == 0 && computerMove == 1) {
                    printf("\n You Lose! Paper Beats Rock.\n\n");
                }
                else if (userMove == 0 && computerMove == 2) {
                    printf("\n You Win! Rock Beats Scissors.\n\n");
                }
                else if (userMove == 1 && computerMove == 0) {
                    printf("\n You Win! Paper Beats Rock.\n\n");
                }
                else if (userMove == 1 && computerMove == 2) {
                    printf("\n You Lose! Scissors Beat Paper.\n\n");
                }
                else if (userMove == 2 && computerMove == 0) {
                    printf("\n You Lose! Rock Beats Scissors.\n\n");
                }
                else if (userMove == 2 && computerMove == 1) {
                    printf("\n You Win! Scissors Beat Paper.\n\n");
                }
                else if (userMove == computerMove) {
                    printf("\n This is a draw, try again.\n\n");
                }
            }
            return 0;
        }
