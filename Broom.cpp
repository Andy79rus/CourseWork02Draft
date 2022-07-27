#include "Broom.h"

Broom::Broom(double distance) : Air_transport()
	{
		set_name("�����");
		set_speed(20);
		distance_reduction(distance);
	}

//����������� ���������� ���������� ������������� �� 1% �� ������ 1000 �.�. ����������, ��������, ��� ���������� 5600 ����������� ����� 5%
void Broom::distance_reduction(double distance)
	{
		set_distance_to_reach(distance * (1 - ((static_cast<int>(distance) / 1000) / 100.0)));
	};