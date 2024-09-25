
#ifndef _SEAT_H_
#define _SEAT_H_

class Seat
{
public:
  int id;
  int row;
  int number;
  int room_id;

  Seat(int id, int row, int number, int room_id)
      : id(id), row(row), number(number), room_id(room_id) {}
};

#endif // _SEAT_H_