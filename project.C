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

    while(1){
    	printf("*************** Welcome to Christ Library ***************\n");
    	printf("\n1. Student checkin\n2. Admin Login\n3. Exit Library\n");
	    printf("\nSelect option: ");
	    scanf("%d",&option);
	    system("cls");
	    
	    switch(option){
	    	case 1:
	    		//Student Checkin code
	    		while(option==1){
	    			printf("1  Add Student Details \n");
				    printf("2. for printing detail of student  \n");
				    printf("3. Display books \n");
				    printf("4. Borrow a book \n");
				    printf("5. Exit \n ");
				    printf("\nEnter choice: ");
				    scanf("%d",&choice);
				    switch(choice)
				    {
				        case 1: student_detail();
				        break;
				        case 2: print_detail();
				        break;
				        case 3: print_book();
				        break;
				        case 4: borrow();
				        break;
				        case 5:
							system("cls"); 
							option=0;
				        	break;
						default:
							system("cls"); 
							printf("\nInvalid choice.\n\n");
				    }
				}
				break;
			case 2:
	    		//Admin Login code
	    		while(option==2){
	    			
				}
				break;
			case 3:
				exit(1);
				break;
			default:
				printf("\nInvalid option.\n");
		} //end of choice switch
	}
}

//Function Definitions
void student_detail()
{
    printf(" Enter the student name ");
    scanf("%s",stud_name);
    printf("\n Enter the student id");
    scanf("%d",&stud_id);
    printf("\n Enter the programme you are enrolled");
    scanf("%s",stud_programme);
}

void print_detail()
{
    printf(" Name - %s \n",stud_name);
    printf(" Id - %d \n",stud_id);
    printf(" Programme - %s \n ", stud_programme);
}

void print_book()
{
    int i;
    for(i=0 ;i<counter_for_book ;i++)
	printf("%d  %s\n",i, name[i]);
}

void borrow()
{
    int id;
    printf("\n enter the Id of the book");
    scanf("%d",&id);
    printf( " book is %s",name[id]);
}

void add_book()
{
    printf(" \n Enter the book you want to insert");
    scanf("%s",name[counter_for_book]);
    counter_for_book++;
}
