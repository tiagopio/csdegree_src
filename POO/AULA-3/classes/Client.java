package classes;

import java.util.ArrayList;
import java.util.List;

import system.*;

public class Client {
  private String name;
  private Integer age;
  private String email;
  private List<Order> orders;

  public Client(String name, Integer age, String email) {
    this.name = name;
    this.age = age;
    this.email = email;
    this.orders = new ArrayList<>();
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

  public List<Order> getOrders() {
    return orders;
  }

  public void makeOrder(Order order) {
    orders.add(order);
  }

  public void displayOrders() {
    if (orders.isEmpty()) {
      System.err.println("No orders yet.");
    } else {
      System.err.println("Orders: ");
      for (Order order : orders) {
        order.displayOrder();
      }
    }
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