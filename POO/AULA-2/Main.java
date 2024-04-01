import objects.Client;
import objects.FisicalPerson;
import objects.JuridicPerson;

public class Main {
  public static void main(String args[]) {
    Client tiago = new Client("Tiago", 19, "tiago@example.com");
    FisicalPerson fisicalTiago = new FisicalPerson("tiago", 19, "tiago@example.com", "123-456-789-10");
    JuridicPerson juridicTiago = new JuridicPerson("tiago", 19, "tiago@example.com", "12345456/0001-54");

    System.out.println(tiago.getName());
    System.out.println(fisicalTiago.getCPF());
    System.out.println(juridicTiago.getCNPJ());
  }
}
