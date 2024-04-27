package src;

public class Main {
  public static void main(String args[]) {
    System.out.println("\n  ===================== WELCOME =====================\n");
    System.out.println("  Hello customer! To use our system, enter basic \n  customer data\n");

    String name = Functions.getInput("  Name --> ");
    Integer age = Functions.getValidInteger("  Age --> ", 18, "  To create an account you must be at least 18 years old!");
    String email = Functions.getInput("  E-mail --> ");
    Integer option = Functions.getValidInteger("\n  What type of account do you want to create?\n  1 - Fisical\n  2 - Juridic\n  OPTION --> ", 1, 2, "  The account type must be 1 or 2.");

    switch (option) {
      case 1:
        Functions.systemON(Functions.createFisicalPerson(name, age, email));
        break;
      case 2:
        Functions.systemON(Functions.createJuridicPerson(name, age, email));
        break;
      default:
        break;
    }
    System.out.println("\n  ===================================================\n");
  }
}
