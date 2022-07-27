#include "Speed_Camel.h"

Speed_Camel::Speed_Camel(double distance) : Ground_Transport()
	{
		set_name("�������-���������");
		set_speed(40);
		set_time_to_rest(10);
		set_full_distance(distance);
	}

//������ ���: 5, ������ ���: 6.5, ��� ����������� ����: 8
void  Speed_Camel::set_rest_duration()
	{
		if (1 == get_rest_count()) this->rest_duration = 5;
		else if (2 == get_rest_count()) this->rest_duration = 6.5;
		else if (get_rest_count() > 2) this->rest_duration = 8;
	}