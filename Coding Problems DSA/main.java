// classes
public class Student{
	// fields
	String name;
	int age;
	// constructor
	Student(String name, int age){
		this.name = name;
		this.age = age;
	}
	public static void main(String[] args) {
		// creating objects
		Website s1 = new Student("Roshan",22);
		System.out.println(s1.name + " " + s1.age);
	}
}


public class Person{
	private String name;
	private int age;

	public int getAge(){return age;}
	public String getName(){return name;}
	public void setAge(int age){this.age = age;}
	public void setName(String name){this.name = name;}
}

public abstract class Animal{
   ...
   public abstract void animalSound();
}

public class Lion extends Animal{
...
    @Override
    public void animalSound(){
        System.out.println("Roar");
    }
}

public class Dog extends Animal{
...
    @Override
    public void animalSound(){
        System.out.println("Woof");
    }
}