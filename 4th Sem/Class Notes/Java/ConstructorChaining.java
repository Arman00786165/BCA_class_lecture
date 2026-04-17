class Emp {
    int empId;
    String name;
    int age;

    Emp(int empId, String name, int age) {
        this.empId = empId;
        this.name = name;
        this.age = age;
    }

    public void showdata() {
        System.out.println("empid " + empId);
        System.out.println("Name " + name);
        System.out.println("age " + age);
    }
}

class Manager extends Emp {
    float salary;
    int experience = 20;

    Manager(int empId, String name, int age, float salary, int experience) {
        super(empId, name, age);

        this.salary = salary;
        this.experience = experience;

    }

    public void showdata() {
        super.showdata();
        System.out.println("salary " + salary);
        System.out.println("experience " + experience);
    }

}

class Account_manager extends Manager {
    int numOfTerms;

    Account_manager(int empId, String name, int age, float salary, int experience, int numOfTerms) {
        super(empId, name, age, salary, experience);

        this.numOfTerms = numOfTerms;

    }

    public void showdata() {
        super.showdata();
        System.out.println("Number of Terms " + numOfTerms);
    }

}

public class ConstructorChaining {

    public static void main(String[] args) {

        Account_manager ac = new Account_manager(101, "talib", 20, 30000f, 2, 5);
        ac.showdata();

    }

}