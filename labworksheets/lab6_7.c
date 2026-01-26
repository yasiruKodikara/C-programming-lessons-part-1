#include <stdio.h>
#include <string.h>
#define len 20

struct date {
    int month;
    int year;
};
struct book {
    char author[50];
    char title[50];
    char publisher[50];
    int quantity;
    int price;
    struct date date;

};

//optimize the program by reducing number of loops to 1 loop
int main() {
    struct book Books[len]={
        {"F. Scott Fitzgerald", "The Great Gatsby", "Scribner", 5, 15, {4, 1925}},
        {"George Orwell", "1984", "Secker & Warburg", 12, 10, {6, 1949}},
        {"J.R.R. Tolkien", "The Hobbit", "George Allen", 8, 25, {9, 1937}},
        {"Harper Lee", "To Kill a Mockingbird", "J.B. Lippincott", 10, 12, {7, 1960}},
        {"Gabriel Garcia Marquez", "One Hundred Years of Solitude", "Harper & Row", 4, 18, {5, 1967}},
        {"Jane Austen", "Pride and Prejudice", "T. Egerton", 15, 8, {1, 1813}},
        {"J.D. Salinger", "The Catcher in the Rye", "Little, Brown", 7, 11, {7, 1951}},
        {"Mark Twain", "Adventures of Huckleberry Finn", "Chatto & Windus", 6, 9, {12, 1884}},
        {"Ernest Hemingway", "The Old Man and the Sea", "Scribner", 9, 14, {9, 1952}},
        {"Leo Tolstoy", "War and Peace", "The Russian Messenger", 3, 30, {1, 1869}},
        {"Aldous Huxley", "Brave New World", "Chatto & Windus", 11, 13, {1, 1932}},
        {"Ray Bradbury", "Fahrenheit 451", "Ballantine Books", 14, 12, {10, 1953}},
        {"Virginia Woolf", "To the Lighthouse", "Hogarth Press", 5, 16, {5, 1927}},
        {"James Joyce", "Ulysses", "Sylvia Beach", 2, 40, {2, 1922}},
        {"Mary Shelley", "Frankenstein", "Lackington", 8, 7, {1, 1818}},
        {"Herman Melville", "Moby-Dick", "Richard Bentley", 4, 22, {10, 1851}},
        {"Charles Dickens", "Great Expectations", "Chapman & Hall", 10, 11, {8, 1861}},
        {"Toni Morrison", "Beloved", "Alfred A. Knopf", 6, 15, {9, 1987}},
        {"Frank Herbert", "Dune", "Chilton Books", 20, 20, {8, 1965}},
        {"Agatha Christie", "Murder on the Orient Express", "Collins Crime Club", 18, 9, {1, 1934}}

    };
    char title[50];
    char author[50];
    int book_check_count = 0;
    int number_of_copies = 0;
    int qty_sel_book = 0;
    int price_sel_book = 0;
    int index_of_selected_book = 0;

    printf("Enter the title of the book");
    scanf(" %[^\n]s",title);
    printf("Enter the author of the book");
    scanf(" %[^\n]s",author);

    for (int i = 0;i<len;i++) {
        if (strcmp(Books[i].title,title)==0 && strcmp(Books[i].author,author)==0) {

            book_check_count++;


        }
    }
    printf("There are %d books ",book_check_count);
    if (book_check_count > 0) {
        printf("The Book is available!\n");
        for (int i = 0;i<len;i++) {
            if (strcmp(Books[i].title,title)==0 && strcmp(Books[i].author,author)==0) {

                printf("Author:%s\tTitle:%s\tPublisher:%s\tquantity:%d\tPrice:%d\tMonth:%d\tYear:%d\n", Books[i].author, Books[i].title, Books[i].publisher,
                       Books[i].quantity, Books[i].price, Books[i].date.month, Books[i].date.year);
                qty_sel_book = Books[i].quantity;
                price_sel_book = Books[i].price;
                index_of_selected_book = i;


            }

        }
        book_check_count = 0;

        printf("How many copies do you want?");
        scanf("%d",&number_of_copies);

        if (number_of_copies<=qty_sel_book) {
            printf("The total cost  = $%d",number_of_copies*price_sel_book);
            Books[index_of_selected_book].quantity -= number_of_copies;
            printf("remaining quantity is %d\n",Books[index_of_selected_book].quantity);

        }else {
            printf("Not in stock");
        }

    }
    return 0;
}