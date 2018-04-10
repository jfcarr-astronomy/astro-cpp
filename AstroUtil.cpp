#include "AstroUtil.h"

float CAstroUtil::GetRightAscension()
{
	return RightAscension;
}

float CAstroUtil::GetDeclination()
{
	return Declination;
}

float CAstroUtil::GetLatitude()
{
	return Latitude;
}

float CAstroUtil::GetLongitude()
{
	return Longitude;
}

float CAstroUtil::GetTime()
{
	return Time;
}

void CAstroUtil::SetRightAscension(int hours, int minutes, int seconds)
{
	RightAscension = ((float)hours * 15) + ((float)minutes / 4) + ((float)seconds / 240);
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
		throw invalid_argument("Cardinal value for declination must be 'N' or 'S'");
		break;
	}
}

void CAstroUtil::SetLatitude(int degrees, int minutes, int seconds, char cardinal)
{
	float calcValue = float(degrees) + (float(minutes) / 60) + (float(seconds) / 60 / 60);

	switch (cardinal)
	{
	case 'N':
		Latitude = calcValue;
		break;
	case 'S':
		Latitude = -(calcValue);
		break;
	default:
		throw invalid_argument("Cardinal value for latitude must be 'N' or 'S'");
		break;
	}
}

void CAstroUtil::SetLongitude(int degrees, int minutes, int seconds, char cardinal)
{
	float calcValue = float(degrees) + (float(minutes) / 60) + (float(seconds) / 60 / 60);

	switch (cardinal)
	{
	case 'E':
		Longitude = calcValue;
		break;
	case 'W':
		Longitude = -(calcValue);
		break;
	default:
		throw invalid_argument("Cardinal value for longitude must be 'E' or 'W'");
		break;
	}
}

void CAstroUtil::SetTime(int hours, int minutes)
{
	Time = float(hours) + (float(minutes) / 60);
}

double CAstroUtil::GetDaysFromEpoch()
{
	struct tm startTimeStruct = {0, 0, 0, 1, 1, 100}; // January 1, 2000
	time_t startTime = mktime(&startTimeStruct);
	time_t endTime = time(0);

	double daysElapsed = difftime(endTime, startTime) / (60 * 60 * 24);

	return daysElapsed;
}