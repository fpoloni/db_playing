

#ifndef _ROOM_H_
#define _ROOM_H_

#include <string>

class Room
{
public:
  int id;
  std::string name;
  int seat_no;

  Room(int id, std::string name, int seat_no)
      : id(id), name(name), seat_no(seat_no) {}
};

#endif //_ROOM_H_