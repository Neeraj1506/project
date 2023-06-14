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
* FILENAME...... arr_exercise.c
* DATE CREATED.. 30-08-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 29-08-22		Description:    Exercise to get product of elements of different arrays
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
*\******************************************************************************/
#include <stdio.h>

int vector_fun(int arr1[], int arr2[], int size);

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	30-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{
    while(1){
        int size1 = 0;
        int count1 = 0;
        int count2 = 0;
        int choice = 0;
        int array_one[] = {0};
        int array_two[] = {0};
        
        printf("\nEnter Your Choice To 1. Get Vector 0. Exit() \n");
        scanf("%d", &choice);
        
        switch (choice){
            case 1:
                printf("\nEnter Size For Array: \n");
                scanf("%d", &size1);
                array_one[size1];
                
                printf("\nEnter %d Elements For Array 1: ", size1);
                for(count1; count1 < size1; count1++){
                    scanf("%d", &array_one[count1]);
                }
                
                printf("\nYour Array1 is : [ ");
                for(count1 = 0; count1 < size1; count1++){
                    printf("%d ", array_one[count1]);
                } 
                printf("]");
                 
                printf("\nEnter %d Elements For Array 2: ", size1);
                for(count2; count2 < size1; count2++){
                    scanf("%d", &array_two[count2]);
                }
                
                printf("Your Array2 is : [ ");
                for(count2 = 0; count2 < size1; count2++){
                    printf("%d ", array_two[count2]);
                }
                printf("]");
                printf("\n");
                
                printf("\nSum Of The Product Array is: %d", vector_fun(array_one, array_two, size1));
                
                break;
                
            case 0:
                return 0; 
                
            default:
                printf("\nInvalid Option");
         } 
    }   
    return 0;
} 

/*******************************************************************************
 Function Name - 	int vector_fun(int arr1[], int arr2[], int size)				
 
 @Argument1 - Integer
 @Argument2 - Integer
 @Argument3 - Integer
 Return Val -   Integer
 
 Programmer -   NEERAJ RAWAT	 
 
 Date	-	30/08/2022
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int vector_fun(int arr1[], int arr2[], int size){
    int count = 0;
    int sum = 0;
    int array_three[] = {0};
    
    printf("\nProduct Of Those Array : [");
    for(count = 0; count < size; count++){
        array_three[count] = arr1[count] * arr2[count];
        printf("%d ", array_three[count]);
    }
    printf("]");
    
    for(count = 0; count < size; count++){
        sum += array_three[count];
    }
    
    return sum;
}







      
