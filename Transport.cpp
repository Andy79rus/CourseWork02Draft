#include "Transport.h"

std::string Transport::get_name()
	{
		return this->name;
	}

double Transport::get_racing_time()
	{
		return this->racing_time;
	}

void Transport::do_racing()
	{}

int Transport::get_transport_type()
	{
		return this->transport_type;
	}

int Transport::Transport::get_speed()
	{
		return this->speed;
	}

void Transport::set_speed(int s)
	{
		this->speed = s;
	}

void Transport::set_name(std::string s)
	{
		this->name = s;
	}

void Transport::set_transport_type(int tr_t)
	{
		this->transport_type = tr_t;
	}

void Transport::set_racing_time(double tm)
	{
		this->racing_time = tm;
	}