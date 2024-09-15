
#ifndef _DB_H_
#define _DB_H_

#include <vector>
#include <string>

#include "order.h"
#include "user.h"
#include "room.h"
#include "films.h"
#include "ticket.h"
#include "book.h"
#include "room.h"
#include "book_detail.h"
#include "schedule.h"

class Database
{
public:
  Database() {};
  virtual ~Database() {};
  void addUser(int id, std::string first_name, std::string last_name, std::string email);
  void addOrder(int order_id, int customer_id, std::string product);

  void addSchedule(int id, int film_id, int room_id, int datetime);
  void addBook(int id, int user_id);
  void addRoom(int id, std::string name, std::string status);
  void addBookDetail(int id, int ticket_id, int booking_id);
  void addFilm(int id, std::string name, int duration, std::string describe, std::string producer, std::string director);
  void searchOrdersByLastName(const std::string &last_name);
  void searchOrderByRoom(const std::string &room_name);

private:
  std::vector<User> users;
  std::vector<Order> orders;
  std::vector<Schedule> schedule;
  std::vector<BookDetail> bookdetail;
  std::vector<Book> book;
  std::vector<Ticket> ticket;
  std::vector<Films> films;
  std::vector<Room> room;
};

#endif //_DB_H_