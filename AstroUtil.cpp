#include "AstroUtil.h"

void CAstroUtil::SetRightAscension(int hours, int minutes, int seconds)
{
	RightAscension = ((float)hours + ((float)minutes / 60) + (float(seconds) / 60 / 60)) * 15;
}

void CAstroUtil::SetDeclination(int degrees, int minutes, int seconds, char cardinal)
{
	float calcValue = float(degrees) + (float(minutes) / 60) + (float(seconds) / 60 / 60);

	switch (cardinal)
	{
	case 'N':
		Declination = calcValue;
		break;
	case 'S':
		Declination = -(calcValue);
		break;
	default:
		cout << "[ERROR] Cardinal value must be 'N' or 'S'" << endl;
		break;
	}
}