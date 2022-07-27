#include "Air_transport.h"

void Air_transport::do_racing()
	{
		set_racing_time(get_distance_to_reach() / get_speed());
	}

Air_transport::Air_transport() : Transport()
	{
		set_transport_type(2);
	}

void Air_transport::distance_reduction(double distance)
	{};

void Air_transport::set_distance_to_reach(double dr)
	{
		this->distance_to_reach = dr;
	}

double Air_transport::get_distance_to_reach()
	{
		return this->distance_to_reach;
	}