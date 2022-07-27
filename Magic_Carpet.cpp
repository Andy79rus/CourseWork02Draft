#include "Magic_Carpet.h"

Magic_Carpet::Magic_Carpet(double distance) : Air_transport()
	{
		set_name("Ковер-самолет");
		set_speed(10);
		distance_reduction(distance);
	}

// если расстояние меньше 1000 --- без сокращения
// если расстояние меньше 5000 -- - 3 %
// если расстояние меньше 10000 -- - 10 %
// если расстояние больше или равно 10000 -- - 5 %
void Magic_Carpet::distance_reduction(double distance)
	{
		if (distance < 1000.0) set_distance_to_reach(distance);
		else if (distance < 5000.0) set_distance_to_reach(distance * (1 - (3 / 100.0)));
		else if (distance < 10000.0) set_distance_to_reach(distance * (1 - (10 / 100.0)));
		else if (distance >= 10000.0) set_distance_to_reach(distance * (1 - (5 / 100.0)));
	};