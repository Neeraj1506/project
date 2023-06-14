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
* FILENAME...... struct_demo.c
* DATE CREATED.. 31-08-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 31-08-22		Description:    Structure demonstration
*   MODIFIED:   	Rev	Author	Date 01-09-22		Description 
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
#include <stdio.h>
#include <stdlib.h>

struct student *create_s(void);
int show(struct student *stu);
int create_enum(void);
int create_ary_structure(void);

typedef struct student{ 
    int roll_no;
    int mobile;
    char *name;
    }record;
    
union employee{
    int age;
    int mobile;
    }emp1;
    
record *call; 
record array[];
/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	31-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{
    int choice = 0;
    //struct student stu2 = {1, 9987, "Neeraj"};    
    
    while(1){
    
        printf("\nEnter Your Choice: \n\t1. Create And Show Data Of Structure Created \n\t2. Arrays Of Strtucture. \n\t3. Enumeration. \n\t0. Exit()\n");
        scanf("%d", &choice);
        
        switch (choice){ 
            case 1:
                call = create_s();                                              //pointer to function
                show(call);
                break;
            case 2:
                create_ary_structure();
                break;
                
            case 3:
                create_enum();
                break;
                   
            case 0:
                return 0;
                   
            default:
                printf("\n Invalid Option.\n");
                
        }
        
   }
   return 0;
}  

/*******************************************************************************
 Function Name - 	struct student *create_s(void)						
 
 @Argument1 - void
 @Argument2 - 
 
 Return Val - pointer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	31-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/           
struct student *create_s(void)
{
    int count = 0;
    record stu1;
    record  *stuptr = &stu1;
    char str[20];
    
    printf("\nEnter Data For Student ");
    printf("\nEnter Roll Number: ");
    scanf("%d", &stu1.roll_no);
    
    printf("\nEnter Mobile Number: ");
    scanf("%d", &stu1.mobile);
    
    printf("\nEnter Name: ");
    scanf("%s", str);
    
    stu1.name = str;
    
    
    printf("\n String is %s", str);
    
    return stuptr;
}

/*******************************************************************************
 Function Name - 	int show(struct student *stu)						
 
 @Argument1 - struct student *stu
 @Argument2 - 
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	31-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/   
int show(struct student *stu){

    printf("\nRoll no. is \t\t%d", stu->roll_no);
    printf("\nMobile Number is \t%d", stu->mobile);
    printf("\nName is \t\t%s", stu->name);
    
    return 0;
}

/*******************************************************************************
 Function Name - 	int create_enum(void)
 
 @Argument1 - void
 @Argument2 - 
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	31-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/ 
int create_enum(void){

    int i;
    enum list{monday, tuesday, wednesday, thursday, friday, saturday, sunday }today;
    
   today = 5;
    
    if(today == sunday)
        printf("Holiday\n");
        
    else if(today == saturday)
        printf ("Half working day\n");
        
    else
        printf ("Full working Day\n");
       
   
   return 0;
}

/*******************************************************************************
 Function Name - 	int create_ary_structure()
 
 @Argument1 - void
 @Argument2 - 
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	31-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/ 
int create_ary_structure(void){

    int count = 0;
    int size = 0;
    char str[20];
    
    printf("\nEnter The No. Of Students: \n");
    scanf("%d", &size);
    
    for(count = 1; count <= size; count++){
        
        printf("\nEnter Data For Student %d", count);
        printf("\nEnter Roll Number: ");
        scanf("%d", &array[count].roll_no);
        
        printf("\nEnter Mobile Number: ");
        scanf("%d", &array[count].mobile);
        
        printf("\nEnter Name: ");
        scanf("%s", str);
        
        array[count].name = (char *) malloc(sizeof(char *));
        
        array[count].name = str;
    }
    
    printf("Record Of %d Students Are: \n", size); 
    for(count = 1; count <= size; count++){
        printf("\nRoll no. is \t\t%d", array[count].roll_no);
        printf("\nMobile Number is \t%d", array[count].mobile);
        printf("\nName is \t\t%s", array[count].name);
    }
         
    return 0;
}
   
