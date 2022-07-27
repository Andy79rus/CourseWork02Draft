#include "Ground_Transport.h"

void Ground_Transport::do_racing()
	{
		double base_time = get_full_distance() / get_speed();
		int rest_number = static_cast<int>(base_time) / get_time_to_rest();
		for (int i = 1; i <= rest_number; ++i)
		{
			set_rest_count(i);
			set_rest_duration();
			base_time += get_rest_duration();
		}
		set_racing_time(base_time);
	}

Ground_Transport::Ground_Transport() : Transport()
	{
		set_transport_type(1);
	}

void Ground_Transport::set_time_to_rest(int ttr)
	{
		this->time_to_rest = ttr;
	}

int Ground_Transport::get_time_to_rest()
	{
		return this->time_to_rest;
	}

void Ground_Transport::set_full_distance(double distance)
	{
		this->full_distance = distance;
	}

double Ground_Transport::get_full_distance()
	{
		return this->full_distance;
	}

void Ground_Transport::set_rest_count(int rc)
	{
		this->rest_count = rc;
	}

int Ground_Transport::get_rest_count()
	{
		return this->rest_count;
	}

void Ground_Transport::set_rest_duration()
	{}

double Ground_Transport::get_rest_duration()
{
	return this->rest_duration;
}