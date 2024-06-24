public class Employee {
    static String companyName = "ABC Corporation";
    static String companyAddress = "123 Main St, Anytown, USA";
    static int count = 0;

    private String name;
    private int age;
    private String designation;
    private double salary;

    public Employee(String name, int age, String designation, double salary) {
        this.name = name;
        this.age = age;
        this.designation = designation;
        this.salary = salary;
        count++;
    }

    public void displayEmployeeDetails() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Designation: " + designation);
        System.out.println("Salary: " + salary);
        System.out.println("Company Name: " + companyName);
        System.out.println("Company Address: " + companyAddress + "\n");
    }

    public static void displayTotalEmployees() {
        System.out.println("Total number of employees: " + count);
    }

    public static void main(String[] args) {

        Employee emp1 = new Employee("John Doe", 30, "Software Engineer", 80000);
        Employee emp2 = new Employee("Jane Smith", 28, "Data Scientist", 90000);
        Employee emp3 = new Employee("Bob Johnson", 35, "Product Manager", 100000);


        emp1.displayEmployeeDetails();
        emp2.displayEmployeeDetails();
        emp3.displayEmployeeDetails();


        Employee.displayTotalEmployees();
    }
}

