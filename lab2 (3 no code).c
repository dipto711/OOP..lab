public class Student {
    static String university = "XYZ University";
    static int count = 0;

    private int id;
    private String name;
    private String department;
    private double cgpa;

    public Student(int id, String name, String department, double cgpa) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.cgpa = cgpa;
        count++;
    }

    public void displayStudentDetails() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("CGPA: " + cgpa);
        System.out.println("University: " + university + "\n");
    }

    public static void displayTotalStudents() {
        System.out.println("Total number of students: " + count);
    }

    public static void main(String[] args) {

        Student student1 = new Student(1, "John Doe", "Computer Science", 3.8);
        Student student2 = new Student(2, "Jane Smith", "Electrical Engineering", 3.5);
        Student student3 = new Student(3, "Bob Johnson", "Mechanical Engineering", 3.2);


        student1.displayStudentDetails();
        student2.displayStudentDetails();
        student3.displayStudentDetails();


        Student.displayTotalStudents();
    }
}
