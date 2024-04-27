package system;

public class Item {
  private Integer id;
  private Integer quantity;
  private Product product;

  public Item(Integer id, Integer quantity, Product product) {
    this.id = id;
    this.quantity =  quantity;
    this.product = product;
  }

  public Integer getId() {
    return id;
  }

  public Integer getQuantity() {
    return quantity;
  }

  public Product getProduct() {
    return product;
  }

  @Override
  public String toString() {
    return "Item ID: " + id + ", Product: " + product.getName() + ", Quantity: " + quantity;
  }
}
