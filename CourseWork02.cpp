#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
#include "Transport.h"
#include "All_Terrain_Boots.h"
#include "Broom.h"
#include "Camel.h"
#include "Centaur.h"
#include "Eagle.h"
#include "Magic_Carpet.h"
#include "Speed_Camel.h"

void print_hello()
{
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
}

void print_main_menu()
{
	std::cout << "1. Гонка для наземного транспорта." << std::endl;
	std::cout << "2. Гонка для воздушного транспорта." << std::endl;
	std::cout << "3. Гонка для наземного и воздушного транспорта (смешанная)." << std::endl;
}

void print_continue_or_end()
{
	std::cout << "1. Провести еще одну гонку." << std::endl;
	std::cout << "2. Выйти." << std::endl;
}

void print_menu_transport_select()
{
	std::cout << "1. Ботинки-вездеходы (наземный)." << std::endl;
	std::cout << "2. Метла (воздушный)." << std::endl;
	std::cout << "3. Верблюд (наземный)." << std::endl;
	std::cout << "4. Кентавр (наземный)." << std::endl;
	std::cout << "5. Орел (воздушный)." << std::endl;
	std::cout << "6. Верблюд-быстроход (наземный)." << std::endl;
	std::cout << "7. Ковер-самолет (воздушный)." << std::endl;
	std::cout << "0. Закончить регистрацию." << std::endl;
}

void print_racing_type_and_distance(int type, double distance)
{
	switch (type)
	{
	case 1:
		std::cout << "1. Гонка для наземного транспорта. ";
		break;
	case 2: 
		std::cout << "2. Гонка для воздушного транспорта. ";
		break;
	case 3:
		std::cout << "3. Гонка для наземного и воздушного транспорта (смешанная). ";
		break;
	}
	std::cout << "Расстояние: " << distance << std::endl;
}

double set_race_distance()
{
	std::string user_input;;
	bool correct;
	double result = 0;
	do
	{
		correct = false;
		std::cout << "Укажите длину дистанции гонки (должна быть положительна): ";
		std::cin >> user_input;
		
		try
		{
			result = std::stod(user_input);
			if (result > 0) correct = true;
		}
		catch (std::invalid_argument)
		{}
		if (!correct) std::cout << "Неправильный ввод! Введено неправильное числовое значение (Требуется: положительное число)." << std::endl;
	} while (!correct);

	return result;
}

int set_race_type()
{
	std::string user_input;;
	bool correct;
	double result = 0;
	do
	{
		correct = false;
		std::cout << "Выберите тип гонки (1, 2, 3): ";
		std::cin >> user_input;

		try
		{
			result = std::stod(user_input);
			if ((result >= 1) && (result <= 3)) correct = true;
			if (static_cast<int>(result) != result) correct = false;
		}
		catch (std::invalid_argument)
		{
			correct = false;
		}
		if (!correct) std::cout << "Неправильный ввод! Введено неправильное числовое значение (Требуется: целое число от 1 до 3)." << std::endl;
	} while (!correct);

	return static_cast<int>(result);
}

void print_race_type_and_distance(int rt, double ds)
{
	std::cout << "Гонка ";
	switch (rt)
	{
		case 1: std::cout << "для наземного транспорта. ";
			break;
		case 2: std::cout << "для воздушного транспорта. ";
			break;
		case 3: std::cout << "для наземного и воздушного транспорта (смешанная). ";
			break;
	}
	std::cout << "Расстояние: " << ds << std::endl;
}

void set_registration()
{
	std::string user_input;;
	bool correct;
	double result = 0;
	do
	{
		correct = false;
		std::cout << "Выберите действие : ";
		std::cin >> user_input;

		try
		{
			result = std::stod(user_input);
			if (static_cast<int>(result) != result) correct = false;
			if (result == 1) correct = true;
		}
		catch (std::invalid_argument)
		{
			correct = false;
		}
		if (!correct) std::cout << "Неправильный ввод! Введено неправильное числовое значение (Требуется: целое число 1)." << std::endl;
	} while (!correct);
}

int set_racer()
{
	std::string user_input;;
	bool correct;
	double result = 0;
	do
	{
		correct = false;
		std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		std::cin >> user_input;

		try
		{
			result = std::stod(user_input);
			if ((result >= 0) && (result <= 7)) correct = true;
			if (static_cast<int>(result) != result) correct = false;
		}
		catch (std::invalid_argument)
		{
			correct = false;
		}
		if (!correct) std::cout << "Неправильный ввод! Введено неправильное числовое значение (Требуется: целое число от 0 до 7)." << std::endl;
	} while (!correct);

	return static_cast<int>(result);
}

void print_transport_type_error()
{
	std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << std::endl;
}

void print_transport_already_registred(Transport* Tr)
{
	std::cout << Tr->get_name();
	std::cout << " уже зарегистрирован" << std::endl;
}

void print_transport_registration()
{
	std::cout << "Должно быть зарегистрировано хотя бы 2 траспортных средства." << std::endl;
	std::cout << "1. Зарегистрировать транспорт." << std::endl;
}

void print_add_transport_or_run()
{
	std::cout << "1. Зарегистрировать транспорт." << std::endl;
	std::cout << "2. Начать гонку." << std::endl;
}

void print_the_end()
{
	std::cout << "Завершаем работу." << std::endl;
	std::cout << "До свидания!" << std::endl;
}

