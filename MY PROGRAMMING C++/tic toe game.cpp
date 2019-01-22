#include <stdio.h>
#include <iostream>

int main()
{

    int i;                                  	 		/* Loop Initialization */
    int player = 0;                     			/* Player Selection */
    int go;                                			/* Square Selection */
    int invalid_input = 0;                 		/* Input Checker */
    int winner = 0;                    			/* Winner Selection */
    int play_again;                   			/* Reset Game Data */
    char board[3][3] =             			/* Main Game Board */
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };


/* Changing Font & Background Color. To see the color menu change the value of "color 71" to "color 0h" */


    /* Printing the Information about the game */
    printf("*******************************************************************************\n");
    printf("******| TIC TAC TOE |******> VERSION : 1.0 <******| DEVELOPED BY, 'ANIK' |*****\n");
    printf("*******************************************************************************\n");



    /*
            "MAIN GAME LOOP"

            This loop turns for 9 times.

            If a winner is found before 9 turns, this loop doesn't need to turn for 9 times.
        Then it will quit by the condition on the loop "winner == 0".

            If a winner is found before 9 turns, then the value of "winner = 0" will be changed to "winner == player".
        Then the condition of the loop will be considered as false and the the loop will be broken.
    */

    for( i = 0; i < 9 && winner == 0; i++)

    {


        /* Printing the "GAME NAME" */
        printf("\n\n");
        printf("\t\t\t***************************\n");
        printf("\t\t\t*****                 *****\n");
        printf("\t\t\t*****>  TIC TAC TOE  <*****\n");
        printf("\t\t\t*****                 *****\n");
        printf("\t\t\t***************************\n");



        /* Printing the "MAIN GAME BOARD" */
        printf("\n\n");
        printf("\t\t\t\t %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
        printf("\t\t\t\t---+---+----\n");
        printf("\t\t\t\t %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
        printf("\t\t\t\t---+---+----\n");
        printf("\t\t\t\t %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);


        player = i % 2 + 1;                 /* Player Selection */


        /*

            "INPUT TAKER LOOP"

            As I want to show the following 'printf' function before taking the input,
        thus I have used do while loop (As it does the work first and then check the condition true or false.
        If it finds the condition is true, then the loop will continue and if false the loop will be broken).

            If the input of player 1 or 2 is incorrect (The input had given before or not in the limit 1-9),
        then the value of 'go' variable will " go = invalid_input; " and thus the conditon will be true.
        So the condition of "do-while" loop will work and it will ask for giving the input again.

        */
        do
        {

            /* Asking for giving input to the players (1/2). */
            printf("\n\n\n\t\t\t********> PLAYER %d <********\n\n\t\t      WHERE DO YOU WANT TO PUT YOUR %c ? \n\n\t\t   PLEASE ENTER THE NUMBER OF THE SQUARE : ", player, (player == 1) ? 'X' : 'O');

            scanf("%d", &go);                               /* Selecting the square where to put/print 'X' or 'O'*/


            if(go == 1)
            {

                if(board[0][0] != 'X' && board[0][0] !=  'O')
                {
                    board[0][0] = (player == 1) ? 'X' : 'O';
                    /* (player == 1) ? 'X' : 'O'; means if player = 1, then it will print 'X' on the board.
                    If player = 2, then it will print 'O' on the board */
                }

                else
                {
                    /* If players give Invalid Input the"INPUT TAKER LOOP" will work and it will ask players for entering the input again. */
                    go = invalid_input;

                    printf("\n\n\t\t**********************************************\n");
                    printf("\t\t*******>  '1' HAS BEEN GIVEN BEFORE  <********\n");
                    printf("\t\t***> PLEASE ENTER ANOTHER NUMBER : (1-9) <****\n");
                    printf("\t\t**********************************************");
                }

            }

            else if(go == 2)
            {

                if(board[0][1] != 'X' && board[0][1] !=  'O')
                {
                    board[0][1] = (player == 1) ? 'X' : 'O';
                }

                else
                {
                    go = invalid_input;

                    printf("\n\n\t\t**********************************************\n");
                    printf("\t\t*******>  '2' HAS BEEN GIVEN BEFORE  <********\n");
                    printf("\t\t***> PLEASE ENTER ANOTHER NUMBER : (1-9) <****\n");
                    printf("\t\t**********************************************");
                }

            }

            else if(go == 3)
            {

                if(board[0][2] != 'X' && board[0][2] !=  'O')
                {
                    board[0][2] = (player == 1) ? 'X' : 'O';
                }

                else
                {
                    go = invalid_input;

                    printf("\n\n\t\t**********************************************\n");
                    printf("\t\t*******>  '3' HAS BEEN GIVEN BEFORE  <********\n");
                    printf("\t\t***> PLEASE ENTER ANOTHER NUMBER : (1-9) <****\n");
                    printf("\t\t**********************************************");
                }

            }

            else if(go == 4)
            {

                if(board[1][0] != 'X' && board[1][0] !=  'O')
                {
                    board[1][0] = (player == 1) ? 'X' : 'O';
                }

                else
                {
                    go = invalid_input;

                    printf("\n\n\t\t**********************************************\n");
                    printf("\t\t*******>  '4' HAS BEEN GIVEN BEFORE  <********\n");
                    printf("\t\t***> PLEASE ENTER ANOTHER NUMBER : (1-9) <****\n");
                    printf("\t\t**********************************************");
                }

            }

            else if(go == 5)
            {

                if(board[1][1] != 'X' && board[1][1] !=  'O')
                {
                    board[1][1] = (player == 1) ? 'X' : 'O';
                }

                else
                {
                    go = invalid_input;

                    printf("\n\n\t\t**********************************************\n");
                    printf("\t\t*******>  '5' HAS BEEN GIVEN BEFORE  <********\n");
                    printf("\t\t***> PLEASE ENTER ANOTHER NUMBER : (1-9) <****\n");
                    printf("\t\t**********************************************");
                }

            }

            else if(go == 6)
            {

                if(board[1][2] != 'X' && board[1][2] !=  'O')
                {
                    board[1][2] = (player == 1) ? 'X' : 'O';
                }

                else
                {
                    go = invalid_input;

                    printf("\n\n\t\t**********************************************\n");
                    printf("\t\t*******>  '6' HAS BEEN GIVEN BEFORE  <********\n");
                    printf("\t\t***> PLEASE ENTER ANOTHER NUMBER : (1-9) <****\n");
                    printf("\t\t**********************************************");
                }

            }

            else if(go == 7)
            {

                if(board[2][0] != 'X' && board[2][0] !=  'O')
                {
                    board[2][0] = (player == 1) ? 'X' : 'O';
                }

                else
                {
                    go = invalid_input;

                    printf("\n\n\t\t**********************************************\n");
                    printf("\t\t*******>  '7' HAS BEEN GIVEN BEFORE  <********\n");
                    printf("\t\t***> PLEASE ENTER ANOTHER NUMBER : (1-9) <****\n");
                    printf("\t\t**********************************************");
                }

            }

            else if(go == 8)
            {

                if(board[2][1] != 'X' && board[2][1] !=  'O')
                {
                    board[2][1] = (player == 1) ? 'X' : 'O';
                }

                else
                {
                    go = invalid_input;

                    printf("\n\n\t\t**********************************************\n");
                    printf("\t\t*******>  '8' HAS BEEN GIVEN BEFORE  <********\n");
                    printf("\t\t***> PLEASE ENTER ANOTHER NUMBER : (1-9) <****\n");
                    printf("\t\t**********************************************");
                }

            }

            else if(go == 9)
            {

                if(board[2][2] != 'X' && board[2][2] !=  'O')
                {
                    board[2][2] = (player == 1) ? 'X' : 'O';
                }

                else
                {
                    go = invalid_input;

                    /* If the input of the user has given before, then the following message will be shown */
                    printf("\n\n\t\t**********************************************\n");
                    printf("\t\t*******>  '9' HAS BEEN GIVEN BEFORE  <********\n");
                    printf("\t\t***> PLEASE ENTER ANOTHER NUMBER : (1-9) <****\n");
                    printf("\t\t**********************************************");
                }

            }


            else
            {
                go = invalid_input;                 /* If go > 9 or go < 1 */


                /* If the input of the user is invalid, then the following message will be shown */
                printf("\n\n\t\t**********************************************\n");
                printf("\t\t************>  WRONG INPUT !!!  <*************\n");
                printf("\t\t*****> PLEASE ENTER VALID INPUT : (1-9) <*****\n");
                printf("\t\t**********************************************");
            }

        }
        while(go == invalid_input);




        /* Winner Checking Condition. A player can win this game in 8 conditions */

        if( (board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
                (board[0][2] == board[1][1] && board[0][2] == board[2][0]) ||
                (board[0][0] == board[0][1] && board[0][0] == board[0][2]) ||
                (board[0][0] == board[1][0] && board[0][0] == board[2][0]) ||
                (board[1][0] == board[1][1] && board[1][0] == board[1][2]) ||
                (board[0][1] == board[1][1] && board[0][1] == board[2][1]) ||
                (board[2][0] == board[2][1] && board[2][0] == board[2][2]) ||
                (board[0][2] == board[1][2] && board[0][2] == board[2][2]) )


            winner = player;                    /* If winner is found ! (Player 1/Player 2) */


    }

    /* Printing the board when the main game loop is terminated */
    printf("\n\n");
    printf("\t\t\t\t %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("\t\t\t\t---+---+---\n");
    printf("\t\t\t\t %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("\t\t\t\t---+---+---\n");
    printf("\t\t\t\t %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);


    if(winner == 0)
    {
        /* If winner is not found */
        printf("\n\n\n");
        printf("\t\t**********************************************\n");
        printf("\t\t*************>  HOW BORING !!!  <*************\n");
        printf("\t\t***********> THIS GAME IS DRAWN ! <***********\n", winner);
        printf("\t\t**********************************************\n");

    }

    else
    {
        /* If winner is found */
        printf("\n\n\n");
        printf("\t\t**********************************************\n");
        printf("\t\t***********                        ***********\n");
		printf("\t\t***********>  CONGRATULATION !!!  <***********\n");
		printf("\t\t***********                        ***********\n");
		printf("\t\t**********************************************\n");
        printf("\t\t******                                  ******\n");
		printf("\t\t******> PLAYER %d, YOU ARE THE WINNER ! <******\n", winner);
		printf("\t\t******                                  ******\n");
        printf("\t\t**********************************************\n");

    }


    /* Asking user if he/she wants to play this again or not */
    printf("\n\n\t\t***> DO YOU WANT TO PLAY THIS GAME AGAIN? <***\n\n\t\t\tPRESS 1 FOR YES OR 2 FOR NO : ");


    scanf("%d", &play_again);


    if(play_again == 1)
    {

/*Reseting previous game data that has been played */
        main();                         /* Calling main function to Restart the game */

    }

    else
    {
        /* Printing the following message if players want to quit the game */
        printf("\n\n\n\t\t**********************************************\n");
        printf("\t\t*******                                *******\n");
        printf("\t\t*******> THANKS FOR PLAYING THIS GAME <*******");
        printf("\n\t\t*******                                *******\n");
        printf("\t\t**********************************************\n\n");

    }


    return 0;

}
