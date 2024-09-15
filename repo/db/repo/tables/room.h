#ifndef _ROOM_H_
#define _ROOM_H_

#include <string>

class Room
{
public:
  int id;
  std::string name;
  std::string status;

  Room(int id, std::string name, std::string status)
      : id(id), name(name), status(status) {}
};
#endif // _ROOM_H_
