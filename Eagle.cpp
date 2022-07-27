#include "Eagle.h"

Eagle::Eagle(double distance) : Air_transport()
	{
		set_name("Орел");
		set_speed(8);
		distance_reduction(distance);
	}

// всегда 6%
void Eagle::distance_reduction(double distance)
	{
		set_distance_to_reach(distance * (1 - (6 / 100.0)));
	};