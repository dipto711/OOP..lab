
public class Book {
    static String genre = "Fiction";
    static int count = 0;

    private String title;
    private String author;
    private int year;

    public Book(String title, String author, int year) {
        this.title = title;
        this.author = author;
        this.year = year;
        count++;
    }

    public void displayBookDetails() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Year: " + year);
        System.out.println("Genre: " + genre + "\n");
    }

    public static void displayTotalBooks() {
        System.out.println("Total number of books: " + count);
    }

    public static void main(String[] args) {

        Book book1 = new Book("To Kill a Mockingbird", "Harper Lee", 1960);
        Book book2 = new Book("1984", "George Orwell", 1949);
        Book book3 = new Book("The Great Gatsby", "F. Scott Fitzgerald", 1925);


        book1.displayBookDetails();
        book2.displayBookDetails();
        book3.displayBookDetails();


        Book.displayTotalBooks();
    }
}
