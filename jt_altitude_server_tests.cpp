#include <iostream>

#include "jt_altitude_server.h"

using std::cout;
using std::endl;

int main(void) {

	cout << "jt_altitude_server_tests" << endl;

	jt_altitude_server jt_as;

	cout << jt_as.get_current_altitude();
	cout << " is the current altitude." << endl;

	cout << "No tests implemented yet." << endl;

	return 0;
}
