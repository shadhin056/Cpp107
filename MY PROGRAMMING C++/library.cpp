//This programme will be used as a library management system
#include<stdio.h>
#include<string.h>
#include<conio.h>
char absorver[2];           //to absorve garbeg buffered data
//global structure being declared
struct library{
        int id;
        int edition;
        char title[100];
        char author[100];
        char publisher[100];
        char available;
};
struct library book[15];        //max book number is set
//function prototypes
void book_info_entry(int i);
void book_search(int i);
void book_issue(int i);
int main(){
    char choice;
    int num_of_books=0,flag=0;
    while(1){
        printf("Press 1 to input book info\nPress 2 to search for a book\nPress 3 to exit\n");
        choice=getche();
        printf("\n");
        switch(choice){
            case '1' : book_info_entry(num_of_books);
                       num_of_books++;
                       break;
            case '2' : book_search(num_of_books);
                       break;
            default  : flag=1;
                       break;
        }
        if(flag==1)
            return 0;
    }
}
//This function stores the data about new books arrived the library
void book_info_entry(int i){
    if(i<15){
        book[i].id=i+1;
        printf("\nBook ID=%d\n",book[i].id);
        book[i].available=1;
        printf("Please input book title\n");
        gets(book[i].title);
        printf("Please input book edition\n");
        scanf("%d",&book[i].edition);
        printf("Please input book's author\n");
        gets(absorver);
        gets(book[i].author);
        printf("Please input book's publisher\n");
        gets(book[i].publisher);
    }
    else
        printf("Sorry! There is no room for new book\n");
}
//This function searches in the book index of the library

void book_search(int limit){
    char search[100],choice;
    int i,result=1;
    printf("Please enter the book's title you are looking for\n");
    gets(search);
    for(i=0;i<=limit;i++)
        if(strcmp(book[i].title,search)==0){
            printf("The book is listed\n\n");
            if(book[i].available==1){
                printf("The book is available for issue\n\n");
                printf("Press 1 if you want to issue it\nPress any other key to go back to the previous menu\n");
                choice=getche();
                printf("\n");
                switch(choice){
                    case '1' : book_issue(i);
                               break;
                    default  : break;
                }
            }
            else
                printf("Sorry! The book is not available\n\n");
            break;
        }
    else
        printf("The book is not listed\n\n");
}
//This function checks the availability of the book

void book_issue(int i){
        book[i].available=0;
        printf("The book has been issued\n\n");
}
