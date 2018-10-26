#include <iostream>
#include "AstroUtil.h"

using namespace std;

main()
{
    try {
        CAstroUtil myAstroUtil;

        myAstroUtil.SetRightAscension(3, 27, 30);
        cout << "Right Ascension is " << myAstroUtil.GetRightAscension() << endl;

        myAstroUtil.SetDeclination(36, 3, 27, 'N');
        cout << "Declination is " << myAstroUtil.GetDeclination() << endl;

        myAstroUtil.SetLatitude(39, 22, 4, 'N');
        cout << "Latitude is " << myAstroUtil.GetLatitude() << endl;

        myAstroUtil.SetLongitude(84, 12, 5, 'W');
        cout << "Longitude is " << myAstroUtil.GetLongitude() << endl;

        myAstroUtil.SetTime(16, 30);
        cout << "Time is " << myAstroUtil.GetTime() << endl;

        cout << "Days from epoch " << myAstroUtil.GetDaysFromEpoch() << endl;
    }
    catch (exception &e) {
        cerr << "An error occurred: " << e.what() << endl;
    }
}