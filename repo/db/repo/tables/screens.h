
#ifndef _SCREENS_H_
#define _SCREENS_H_

class Screens
{
public:
  int id;
  int movie_id;
  int room_id;
  int screen_start;

  Screens(int id, int movie_id, int room_id, int screen_start)
      : id(id), movie_id(movie_id), room_id(room_id), screen_start(screen_start) {}
};

#endif //_SCREENS_H_