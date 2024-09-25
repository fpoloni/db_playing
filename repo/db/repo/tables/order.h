
#ifndef _ORDER_H_
#define _ORDER_H_

#include <iostream>
#include <vector>
#include <string>

// Define the structure for an order
class Order
{
public:
  int id;
  int screen_id;
  int order_type_id;
  bool status;
  bool paid;
  bool active;

  Order(int id, int screen_id, int order_type_id, bool status, bool paid, bool active)
      : id(id), screen_id(screen_id), order_type_id(order_type_id), status(status), paid(paid), active(active) {}
};

#endif // _ORDER_H_
