package classes;

public class FisicalPerson extends Client {
  private String cpf;

  public FisicalPerson(String name, Integer age, String email, String cpf) {
    super(name, age, email);
    this.cpf = cpf;
  }
  
  public void setCPF(String cpf) {
    this.cpf = cpf;
  }

  public String getCPF() {
    return cpf;
  }

  @Override
  public String toString() {
    return "  Client {" + 
      "\n   name = " + super.getName() + "," + 
      "\n   age = " + age + "," +
      "\n   cpf = " + cpf + "," +
      "\n   email = " + email + "," + 
      "\n  }";
  }
}