#pragma once
#include "Ground_Transport.h"

class Camel : public Ground_Transport
{
public:
	Camel(double distance);

protected:
	void set_rest_duration() override;
};