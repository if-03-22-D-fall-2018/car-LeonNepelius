/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H
#define MAX_CARS 6
typedef struct CarImplementation* Car;
enum Cartype
{
    JEEP,AIXAM,FIAT_MULTIPLA
};
enum Color
{
    RED,GREEN,BLUE,ORANGE,SILVER,BLACK
};
Car get_car(Cartype type);
Cartype get_type(Car car);
Color get_color(Car car);
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
int get_speed(Car car);
void set_acceleration_rate(Car car, double rate);
void accelerate(Car car);
void init();

#endif
