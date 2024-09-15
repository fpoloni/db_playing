
#include "db.h"

void Database::addUser(int id, std::string first_name, std::string last_name, std::string email)
{
  users.emplace_back(id, first_name, last_name, email);
}

void Database::addOrder(int order_id, int customer_id, std::string product)
{
  orders.emplace_back(order_id, customer_id, product);
}

void Database::addSchedule(int id, int film_id, int room_id, int datetime)
{
  schedule.emplace_back(id, film_id, room_id, datetime);
}
void Database::addBook(int id, int user_id)
{
  book.emplace_back(id, user_id);
}
void Database::addFilm(int id, std::string name, int duration, std::string describe, std::string producer, std::string director)
{
  films.emplace_back(id, name, duration, describe, producer, director);
}

void Database::addRoom(int id, std::string name, std::string status)
{
  room.emplace_back(id, name, status);
}

void Database::searchOrdersByLastName(const std::string &last_name)
{
  for (const auto &customer : users)
  {
    if (customer.last_name == last_name)
    {
      for (const auto &order : orders)
      {
        if (order.customer_id == customer.id)
        {
          std::cout << "Order ID: " << order.order_id
                    << ", Customer: " << customer.first_name << " " << customer.last_name
                    << ", Product: " << order.product << std::endl;
        }
      }
    }
  }
}

void Database::searchOrderByRoom(const std::string &room_name)
{
  for (const auto &room : room)
  {
    if (room.name == room_name)
    {

    }
  }
}
