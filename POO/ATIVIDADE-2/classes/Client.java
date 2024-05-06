package classes;

public class Client {
  private String name;
  public Integer age;
  public String email;
  
  public Client(String name, Integer age, String email) {
    this.name = name;
    this.age = age;
    this.email = email;
  }

  public void setName(String name) {
    this.name = name;
  }

  public void setAge(Integer age) {
    this.age = age;
  }

  public void setEmail(String email) {
    this.email = email;
  }

  public String getName() {
    return name;
  }

  public Integer getAge() {
    return age;
  }
    
  public String getEmail() {
    return email;
  }

  @Override
  public String toString() {
    return "Client {" + 
      "\n name = " + name + "," + 
      "\n age = " + age + "," +
      "\n email = " + email + "," + 
      "\n}";
  }
}