//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/* {"",	"music",	0,	11},*/
	{"",	"dwm-packages",	0,	8},
	/* {"",	"news",		0,	6}, */
	/* {"",	"crypto",	0,	13}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	/* {"",	"price btc Bitcoin 💰",				0,	21}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
	/* {"",	"torrent",	20,	7}, */
	{"",	"dwm-memory",	10,	14},
	{"",	"dwm-cpu",		10,	18},
	/* {"",	"moonphase",	18000,	17}, */
	/* {"",	"dwm-weather",	18000,	5}, */
	{"",	"dwm-mailbox",	180,	12},
	/* {"",	"nettraf",	1,	16}, */
	{"",	"dwm-volume",	0,	10},
	{"",	"dwm-battery",	5,	3},
	{"",	"dwm-internet",	5,	4},
	{"",	"clock",	30,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
