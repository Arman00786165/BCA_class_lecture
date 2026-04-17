/*
1. Create a class Student (Name, Age, Marks, Semester),
Semester data can be change by any of student class object 
2. Create a demo class to replicate copy constructor
3. Create a class Emp (Name, Age, Basic Salary)
-Method (calSalary, showData) -calSalary will calculate
HRA - 10% of Basic Salary
DA - 12% of Basic Salary Gross-HRA+DA+Basic Salary
- showData method show (Name, Age, Gross)
Stud
*/

class Student {
    static String sem;
    String name;
    int age;
    double marks;

    Student(String name, int age, double marks) {
        this.name = name;
        this.age = age;
        this.marks = marks;
    }

    Student(Student s) {
        this.name = s.name;
        this.age = s.age;
        this.marks = s.marks;
    }

    void Show() {
        System.out.println(this.name);
        System.out.println(this.age);
        System.out.println(this.marks);
    }

}

public class April_12 {
    public static void main(String[] args) {
        Student arman = new Student("arman", 23, 90);
        Student krish = new Student(arman);
        krish.Show();
    }
}
