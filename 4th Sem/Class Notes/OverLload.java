// 1.Tow Types of Polimorfishm .
// 1.static(Compile Time)-> Overloading(Method, Constructor) don't use Inheritance.
// 2. Dynamic(Run Time)-> overriding(Static, Dynamic) use inheritance.

class Student {
    String name;
    int age;
    double marks;

    void get(String name, int age, double marks) {
        this.name = name;
        this.age = age;
        this.marks = marks;

    }

    void get(String name, int age) {
        this.name = name;
        this.age = age;
        this.marks = 0;

    }

    void show() {
        System.out.println("Name : " + name);
        System.out.println("Age: " + age);
        System.out.println("Marks : " + marks);
    }
}

public class OverLload {
    public static void main(String... arg) {
        Student s1 = new Student();
        s1.get("Arman", 19, 80);
        s1.show();

        Student s2 = new Student();
        s2.get("Arman", 19);
        s2.show();
    }
}
