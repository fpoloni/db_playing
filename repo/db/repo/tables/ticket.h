
#ifndef _TICKET_H_
#define _TICKET_H_

class Ticket
{
public:
  int id;
  int price;       // Foreign key
  int schedule_id; // Foreign key
  int seat;

  Ticket(int id, int price, int schedule_id, int seat)
      : id(id), price(price), schedule_id(schedule_id), seat(seat) {}
};

#endif //_TICKET_H_