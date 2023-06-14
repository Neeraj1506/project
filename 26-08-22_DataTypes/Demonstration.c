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
* FILENAME...... DEMONSTRATE ALL DATATYPES
* DATE CREATED.. 26-08-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 26-08-22		Description:   SHOW AND CHANGE ALL DATATYPES
*   MODIFIED:   	Rev	Author	Date		Description 
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2.
*						3.
*						4. 
*
*
\******************************************************************************/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	26-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
 
 int main(int argc, char *argv[])
 {
        int choice = 0;
        int modifier = 0;
        
        while(1){
            
            printf("Enter your choice 1. Integer 2. Char 3. Float 4. Double 5. Exit()\n");
            scanf("%d", &choice);
            
            switch (choice){
                case 1:
                    while(1){
                    printf("Convert Integer into \n 1. short \n 2. long \n 3. Exit() \n 4. Exit from Program \n");
                    scanf("%d", &modifier);
                    
                    if(modifier == 3)
                        break;
                 
                    switch (modifier){
                        case 1:
                            printf("\n Size of Short Integer is: %ld \n\n", sizeof(short int));
                            printf("\n Range of Short Integer is: %d to %d \n\n", SHRT_MIN, SHRT_MAX);
                            break;
                            
                        case 2:
                            printf("\n Size of Long Integer is: %ld \n\n", sizeof(long int));
                            printf("\n Range of Long Integer is: %ld to %ld \n\n", LONG_MIN, LONG_MAX);
                            break;

                        case 4:
                            return;
                            
                        default:
                            printf("Invalid Option");
                        
                      }
                   
                    } 
                    break; // this break is used for case 1
                    
                case 2:
                    
                    while(1){
                        printf("Enter your choice: \n1. Show Size of Char \n2. Show Range of Signed Char \
                                \n3. Show range of Unsigned Char \n4. Exit() \n5. Exit from Program \n");
                        scanf("%d", &modifier);
                        
                        if(modifier == 4)
                            break;
                        
                        switch (modifier){
                            case 1:
                                printf("\n Size of Char is: %ld \n\n", sizeof(char));
                                break;
                             
                            case 2:
                                printf("\n Range of Signed Char is: %d to %d\n\n", SCHAR_MIN, SCHAR_MAX);
                                break;
                                
                            case 3:
                                printf("\n Range of Unsigned Char is: 0 to %d \n\n", UCHAR_MAX);
                                break;
                                
                            case 5:
                                return;
                                
                            default:
                                printf("Invalid Option");
                        }
                    } 
                    break;
                    
                 case 3:
                    printf("\n Size of Float is %ld \n\n", sizeof(float));
                    break;
                        
                 case 4: 
                    while(1){
                        printf("\nConvert Double into \n 1. Show Size/Range of Double \n 2. long Double \n 3. Exit() \n 4. Exit from Program \n");
                        scanf("%d", &modifier);
                        
                        if(modifier == 3)
                            break;
                        
                        switch (modifier){
                            case 1:
                                printf("\n Size of Double is: %ld \n\n", sizeof(double));
                                printf("\n Range of Short Double is: %ld to %ld \n\n", LONG_MIN, LONG_MAX);
                                break;
                                
                            case 2:
                                printf("\n Size of Long Double is: %ld \n\n", sizeof(long double));
                                printf("\n Range of Long Double is: %ld to %ld \n\n", LONG_MIN, LONG_MAX);
                                break;
                                
                            case 4:
                                return; 
                                
                            default:
                                printf("Invalid Option");  
                        }     
                    } 
                    break;
                    
                    case 5:
                        goto end;
                        
                    default:
                        printf("Invalid Option");
                }
           
    }
    end : 
        exit(0);
    
    return 0;
 }
