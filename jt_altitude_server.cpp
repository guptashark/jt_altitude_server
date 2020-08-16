#include "jt_altitude_server.h"

jt_altitude_server::jt_altitude_server(void): current_altitude(20000) {}

int jt_altitude_server::get_current_altitude(void) {
	return current_altitude;
}
