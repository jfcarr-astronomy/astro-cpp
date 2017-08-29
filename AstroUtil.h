#include <iostream>

using namespace std;

class CAstroUtil
{
  private:
	float RightAscension, Declination;
	float Latitude, Longitude;
	float Time;

  public:
	float GetRightAscension();
	float GetDeclination();
	float GetLatitude();
	float GetLongitude();
	float GetTime();
	double GetDaysFromEpoch();

	void SetRightAscension(int hours, int minutes, int seconds);
	void SetDeclination(int degrees, int minutes, int seconds, char cardinal);
	void SetLatitude(int degrees, int minutes, int seconds, char cardinal);
	void SetLongitude(int degrees, int minutes, int seconds, char cardinal);
	void SetTime(int hours, int minutes);
};