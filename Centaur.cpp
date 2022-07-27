#include "Centaur.h"

Centaur::Centaur(double distance) : Ground_Transport()
	{
		set_name("Кентавр");
		set_speed(15);
		set_time_to_rest(8);
		set_full_distance(distance);
	}

// всегда 2
void Centaur::set_rest_duration()
	{
		this->rest_duration = 2;
	}