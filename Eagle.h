#pragma once
#include "Air_transport.h"

class Eagle : public Air_transport
{
public:
	Eagle(double distance);

protected:
	void distance_reduction(double distance) override;
};