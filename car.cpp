#include "car.h"

struct CarImp
{
  enum Cartype type;
  enum Color color;
  double fill_level;
  double accelerate;
  int speed;
  bool is_available;
};

struct CarImp aixam = {AIXAM, RED, 16.0, 0.0, 0, true};
struct CarImp fiat_multipla = {FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0, true};
struct CarImp fiat_multipla1 = {FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0, true};
struct CarImp fiat_multipla2 = {FIAT_MULTIPLA, ORANGE, 65.0, 0.0, 0, true};
struct CarImp jeep = {JEEP, SILVER, 80.0, 0.0, 0, true};
struct CarImp jeep1 = {JEEP, BLACK, 80.0, 0.0, 0, true};

static Car car_park[MAX_CARS] = {&aixam,&fiat_multipla,&fiat_multipla1,&fiat_multipla2,&jeep,&jeep1};

Car get_car(Cartype type)
{
  for (int i = 0; i < MAX_CARS; i++) {
    if (car_park[i]->type == type && car_park[i]->is_available)
    {
      car_park[i]->is_available = false;
      return car_park[i];
    }
  }
  return 0;
}
Cartype get_type(Car car)
{
  return car->type;
}
Color get_color(Car car)
{
  return car->color;
}
double get_fill_level(Car car)
{
  return car->fill_level;
}
double get_acceleration_rate(Car car)
{
  return car->accelerate;
}
int get_speed(Car car)
{
  return car->speed;
}
void set_acceleration_rate(Car car, double rate)
{
    if (rate > 1 && car->type == AIXAM)
    {
      car->accelerate = 1;
    }
    else if (rate > 2.26 && car->type == FIAT_MULTIPLA)
    {
      car->accelerate = 2.26;
    }
    else if (rate > 3.14 && car->type == JEEP)
    {
      car->accelerate = 3.14;
    }
    else if (rate < -8)
    {
      car->accelerate = -8;
    }
    else
    {
      car->accelerate = rate;
    }
}
void accelerate(Car car)
{
    if (car->accelerate < 45)
    {
        car->speed = car->accelerate * 4;
    }
}
void init()
{
  for (int i = 0; i < MAX_CARS; i++) {
    car_park[i]->is_available = true;
    car_park[i]->accelerate = 0;
    car_park[i]->speed = 0;
  }
}
