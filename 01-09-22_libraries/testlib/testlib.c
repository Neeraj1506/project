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
* FILENAME...... main.c
* DATE CREATED.. 01-09-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 01-09-22		Description:   making library 
*   MODIFIED:   	Rev	Author	Date 		Description 
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2. int create_s(void
*						3. int create_ary_structure()
*						4. int create_enum(void);
*
*\******************************************************************************/
#include "declare.h"

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	01-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(){

    printf("We Are Making Connection.....\n");
    
    int arg = first_func("Hello");
    
    printf("Yes It is working...\n");
    
    sec_func(arg);
              
    return 0;
}
    
