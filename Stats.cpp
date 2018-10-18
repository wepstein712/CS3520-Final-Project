#include "Stats.h"



Stats::Stats(Enemy *e, int hp, double att, double def, double wis, double intel)
{
	this->eEnemy = e;
	this->HP = hp;
	this->att = att;
	this->def = def;
	this->wis = wis;
	this->intel = intel;
}

double *Stats::getStats()
{
	double stats[] = { this->HP, this->att, this->def, this->wis, this->intel };
	return stats;
}



void Stats::change(std::vector<Buffs> b, std::vector<double> changes)
{
	try {

		if (b.size() != changes.size())
		{
			throw 10;
		}
	}
	catch (int x) {
		// Throw error 10, invalid set of buffs and changes.
		//(std::cout << "Invalid set of stats and buff changes.  Error " << x << endl;)
		return;
	}
	for (int i = 0; i < b.size(); i++) {
		Buffs buff = b.at(i);
		double modifier = changes.at(i);

		switch (buff)
		{
		case HEALTH:
			this->HP = modifier;
		case ATTACK:
			this->att = modifier;
		case DEFENSE:
			this->def = modifier;
		case WISDOM:
			this->wis = modifier;
		case INTELLIGENCE:
			this->intel = modifier;
		}
	}
}