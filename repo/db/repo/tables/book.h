
#ifndef _BOOK_H_
#define _BOOK_H_

class Book
{
public:
  int id;
  int user_id; // Foreign key

  Book(int id, int user_id) : id(id), user_id(user_id) {}
};

#endif // _BOOKS_H_