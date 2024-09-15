
#ifndef _ORDER_H_
#define _ORDER_H_

#include <iostream>
#include <vector>
#include <string>

// Define the structure for an order
class Order
{
public:
  int order_id;
  int customer_id;
  std::string product;

  Order(int order_id, int customer_id, std::string product)
      : order_id(order_id), customer_id(customer_id), product(product) {}
};

#endif // _ORDER_H_
