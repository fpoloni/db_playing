#ifndef _BOOK_DETAIL_H_
#define _BOOK_DETAIL_H_

class BookDetail
{
public:
  int id;
  int ticket_id;  // Foreign key
  int booking_id; // Foreign key

  BookDetail(int id, int ticket_id, int booking_id)
      : id(id), ticket_id(ticket_id), booking_id(booking_id) {}
};

#endif //_BOOK_DETAIL_H_