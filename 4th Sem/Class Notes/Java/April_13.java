class student{
    String name;
    int roll;
    float marks;

    public student(String name,int roll,float marks){
        this.name=name;
        this.roll=roll;
        this.marks=marks;
    }

    void show(){
        System.out.println("Name :"+name);
        System.out.println("Roll :"+roll);
        System.out.println("Marks :"+marks);
    }
    
    public static void main(){
        
    }
}