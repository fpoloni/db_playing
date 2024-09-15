
#ifndef _FILMS_H_
#define _FILMS_H_

#include <string>

class Films
{
public:
  int id;
  std::string name;
  int duration;
  std::string describe;
  std::string producer;
  std::string director;

  Films(int id, std::string name, int duration, std::string describe, std::string producer, std::string director)
      : name(name), duration(duration), describe(describe), producer(producer), director(director) {}
};

#endif //_FILMS_H_