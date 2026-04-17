class studentRecord {
    String name = "talib";
    int age = 18;
    int marks = 99;

    studentRecord(String name, int age, int marks) {
        this.name = name;
        this.age = age;
        this.marks = marks;
    }

    void show() {
        System.out.println("Name :" + name);
        System.out.println("Age :" + age);
        System.out.println("Makrs :" + marks);
    }

}

public class student {
    public static void main(String[] args) {
        studentRecord krish = new studentRecord("krish", 20, 40);
        krish.show();
    }
}