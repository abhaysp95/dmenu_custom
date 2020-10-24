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
	[SchemeNorm] = { "#b9b9b9", "#101010" },
	[SchemeSel] = { "#b9b9b9", "#525252" },
	[SchemeSelHighlight] = { "#3c3836", "#686868" },
	[SchemeNormHighlight] = { "#868686", "#3c3836" },
	[SchemeOut] = { "#101010", "#686868" },
	[SchemeMid] = { "#333", "#8e8e8e" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 0; // -h option; minimum height of a menu line

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
