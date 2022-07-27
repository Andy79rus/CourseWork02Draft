#include "Broom.h"

Broom::Broom(double distance) : Air_transport()
	{
		set_name("Метла");
		set_speed(20);
		distance_reduction(distance);
	}

//Коэффициент сокращения расстояния увеличивается на 1% за каждую 1000 у.е. расстояния, например, для расстояния 5600 коэффициент будет 5%
void Broom::distance_reduction(double distance)
	{
		set_distance_to_reach(distance * (1 - ((static_cast<int>(distance) / 1000) / 100.0)));
	};