#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

//Functions declarations
void student_detail();
void print_detail();
void print_book();
void borrow();
void add_book();
void admin_login();

//Global variables
int stud_id, counter_for_book=5;
int admin=0;
char stud_name[20];
int book_id[8] = {100,101,102,103,104};
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
	    		student_detail();
	    		system("cls");
	    		//Student Check-in code
	    		while(option==1){
	    			printf("-------- Student Menu --------\n\n");
				    printf("1. Display Student Detail  \n");
				    printf("2. Display books \n");
				    printf("3. Borrow a book \n");
				    printf("4. Check-out \n\n");
				    printf("------------------------------\n");
				    printf("Enter choice: ");
				    scanf("%d",&choice);
				    switch(choice)
				    {
				        case 1: 
				        	system("cls"); 
							print_detail();
				        	break;
				        case 2:
							system("cls"); 
							printf("Available books...\n\n");
							print_book();
				        	break;
				        case 3: 
				        	system("cls");
				        	printf("Which book do you want to borrow?\n\n");
				        	print_book();
				        	printf("------------------------------\n");
							borrow();
				        	break;
				        case 4:
							system("cls"); 
							option=0;
				        	break;
						default:
							system("cls"); 
							printf("\nInvalid choice.\n\n");
				    }
				} //end of student menu
				break;
			case 2:
	    		//Admin Login code
	    		admin_login();
	    		if(admin==1){
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
				        	system("cls"); 
							add_book();
				        	break;
				        case 2:
				        	system("cls");
							printf("Available books...\n\n"); 
				        	print_book();
				        	break;
				        case 3:
				        	admin=0;
							system("cls"); 
							option=0;
				        	break;
						default:
							system("cls"); 
							printf("\nInvalid choice.\n\n");
						}
					}
				}
	    		else{
	    			system("cls"); 
					printf("Oops! Incorrect Password.\n\n");
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
}

void print_detail()
{
    printf(" Name - %s \n",stud_name);
    printf(" Id - %d \n\n",stud_id);
}

void print_book()
{
    int i;
    for(i=100 ;i<(counter_for_book+100) ;i++)
		printf("\t%d  %s\n",i, name[i-100]);
	printf("\n\n");
}

void borrow()
{
	int flag = 0;
    int id, i;
	printf("\nEnter the Id of the book: ");
    scanf("%d",&id);
    for(i = 100; i <= 109; i++){
    	if(book_id[i-100] == id)
    		flag = 1;
	}
	if(flag == 1){
		printf( "You have successfully borrowed the book: %s\n\n",name[id-100]);
	}
	else{
		system("cls");
		printf("Incorrect Book ID. Please enter the correct book Id\n\n");
	}
    
}

void add_book()
{
    printf(" \n Enter the book you want to insert: ");
    scanf("%s",name[counter_for_book]);
    book_id[counter_for_book] = 100 + counter_for_book;
    counter_for_book++;
}

void admin_login(){
	char pass[6] = "admin";
	char password[6];
	int result;
	printf("Enter the password: ");
	scanf(" %s", &password);
	result = strcmp(pass,password);
	if (result==0)
		admin=1;
}
