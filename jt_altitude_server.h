#ifndef JT_ALTITUDE_SERVER
#define JT_ALTITUDE_SERVER

class jt_altitude_server {

	private:
		int current_altitude;

	public:
		jt_altitude_server();

		int get_current_altitude(void);
};

#endif
