

#include "application.h"

Application::Application()
{
  pdb = std::make_unique<Database>();
}

Application::~Application() {}

void Application::newOrder(std::string user, std::string movie, std::string datetime, std::string room, int seat)
{
  bool isThereFilm = pdb->searchMovieByName(movie);
  // bool isThereFilmInRoom =pdb->searchMovieByName
}

void Application::delOrder(std::string user) {}
void Application::delOrder(int id) {}
void Application::showOrder(int id) {}
void Application::showOrder(std::string user) {}

void Application::init()
{
  // Add customers
  pdb->addUser(1, "John", "Smith", "smith@gmail.com");
  pdb->addUser(2, "Jane", "Doe", "doe@gmail.com");
  pdb->addUser(3, "Emily", "Smith", "smith1@gmail.com");

  pdb->addFilm(1, "Meu Malvado Favorito", 120, "Desenho legla", "alguem", "bla");
  pdb->addFilm(2, "Shrek 1", 110, "cara verde", "blabla", "bla");
  pdb->addFilm(3, "Shrek 2", 130, "cara verde continua", "blablabla", "blala");

  pdb->addRoom(1, "sala_1", 20);
  pdb->addRoom(2, "sala_2", 20);
  pdb->addRoom(3, "sala_3", 20);

  pdb->addSchedule(1, 2, 1, 10);
  pdb->addSchedule(2, 1, 1, 10);
  pdb->addSchedule(3, 2, 3, 11);
}

void Application::deinit() {}