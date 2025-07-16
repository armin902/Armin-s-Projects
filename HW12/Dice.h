#ifndef DICE_H
#define DICE_H

class Dice
{
private:
	int sideUp;

public:
	Dice();
	void toss();
	int getSideUp() const;
};

#endif