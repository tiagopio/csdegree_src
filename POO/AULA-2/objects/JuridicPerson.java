package objects;

public class JuridicPerson extends Client {
  private String cnpj;

  public JuridicPerson(String name, Integer age, String email, String cnpj) {
    super(name, age, email);
    this.cnpj = cnpj;
  }

  public void setCNPJ(String cnpj) {
    this.cnpj = cnpj;
  }

  public String getCNPJ() {
    return cnpj;
  }

  @Override
  public String toString() {
    return "Client {" + 
      "\n name = " + super.getName() + "," + 
      "\n age = " + age + "," +
      "\n cpf = " + cnpj + "," +
      "\n email = " + email + "," + 
      "\n}";
  }
}
