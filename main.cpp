#include <iostream>
#include "AstroUtil.h"

using namespace std;

main()
{
	try
	{
		CAstroUtil myAstroUtil;

		myAstroUtil.SetRightAscension(3, 27, 30);
		cout << "Right Ascension is " << myAstroUtil.RightAscension << endl;

		myAstroUtil.SetDeclination(36, 3, 27, 'N');
		cout << "Declination is " << myAstroUtil.Declination << endl;

		myAstroUtil.SetLatitude(39, 22, 4, 'N');
		cout << "Latitude is " << myAstroUtil.Latitude << endl;

		myAstroUtil.SetLongitude(84, 12, 5, 'W');
		cout << "Longitude is " << myAstroUtil.Longitude << endl;

		myAstroUtil.SetTime(16, 30);
		cout << "Time is " << myAstroUtil.Time << endl;
	}
	catch (exception &e)
	{
		cerr << "An error occurred: " << e.what() << endl;
	}
}