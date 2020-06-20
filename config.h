/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 750;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Monaco:size=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#e3e3dd", "#1b1d1e" },
	[SchemeSel] = { "#f8f8f2", "#666666" },
	[SchemeSelHighlight] = { "#333333", "#ae81ff" },
	[SchemeNormHighlight] = { "#56adbc", "#333333" },
	[SchemeOut] = { "#000000", "#00ffff" },
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
