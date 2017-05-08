#ifndef CONFIG_H_
#define CONFIG_H_

const int MAXLENGTH = 100;

null GetConfig();
null CreateConfig();
null CheckState();
FILE *configjson;

// Configuration is a struct containing all config fields

struct Configuration {
	char	Username[MAXLENGTH];
	char	Password[MAXLENGTH];
	bool	MessageDefault;
	char	int;
};

Configuration Config;

#endif
