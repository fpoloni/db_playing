
#ifndef _USER_H_
#define _USER_H_

#include <iostream>
#include <vector>
#include <string>

// Define the structure for a customer
class User
{
public:
  int id;
  std::string first_name;
  std::string last_name;
  std::string email;

  User(int id, std::string first_name, std::string last_name, std::string email)
      : id(id), first_name(first_name), last_name(last_name), email(email) {}
};

#endif // _USER_H_
