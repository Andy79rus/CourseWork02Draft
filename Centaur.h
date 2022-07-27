#pragma once
#include "Ground_Transport.h"

class Centaur : public Ground_Transport
{
public:
	Centaur(double distance);

protected:
	void set_rest_duration() override;
};