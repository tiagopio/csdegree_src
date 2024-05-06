package src;

import java.util.Scanner;
import java.util.InputMismatchException;

import classes.FisicalPerson;
import classes.JuridicPerson;

public class Functions {
  private static Scanner read = new Scanner(System.in);

  public static String getInput(String prompt) {
    System.out.print(prompt);
    return read.next();
  }

  public static Integer getValidInteger(String prompt, int min, String errorMessage) {
    Integer number = null;
    do {
      try {
        System.out.print(prompt);
        number = read.nextInt();
        if (number < min) {
          System.err.println(errorMessage);
        }
      } catch (InputMismatchException error) {
        System.err.println("  Please enter a valid number!");
        read.next();
      }
    } while (number == null || number < min);
    return number;
  }

  public static Integer getValidInteger(String prompt, int min, int max, String errorMessage) {
    Integer number = null;
    do {
      number = getValidInteger(prompt, min, errorMessage);
      if (number > max) {
        System.err.println(errorMessage);
        number = null;
      }
    } while (number == null);
    return number;
  }

  public static void createFisicalPerson(String name, Integer age, String email) {
    String cpf = getInput("\n  Enter CPF --> ");
    FisicalPerson person = new FisicalPerson("", 0, "", cpf);
    person.setName(name);
    person.setEmail(email);
    person.setAge(age);
    System.out.println("  Your data: \n" + person + "\n  Thank you for creating an account on our platform");
  }

  public static void createJuridicPerson(String name, Integer age, String email) {
    String cnpj = getInput("\n  Enter CNPJ --> ");
    JuridicPerson person = new JuridicPerson("", 0, "", cnpj);
    person.setName(name);
    person.setEmail(email);
    person.setAge(age);
    System.out.println("  Your data: \n" + person + "\n\n  Thank you for creating an account on our platform :)");
  }
}
