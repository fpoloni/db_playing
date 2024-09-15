
#ifndef _SCHEDULE_H_
#define _SCHEDULE_H_

class Schedule
{
public:
  int id;
  int film_id; // Foreign key
  int room_id; // Foreign key
  int datetime;

  Schedule(int id, int film_id, int room_id, int datetime)
      : id(id), film_id(film_id), room_id(room_id), datetime(datetime) {}
};

#endif //_SCHEDULE_H_