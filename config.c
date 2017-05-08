#include <iostream.h>
#include <fstream.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "config.h"


void GetConfig() {

	//Get File
	if(configjson = fopen($HOME/.config/disccordcli/disccord.conf)
		continue;	
	else
		CreateConfig();
		
	// Write decoder function
}

void CreateConfig() {

	//Get User

	//Set Default Values
	Configuration EmptyStruct;
	EmptyStruct.Messages = 10;
	EmptyStruct.MessageDefault = true;
	
	// Create Folder...

	// Create File...

	//Marshall EmptyStruct

	// PrintToFile and close
}

//Checks current state for missing info,
// Errors will fail the program.
void CheckState() {
	if (Config.Username == " ") {
		fprint("No Username specified, please edit $HOME/.config/disccordcli/config.json");
		break;
	}
	if (Config.Password== " ") {
		fprint("No Password specified, please edit $HOME/.config/disccordcli/config.json");
		break;
	}
}
