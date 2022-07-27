#include "All_Terrain_Boots.h"

All_Terrain_Boots::All_Terrain_Boots(double distance) : Ground_Transport()
	{
		set_name("Ботинки-вездеходы");
		set_speed(6);
		set_time_to_rest(60);
		set_full_distance(distance);
	}

// первый раз: 10, все последующие разы: 5
void All_Terrain_Boots::set_rest_duration()
	{
		if (1 == get_rest_count()) this->rest_duration = 10;
		else if (get_rest_count() > 1) this->rest_duration = 5;
	}