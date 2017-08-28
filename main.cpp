#include "AstroUtil.h"

using namespace std;

main()
{
	CAstroUtil *myAstroUtil = new CAstroUtil();

	myAstroUtil->SetRightAscension(3, 27, 30);
	cout << "Right Ascension is " << myAstroUtil->RightAscension << endl;

	myAstroUtil->SetDeclination(36, 3, 27, 'N');
	cout << "Declination is " << myAstroUtil->Declination << endl;
}