/******************************************************************************\
*           Copyright (C) 1999 Spectross Digital System (P) Ltd.
*                           All Rights Reserved
*------------------------------------------------------------------------------
* SPECTROSS DIGITAL SYSTEMS PVT. LTD,
* 4,SIRI FORT ROAD,
* NEW DELHI-110049,
* INDIA.
*
* www.spectross.com
* support@spectross.com
* Ph - 91-11-26264077.
*------------------------------------------------------------------------------
* MODULE NAME... TRAINING
* FILENAME...... queen.c
* DATE CREATED.. 05-09-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 05-09-22 		Description:   8-queen Problem Exercise
*   MODIFIED:   	Rev	Author	Date       Description :   
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2. int isSafe(int board[N][N], int row, int col);
*						3. int put_queen(int board[N][N], int col);
*						4  int display(int board[N][N]);
*						5. 
*\******************************************************************************/
#include <stdio.h>

#define N 4

int isSafe (int chess[N][N], int row, int col);
int manage_queen (int board[N][N], int col);
int display (int board[N][N]);

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main (int argc, char* argv[])
{
    int chess_board[N][N] = {0};
                           
    printf("\n Queen Solution Looks Like: \n\n");
    manage_queen(chess_board, 0);
    display(chess_board);
    
    return 0;
}

/*******************************************************************************
 Function Name - 	int isSafe (int chess[N][N], int row, int col)				
 
 @Argument1 - Integer
 @Argument2 - Integer
 @Argument3 - Integer
 
 Return Val -   Integer
 
 Programmer -   NEERAJ RAWAT	 
 
 Date	-	05/09/2022
 Changes - changes Description (Not applicable to initial release)
 
 *****************************************************************************/

int isSafe (int chess[N][N], int row, int col){
   
    int count_row = 0;
    int count_col = 0;
    
    //checks left side
    for(count_row = 0; count_row < col; count_row++){
        if(chess[row][count_row])
            return 0;
    }
    
    //checks diagonally left upper
    for(count_row = row, count_col = col; count_row >= 0 && count_col >=0; count_row--, count_col--){
        if(chess[count_row][count_col])
            return 0;
    }
     
    //check diagonally left lower      
    for(count_row = row, count_col = col;  count_col >= 0 && count_row < N; count_row++, count_col--){
        if(chess[count_row][count_col])
            return 0;
    }
    return 1;
}

/*******************************************************************************
 Function Name - 	int manage_queen (int board[N][N], int col)			
 
 @Argument1 - Integer
 @Argument2 - Integer
 
 Return Val -   Integer
 
 Programmer -   NEERAJ RAWAT	 
 
 Date	-	05/09/2022
 Changes - changes Description (Not applicable to initial release)
 
 *****************************************************************************/
int manage_queen (int board[N][N], int col){

    int row_loop;
    if(col >= N)
        return 1;
        
    for(row_loop = 0; row_loop < N; row_loop++){
        if(isSafe(board, row_loop, col)){
            board[row_loop][col] = 1;
            
            if(manage_queen(board, col + 1))
                return 1;
            
            board[row_loop][col] = 0;
        }
    }
    return 0;
}       

/*******************************************************************************
 Function Name - int display (int board[N][N])	
 
 @Argument1 - Integer
 @Argument2 - 
 
 Return Val -   Integer
 
 Programmer -   NEERAJ RAWAT	 
 
 Date	-	05/09/2022
 Changes - changes Description (Not applicable to initial release)
 
 *****************************************************************************/ 
int display (int board[N][N]){
    int loop_out = 0;
    int loop_in = 0;
    int count = 1;
    
    for(loop_out = 0; loop_out < N; loop_out++){
        for(loop_in = 0; loop_in < N; loop_in++){
            if(board[loop_out][loop_in] == 1){
                printf("Q%d\t", count);
                count++;
                }
            else
                printf("%d \t", board[loop_out][loop_in]);
        }
        printf("\n\n");
    }
    return 0;
}

  
