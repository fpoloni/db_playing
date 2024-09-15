#include <iostream>
#include <vector>
#include <string>

#include "db.h"


int main()
{
  Database db;

  // Add customers
  db.addUser(1, "John", "Smith", "smith@gmail.com");
  db.addUser(2, "Jane", "Doe", "doe@gmail.com");
  db.addUser(3, "Emily", "Smith", "smith1@gmail.com");

  // Add orders
  db.addOrder(101, 1, "Laptop");
  db.addOrder(102, 2, "Smartphone");
  db.addOrder(103, 1, "Tablet");
  db.addOrder(104, 3, "Monitor");

  // Search for orders by last name "Smith"
  db.searchOrdersByLastName("Smith");
  return 0;
}