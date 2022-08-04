#include<stdio.h>
#include<stdlib.h>

//Functions declarations
void student_detail();
void print_detail();
void print_book();
void borrow();
void add_book();

//Global variables
int stud_id, counter_for_book=5;
char stud_name[20], stud_programme[20];
char name[8][20]={
                   "R D sharma",
                   "Rs agarwal",
                   "Science",
                   "Let us C",
                   "Operating"
                 };
// counter_for_book=5;

void main(){
	int choice,option;
	printf("*************** Welcome to Christ Library ***************\n\n");
    while(1){
    	printf("-------- Main Menu --------\n");
    	printf("\n1. Student Check-in\n2. Admin Login\n3. Exit Library\n\n");
    	printf("---------------------------");
	    printf("\nSelect option: ");
	    scanf("%d",&option);
	    system("cls");
	    
	    switch(option){
	    	case 1:
	    		//Student Check-in code
	    		while(option==1){
	    			printf("-------- Student Menu --------\n\n");
	    			printf("1  Add Student Details \n");
				    printf("2. Display Student Detail  \n");
				    printf("3. Display books \n");
				    printf("4. Borrow a book \n");
				    printf("5. Check-out \n\n");
				    printf("------------------------------\n");
				    printf("Enter choice: ");
				    scanf("%d",&choice);
				    switch(choice)
				    {
				        case 1: 
							student_detail();
				        	break;
				        case 2: 
							print_detail();
				        	break;
				        case 3: 
							print_book();
				        	break;
				        case 4: 
							borrow();
				        	break;
				        case 5:
							system("cls"); 
							option=0;
				        	break;
						default:
							system("cls"); 
							printf("\nInvalid choice.\n\n");
				    }
				} //end of srudent menu
				break;
			case 2:
	    		//Admin Login code
	    		while(option==2){
	    			printf("--------- Admin Menu ---------\n\n");
	    			printf("1  Add Books \n");
				    printf("2. Display books \n");
				    printf("3. Exit \n\n");
				    printf("------------------------------\n");
				    printf("Enter choice: ");
				    scanf("%d",&choice);
				    switch(choice)
				    {
				        case 1: 
							add_book();
				        	break;
				        case 2: 
				        	print_book();
				        	break;
				        case 3:
							system("cls"); 
							option=0;
				        	break;
						default:
							system("cls"); 
							printf("\nInvalid choice.\n\n");
					}
				}
				break;
			case 3:
				system("cls");
				printf("Thank You!");
				exit(1);
				break;
			default:
				printf("\nInvalid option.\n");
		} //end of outer switch
	}
}

//Function Definitions
void student_detail()
{
    printf("Enter Student name: ");
    scanf("%s",stud_name);
    printf("\nEnter Student ID: ");
    scanf("%d",&stud_id);
    printf("\n Enter the programme Enrolled: ");
    scanf("%s",stud_programme);
}

void print_detail()
{
    printf(" Name - %s \n",stud_name);
    printf(" Id - %d \n",stud_id);
    printf(" Programme - %s \n", stud_programme);
}

void print_book()
{
	system("cls");
    int i;
    for(i=0 ;i<counter_for_book ;i++)
		printf("%d  %s\n",i, name[i]);
	printf("\n\n");
}

void borrow()
{
	system("cls");
    int id;
    printf("\n Enter the Id of the book: ");
    scanf("%d",&id);
    printf( " book is %s",name[id]);
}

void add_book()
{
    printf(" \n Enter the book you want to insert: ");
    scanf("%s",name[counter_for_book]);
    counter_for_book++;
}
