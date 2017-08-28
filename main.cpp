#include "AstroUtil.h"

using namespace std;

main()
{
	CAstroUtil *myAstroUtil = new CAstroUtil();

	myAstroUtil->SetRightAscension(3, 32, 12);
	cout << "Right Ascension is " << myAstroUtil->RightAscension << endl;
}