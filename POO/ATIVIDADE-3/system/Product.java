package system;

public class Product {
  private Integer id;
  private String name;
  private Double price;

  public Product(Integer id, String name, Double price) {
    this.id = id;
    this.name = name;
    this.price = price;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public void setName(String name) {
    this.name = name;
  }

  public void setPrice(Double price) {
    this.price = price;
  }

  public Integer getId() {
    return id;
  }

  public String getName() {
    return this.name;
  }

  public Double getPrice() {
    return this.price;
  }
}
