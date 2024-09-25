
#include "db.h"
#include <string>
#include <vector>

static std::string findRoomName(const int id, const std::vector<Room> &list)
{
  for (const auto &room : list)
  {
    if (id == room.id)
    {
      return room.name;
    }
  }

  return "";
}

static std::string findMovie(const int id, const std::vector<Films> &list)
{
  for (const auto &film : list)
  {
    if (id == film.id)
    {
      return film.name;
    }
  }

  return "";
}

void Database::addUser(int id, std::string first_name, std::string last_name, std::string email)
{
  users.emplace_back(id, first_name, last_name, email);
}

void Database::addOrder(int id, int screen_id, int order_type_id, bool status, bool paid, bool active)
{
  // orders.emplace_back(id, screen_id, order_type_id, status, paid, active);
}

void Database::addSchedule(int id, int film_id, int room_id, int datetime)
{
  schedules.emplace_back(id, film_id, room_id, datetime);
}

void Database::addFilm(int id, std::string name, int duration, std::string describe, std::string producer, std::string director)
{
  films.emplace_back(id, name, duration, describe, producer, director);
}

void Database::addRoom(int id, std::string name, int seat_no)
{
  rooms.emplace_back(id, name, seat_no);
}

void Database::addSeat(int id, int row, int number, int room_id)
{
  seats.emplace_back(id, row, number, room_id);
}

void Database::showFilm()
{
  for (const auto &element : films)
  {
    std::cout << element.id << ","
              << element.name << ","
              << element.producer << ","
              << element.duration
              << std::endl;
  }
}

void Database::searchMovieByRoom(const std::string &room_name)
{
  for (const auto &schedule : schedules)
  {
    if (findRoomName(schedule.room_id, rooms).compare(room_name) == 0)
    {
      std::cout << "film_id: " << schedule.film_id
                << ", film_name: " << findMovie(schedule.film_id, films)
                << std::endl;
    }
  }
}

bool Database::searchMovieByName(const std::string name)
{
  for (const auto &film : films)
  {
    if (film.name.compare(name) == 0)
    {
      return true;
    }
  }

  return false;
}