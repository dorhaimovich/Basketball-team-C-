//Tomer Duchovni - 315531053
//Dor Haimovich - 313459190
#pragma once
#include <iostream>
#include "Player.h"
#include "Guard.h"
#include "Forward.h"
#include "powerForward.h"
#include "SmallForward.h"
#include "PointGuard.h"
#include "ShootingGuard.h"


class Management
{
public:
	/*Constructors & Distructors*/
	Management();
	Management(Player* arr[], const int size, Player* n_five[]);
	Management(const Management& mng);
	~Management();

	/*Operators*/
	Management& operator=(const Management& mng);
	
	/*Methods*/
	void update_squad(Player** pl, int size);							// Change the roster array of the team.
	void add_player(Player* pl);
	void player_check(Player* pl);										// Using dynamic cast to check wich player is sent.
	void opening_five();												// Allows the coach to choose opening five from the roster.
	void print_squad_for_coach() const;									// calls from the "opening_five" function and prints the roster to the screen/
	void replace_in_quintet(int shirt_num_in, int shirt_num_out);		// Allows the coach to Change a player from five.
	
	void do_foul(int shirt_num);
	void do_assist(int shirt_num);
	void do_shoot(int shirt_num, const PointsEnum& points, const bool& statusSuccess);
	void do_block(int shirt_num);
	int find_player(int shirt_num);										// finds the right player by shirt number to apply the "do" functions on.

	void print_five() const;
	void print_squad() const;
	void team_statistics() const;
	void total_points() const;


private:
	/*Members*/
	Player** m_arr;
	int arr_size;
	int arr_count;
	Player* m_five[5];

};

