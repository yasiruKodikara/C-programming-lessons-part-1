#include <stdio.h>

#include <string.h>

typedef struct date {
    int year;
    int month;
}handed_date;



struct book {
    char author[10];
    char title[50];
    float price;
    char publisher[20];
    int qty;
    struct date handed_date;

};

void checkBook(struct book books[],int count,struct book *sel_book) {
    char author[10];
    char title[50];




    printf("Enter title:");
    scanf("%s",title);

    printf("Enter author:");
    scanf("%s",author);

    for (int i=0; i<count; i++) {
        if (!(strcmp(author,books[i].author)&&strcmp(title,books[i].title))) {
            *sel_book = books[i];
        }
    }

}

void purchase(struct book *sel_book) {
    int copies=0;
    float total_cost = 0;

    printf("How many copies?");
    scanf("%d",&copies);

    if (copies<=sel_book->qty) {
        total_cost = copies * sel_book->price;
        printf("Total Cost:%.2f",total_cost);
        sel_book->qty-=copies;
    }else {
        printf("\nRequired number of copies is not available!");
    }



}


int main(void) {


    while (1) {
        int id;
        int count=20;
        struct book sel_book;
        struct book books[] = {
            {"J.K.Rowling", "Harry Potter", 25.50, "Bloomsbury", 10, {1997, 6}},
            {"GeorgeOrwell", "1984", 18.75, "Secker", 15, {1949, 6}},
            {"DanBrown", "Da Vinci Code", 22.99, "Doubleday", 8, {2003, 4}},
            {"PauloCoelho", "The Alchemist", 15.99, "Harper", 20, {1988, 5}},
            {"JRR_Tolkien", "The Hobbit", 30.00, "AllenUnwin", 12, {1937, 9}},
            {"StephenKing", "The Shining", 27.50, "Doubleday", 7, {1977, 1}},
            {"AgathaChr", "Murder Orient", 12.50, "Collins", 25, {1939, 6}},
            {"MarkTwain", "Tom Sawyer", 14.99, "Chatto", 18, {1876, 5}},
            {"JaneAusten", "PridePrejudice", 19.50, "Whitehall", 14, {1813, 1}},
            {"LeoTolstoy", "War and Peace", 35.75, "Penguin", 6, {1869, 1}},
            {"FScott", "Great Gatsby", 16.99, "Scribner", 11, {1925, 4}},
            {"Hemingway", "Old Man Sea", 13.75, "Scribner", 17, {1952, 9}},
            {"ArthurDoyle", "Sherlock Holmes", 21.50, "WardLock", 9, {1892, 10}},
            {"VictorHugo", "Les Miserables", 40.00, "A&CBlack", 5, {1862, 4}},
            {"CharlesDick", "Oliver Twist", 17.25, "Richard", 13, {1838, 2}},
            {"HermanMel", "Moby Dick", 28.99, "Harper", 4, {1851, 10}},
            {"SunTzu", "Art of War", 11.99, "Oxford", 30, {2000, 1}},
            {"YuvalNoah", "Sapiens", 29.95, "HarperCollins", 16, {2011, 6}},
            {"RobertK", "Clean Code", 45.00, "Prentice", 10, {2008, 8}},
            {"AndrewNg", "Machine Learning", 55.50, "MITPress", 3, {2018, 3}}
        };
        printf("\nEnter id number:");
        scanf("%d",&id);

        if (id==-1) {
            break;
        }else {
            checkBook(books,count,&sel_book);

            printf("\n--- Book Details ---\n");

            printf("Author    : %s\n", sel_book.author);
            printf("Title     : %s\n", sel_book.title);
            printf("Price     : %.2f\n", sel_book.price);
            printf("Publisher : %s\n", sel_book.publisher);
            printf("Quantity  : %d\n", sel_book.qty);

            printf("Handed Date: %d/%d\n",
                   sel_book.handed_date.month,
                   sel_book.handed_date.year);

            purchase(&sel_book);
        }

    }



    return 0;
}