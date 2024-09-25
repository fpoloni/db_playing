
#ifndef _DB_H_
#define _DB_H_

#include <vector>
#include <string>

#include "order.h"
#include "user.h"
#include "films.h"
#include "ticket.h"
#include "schedule.h"
#include "room.h"
#include "seat.h"

class Database
{
public:
  Database() {};
  virtual ~Database() {};

  void addUser(int id, std::string first_name, std::string last_name, std::string email);
  void addOrder(int id, int screen_id, int order_type_id, bool status, bool paid, bool active);
  void addRoom(int id, std::string name, int seat_no);
  void addSchedule(int id, int film_id, int room_id, int datetime);
  void addFilm(int id, std::string name, int duration, std::string describe, std::string producer, std::string director);
  void addSeat(int id, int row, int number, int room_id);

  void searchOrdersByLastName(const std::string &last_name);
  void searchMovieByRoom(const std::string &room_name);
  void searchMovieInfo(const std::string &name);
  bool searchMovieByName(const std::string name);
  void showFilm();

private:
  std::vector<User> users;
  std::vector<Order> orders;
  std::vector<Schedule> schedules;
  std::vector<Ticket> tickets;
  std::vector<Films> films;
  std::vector<Room> rooms;
  std::vector<Seat> seats;
};

#endif //_DB_H_