#include<stdio.h>
void student_detail();
void print_detail();
void print_book();
void borrow();

int stud_id;
char stud_name[20], stud_programme[20];
char name[5][20]={
                   "R D sharma",
                   "Rs agarwal",
                   "Science",
                   "Let us C",
                   "Operating"
                 };

int main()
{
    int ch;
    int choice=1;
  
    while(choice==1)
    {
    printf("1 for adding student \n");
    printf(" 2 for printing detail of student  \n");
    printf(" 3 for printing available book \n ");
    printf(" 4 for Borrowing the book");
    printf(" 5 for exit");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:  student_detail();
        break;
        case 2: print_detail();
        break;
        case 3: print_book();
        break;
        case 4: borrow();
        break;
        case 5: choice=0;
    
    }
    }
    }



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
    for(i=0 ;i<5 ;i++)
printf("%d  %s\n",i, name[i]);
}

void borrow()
{
    int id;
    printf("\n enter the Id of the book");
    scanf("%d",&id);
    printf( " book is %s",name[id]);
}
