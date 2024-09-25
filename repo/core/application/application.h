
#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include <map>
#include <tuple>
#include <memory>
#include "db.h"

class Application
{
public:
  Application();
  virtual ~Application();

  void init();
  void deinit();

  void newOrder(std::string user, std::string movie, std::string datetime, std::string room, int seat);
  void delOrder(std::string user);
  void delOrder(int id);
  void showOrder(int id);
  void showOrder(std::string user);

private:
  int oder_id;
  std::unique_ptr<Database> pdb;
  std::vector<std::tuple<int, std::string, std::string, std::string, std::string, int>> orders;
};

#endif // _APPLICATION_H_