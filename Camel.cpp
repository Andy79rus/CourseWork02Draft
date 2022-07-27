#include "Camel.h"

Camel::Camel(double distance) : Ground_Transport()
	{
		set_name("Верблюд");
		set_speed(10);
		set_time_to_rest(30);
		set_full_distance(distance);
	}

//первый раз: 5, все последующие разы: 8
void Camel::set_rest_duration()
	{
	if (1 == get_rest_count()) this->rest_duration = 5;
		else if (get_rest_count() > 1) this->rest_duration = 8;
	}