#pragma once
#include "Air_transport.h"

class Broom : public Air_transport
{
public:
	Broom(double distance);

protected:
	void distance_reduction(double distance) override;
};