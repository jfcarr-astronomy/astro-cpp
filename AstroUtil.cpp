#include "AstroUtil.h"

void CAstroUtil::SetRightAscension(int hours, int minutes, int seconds)
{
	RightAscension = ((float)hours + ((float)minutes / 60) + (float(seconds) / 60 / 60)) * 15;
}