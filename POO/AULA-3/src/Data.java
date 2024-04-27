package src;

import java.util.ArrayList;
import java.util.List;

import system.*;

public class Data {
  private List<Product> products;

  public Data() {
    products = new ArrayList<>();

    products.add(new Product(1, "Mouse", 240.70));
    products.add(new Product(2, "Keyboard", 560.70));
    products.add(new Product(3, "Mousepad", 170.00));
    products.add(new Product(4, "Monitor", 2400.90));
    products.add(new Product(5, "Computer", 8900.00));
    products.add(new Product(6, "Headset", 140.00));
  }

  public List<Product> getAllProducts() {
    return products;
  }

  public void addProduct(Product product) {
    products.add(product);
  }

  public Product findProductById(int id) {
    for (Product product : products) {
      if (product.getId() == id) {
        return product;
      }
    }
    return null;
  }

}
