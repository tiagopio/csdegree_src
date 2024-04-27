package system;

import java.util.ArrayList;
import java.util.List;

public class Order {
  Integer id;
  List<Item> order = new ArrayList<Item>();

  public Order(Integer id, List<Item> order) {
    this.id = id;
    this.order = order;
  }

  public void displayOrder() {
    for (Item i : order) {
      System.out.println(i);
    }
  }
}
