//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", " xkblayout-state print '%s'",					1,		0},
	{"RAM:", "free -h | awk '/^Mem/ { print $3}'",				30,		0},
	{"CPU:", "cat /sys/class/thermal/thermal_zone4/temp | cut -c1-2",	5,		0},
	{"BAT:", "doas cat /sys/class/power_supply/BAT1/capacity | cut -c1-3",	60,		0},
	{"", "doas cat /sys/class/power_supply/BAT1/status",			5,		0},
	{"BRT:", "xbacklight -get | cut -c1-3",					1,		0},
	{"SND:", "amixer sget Master | awk -F'[][]' '/Left:/ { print $2 }'",	1,		0},
	{"", "amixer sget Master | awk '/Left:/ { print $6 }'",			1,		0},
	{"MIC:", "amixer sget Capture | awk '/Left:/ { print $6 }'",			1,		0},
	{"", "date '+%b %d (%a) %I:%M%p'",					55,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
