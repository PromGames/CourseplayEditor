#ifndef VERSION_H
#define VERSION_H

namespace EditorVersion{
	
	//Date Version Types
	static const char DATE[] = "19";
	static const char MONTH[] = "07";
	static const char YEAR[] = "2013";
	static const char UBUNTU_VERSION_STYLE[] = "13.07";
	
	//Software Status
	static const char STATUS[] = "Alpha";
	static const char STATUS_SHORT[] = "a";
	
	//Standard Version Type
	static const long MAJOR = 0;
	static const long MINOR = 0;
	static const long BUILD = 733;
	static const long REVISION = 4098;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 918;
	#define RC_FILEVERSION 0,0,733,4098
	#define RC_FILEVERSION_STRING "0, 0, 733, 4098\0"
	static const char FULLVERSION_STRING[] = "0.0.733.4098";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 3;
	

}
#endif //VERSION_H
