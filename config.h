/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 550;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Monaco:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d5c9b4", "#1d2021" },
	[SchemeSel] = { "#ebdbb2", "#928374" },
	[SchemeSelHighlight] = { "#3c3836", "#d3869b" },
	[SchemeNormHighlight] = { "#83a598", "#3c3836" },
	[SchemeOut] = { "#181818", "#458588" },
	[SchemeMid] = { "#333", "#8c6" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 0; // -h option; minimum height of a menu line

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