int add_or_run_request()
{
	std::string user_input;;
	bool correct;
	double result = 0.0;
	do
	{
		correct = false;
		std::cout << "Выберите действие : ";
		std::cin >> user_input;

		try
		{
			result = std::stod(user_input);
			if ((result >= 1) && (result <= 2)) correct = true;
			if (static_cast<int>(result) != result) correct = false;
		}
		catch (std::invalid_argument)
		{
			correct = false;
		}
		if (!correct) std::cout << "Неправильный ввод! Введено неправильное числовое значение (Требуется: целое число от 1 до 2)." << std::endl;
	} while (!correct);

	return static_cast<int>(result);
}

bool continue_or_end()
{
	print_continue_or_end();
	std::string user_input;;
	bool correct;
	double result = 0.0;
	do
	{
		correct = false;
		std::cout << "Выберите действие : ";
		std::cin >> user_input;

		try
		{
			result = std::stod(user_input);
			if ((result >= 1) && (result <= 2)) correct = true;
			if (static_cast<int>(result) != result) correct = false;
		}
		catch (std::invalid_argument)
		{
			correct = false;
		}
		if (!correct) std::cout << "Неправильный ввод! Введено неправильное числовое значение (Требуется: целое число от 1 до 2)." << std::endl;
	} while (!correct);

	return !static_cast<bool>(result-1);
}

bool search_transport(Transport* arr[], int counter, Transport* Tr)
{
	if (0 == counter) return false;
	
	bool exist = false;
	int i = 0;
	while (!exist && i < counter)
	{
		if (arr[i]->get_name() == Tr->get_name()) exist = true;
		++i;
	}
	return exist;
}

void sort_racing_results(Transport* arr[], int counter)
{
	if (counter <= 0) return;
	for (int i = 1; i < counter; ++i)
		for (int j = i - 1; j >= 0; --j)
		{
			if (arr[j]->get_racing_time() > arr[j + 1]->get_racing_time())
				std::swap(*(arr + j), *(arr + j + 1));
		}
}

void make_a_race(Transport* arr[], int counter, double distance)
{
	for (int i = 0; i < counter; ++i)
	{
		arr[i]->do_racing();
	}
	sort_racing_results(arr, counter);
}

void print_racing_results(Transport* arr[], int counter)
{
	std::cout << "Результаты гонки:" << std::endl;
	std::cout.setf(std::ios_base::fixed);
	std::cout << std::setprecision(2);
	for (int i = 0; i < counter; ++i)
	{
		std::cout << (i + 1) << ". " << arr[i]->get_name() << ". Время: " << arr[i]->get_racing_time() << std::endl;
	}
	std::cout << std::endl;
}

void print_transport_is_registred(Transport* Tr)
{
	std::cout << Tr->get_name();
	std::cout << " зарегистрирован на гонку!" << std::endl;
}

void print_registred_transport(Transport* arr[], int num)
{
	std::cout << "Зарегистрированные транспортные средства: ";
	for (int i = 0; i < num-1; ++i)
		std::cout << arr[i]->get_name() << ", ";
	std::cout << arr[num-1]->get_name() << std::endl;
}

void print_racing_start_seven()
{
	std::cout << "Достигнут максимум регистраций транспорта - 7 единиц. Начинаем гонку!" << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int racers = 7;
	double distance;
	int race_type;
	int racer;
	Transport* arr[racers] = { nullptr };

	print_hello();
	do
	{
		print_main_menu();
		race_type = set_race_type();
		distance = set_race_distance();
		Transport* tmp = nullptr;
		int counter_racers = 0;

		do
		{
			print_race_type_and_distance(race_type, distance);
			if (counter_racers > 0) print_registred_transport(arr, counter_racers);
			if (counter_racers < 2)
			{
				print_transport_registration();
				set_registration();
			}
			print_menu_transport_select();
			racer = set_racer();
			switch (racer)
			{
			case 1:
				tmp = new All_Terrain_Boots(distance);
				break;

			case 2:
				tmp = new Broom(distance);
				break;

			case 3:
				tmp = new Camel(distance);
				break;

			case 4:
				tmp = new Centaur(distance);
				break;

			case 5:
				tmp = new Eagle(distance);
				break;

			case 6:
				tmp = new Speed_Camel(distance);
				break;

			case 7:
				tmp = new Magic_Carpet(distance);
				break;

			case 0:
				if (counter_racers < 2)
				{
					//продолжаем добавлять транспорт для гонки до как минимум двух
					racer = -1;
				}
				break;

			default:
				break;
			}

			if (racer > 0)
			{
				//если гонка не смешанного типа, проверяем соответствие транспорта типу гонки
				if ((race_type != 3) && (tmp->get_transport_type() != race_type))
				{
					print_transport_type_error();
				}
				// был ли такой транспорт у нас уже зарагистрирован, если нет, то добавляем
				else if (!search_transport(arr, counter_racers, tmp))
				{
					arr[counter_racers] = tmp;
					++counter_racers;
					print_transport_is_registred(tmp);
				}
				else print_transport_already_registred(tmp);
			}

			// проверяем, что число транспорта на гонку не менее двух
			if (counter_racers >= 2)
			{
				print_add_transport_or_run();
				int add_or_run = add_or_run_request();
				if (add_or_run == 2)
				{
					//начинаем гонку
					racer = 0;
				}
				else racer = -1; //пробуем дальше добавлять транспорт для гонки
			}

			// если добавили все семь транспортов, то остается только начать гонку
			if (7 == counter_racers)
			{
				print_racing_start_seven();
				racer = 0;
			}
		} while (0 != racer);

		make_a_race(arr, counter_racers, distance);
		print_racing_results(arr, counter_racers);

		for (int i = 0; i < counter_racers; ++i)
		{
			delete arr[i];
			arr[i] = nullptr;
		}
	} while (continue_or_end());

	print_the_end();

	return 0;
}