#pragma once
#include "Air_transport.h"

class Magic_Carpet : public Air_transport
{
public:
	Magic_Carpet(double distance);

protected:
	void distance_reduction(double distance) override;
};