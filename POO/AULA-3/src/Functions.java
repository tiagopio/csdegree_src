package src;

import java.util.*;

import system.*;
import classes.*;

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

  public static FisicalPerson createFisicalPerson(String name, Integer age, String email) {
    String cpf = getInput("\n  Enter CPF --> ");
    FisicalPerson person = new FisicalPerson("", 0, "", cpf);
    person.setName(name);
    person.setEmail(email);
    person.setAge(age);
    System.out.println("  Your data: \n" + person + "\n  Thank you for creating an account on our platform");
    return person;
  }

  public static JuridicPerson createJuridicPerson(String name, Integer age, String email) {
    String cnpj = getInput("\n  Enter CNPJ --> ");
    JuridicPerson person = new JuridicPerson("", 0, "", cnpj);
    person.setName(name);
    person.setEmail(email);
    person.setAge(age);
    System.out.println("  Your data: \n" + person + "\n\n  Thank you for creating an account on our platform :)");
    return person;
  }

  public static void displayData(List<Product> list) {
    for (Product p : list) {
        System.out.println("ID: " + p.getId() +  "\nName: " + p.getName() + "\nPrice: " + p.getPrice());
    }
  }

  public static Product findProductById(int id, List<Product> products) {
    for (Product product : products) {
        if (product.getId() == id) {
            return product;
        }
    }
    return null;
  }

  public static void makeOrder(Client client) {
    System.out.println("\n  Making an order...");

    List<Product> products = new Data().getAllProducts();

    System.out.println("\n  Available products:");
    displayData(products);

    List<Item> orderItems = new ArrayList<>();
    boolean addingItems = true;
    while (addingItems) {
      int productId = getValidInteger("\n  Enter the ID of the product you want to order (0 to finish): ", 0, "  Please enter a valid product ID.");
      if (productId == 0) {
        addingItems = false;
      } else {
        Product product = findProductById(productId, products);
        if (product != null) {
          int quantity = getValidInteger("  Enter the quantity: ", 1, "  Please enter a valid quantity.");
          orderItems.add(new Item(orderItems.size() + 1, quantity, product));
        } else {
          System.err.println("  Product not found!");
        }
      }
    }

    if (!orderItems.isEmpty()) {
      Order order = new Order(client.getOrders().size() + 1, orderItems);
      client.makeOrder(order);
      System.out.println("\n  Order created successfully!");
    }
  }

  public static void displayOrders(Client client) {
    System.out.println("\n  Displaying orders for " + client.getName() + "...");
    client.displayOrders();
  }

  public static void systemON(Client client) {
    boolean running = true;
    while (running) {
      System.out.println("\n  ===================================================\n");
      System.out.println("  1 - Make an order");
      System.out.println("  2 - Display orders");
      System.out.println("  3 - Exit");
      int choice = Functions.getValidInteger("  Choose an option: ", 1, 3, "  Please enter a valid option.");
      switch (choice) {
        case 1:
          makeOrder(client);
          break;
        case 2:
          displayOrders(client);
        case 3:
          running = false;
          break;
        default:
          break;
      }
    }
    System.out.println("\n  Exiting...");
  }
}
