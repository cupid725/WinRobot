/*! \file $Id$
*  \author caoym
*  \brief java vk to windows vk			
*/
#pragma once
#include <algorithm>
namespace javavk
{
	// Field descriptor #498 I
	static int KEY_FIRST = 400;

	// Field descriptor #498 I
	static int KEY_LAST = 402;

	// Field descriptor #498 I
	static int KEY_TYPED = 400;

	// Field descriptor #498 I
	static int KEY_PRESSED = 401;

	// Field descriptor #498 I
	//static int KEY_RELEASED = 402;

	// Field descriptor #498 I
	static int JVK_ENTER = 10;
		// Field descriptor #498 I
	static int JVK_BACK_SPACE = 8;
	// Field descriptor #498 I
	static int JVK_TAB = 9;

	// Field descriptor #498 I
	static int JVK_CANCEL = 3;

	// Field descriptor #498 I
	static int JVK_CLEAR = 12;

	// Field descriptor #498 I
	static int JVK_SHIFT = 16;

	// Field descriptor #498 I
	static int JVK_CONTROL = 17;

	// Field descriptor #498 I
	static int JVK_ALT = 18;

	// Field descriptor #498 I
	static int JVK_PAUSE = 19;

	// Field descriptor #498 I
	static int JVK_CAPS_LOCK = 20;

	// Field descriptor #498 I
	static int JVK_ESCAPE = 27;

	// Field descriptor #498 I
	static int JVK_SPACE = 32;

	// Field descriptor #498 I
	static int JVK_PAGE_UP = 33;

	// Field descriptor #498 I
	static int JVK_PAGE_DOWN = 34;

	// Field descriptor #498 I
	static int JVK_END = 35;

	// Field descriptor #498 I
	static int JVK_HOME = 36;

	// Field descriptor #498 I
	static int JVK_LEFT = 37;

	// Field descriptor #498 I
	static int JVK_UP = 38;

	// Field descriptor #498 I
	static int JVK_RIGHT = 39;

	// Field descriptor #498 I
	static int JVK_DOWN = 40;

	// Field descriptor #498 I
	static int JVK_COMMA = 44;

	// Field descriptor #498 I
	static int JVK_MINUS = 45;

	// Field descriptor #498 I
	static int JVK_PERIOD = 46;

	// Field descriptor #498 I
	static int JVK_SLASH = 47;

	// Field descriptor #498 I
	static int JVK_0 = 48;

	// Field descriptor #498 I
	static int JVK_1 = 49;

	// Field descriptor #498 I
	static int JVK_2 = 50;

	// Field descriptor #498 I
	static int JVK_3 = 51;

	// Field descriptor #498 I
	static int JVK_4 = 52;

	// Field descriptor #498 I
	static int JVK_5 = 53;

	// Field descriptor #498 I
	static int JVK_6 = 54;

	// Field descriptor #498 I
	static int JVK_7 = 55;

	// Field descriptor #498 I
	static int JVK_8 = 56;

	// Field descriptor #498 I
	static int JVK_9 = 57;

	// Field descriptor #498 I
	static int JVK_SEMICOLON = 59;

	// Field descriptor #498 I
	static int JVK_EQUALS = 61;

	// Field descriptor #498 I
	static int JVK_A = 65;

	// Field descriptor #498 I
	static int JVK_B = 66;

	// Field descriptor #498 I
	static int JVK_C = 67;

	// Field descriptor #498 I
	static int JVK_D = 68;

	// Field descriptor #498 I
	static int JVK_E = 69;

	// Field descriptor #498 I
	static int JVK_F = 70;

	// Field descriptor #498 I
	static int JVK_G = 71;

	// Field descriptor #498 I
	static int JVK_H = 72;

	// Field descriptor #498 I
	static int JVK_I = 73;

	// Field descriptor #498 I
	static int JVK_J = 74;

	// Field descriptor #498 I
	static int JVK_K = 75;

	// Field descriptor #498 I
	static int JVK_L = 76;

	// Field descriptor #498 I
	static int JVK_M = 77;

	// Field descriptor #498 I
	static int JVK_N = 78;

	// Field descriptor #498 I
	static int JVK_O = 79;

	// Field descriptor #498 I
	static int JVK_P = 80;

	// Field descriptor #498 I
	static int JVK_Q = 81;

	// Field descriptor #498 I
	static int JVK_R = 82;

	// Field descriptor #498 I
	static int JVK_S = 83;

	// Field descriptor #498 I
	static int JVK_T = 84;

	// Field descriptor #498 I
	static int JVK_U = 85;

	// Field descriptor #498 I
	static int JVK_V = 86;

	// Field descriptor #498 I
	static int JVK_W = 87;

	// Field descriptor #498 I
	static int JVK_X = 88;

	// Field descriptor #498 I
	static int JVK_Y = 89;

	// Field descriptor #498 I
	static int JVK_Z = 90;

	// Field descriptor #498 I
	static int JVK_OPEN_BRACKET = 91;

	// Field descriptor #498 I
	static int JVK_BACK_SLASH = 92;

	// Field descriptor #498 I
	static int JVK_CLOSE_BRACKET = 93;

	// Field descriptor #498 I
	static int JVK_NUMPAD0 = 96;

	// Field descriptor #498 I
	static int JVK_NUMPAD1 = 97;

	// Field descriptor #498 I
	static int JVK_NUMPAD2 = 98;

	// Field descriptor #498 I
	static int JVK_NUMPAD3 = 99;

	// Field descriptor #498 I
	static int JVK_NUMPAD4 = 100;

	// Field descriptor #498 I
	static int JVK_NUMPAD5 = 101;

	// Field descriptor #498 I
	static int JVK_NUMPAD6 = 102;

	// Field descriptor #498 I
	static int JVK_NUMPAD7 = 103;

	// Field descriptor #498 I
	static int JVK_NUMPAD8 = 104;

	// Field descriptor #498 I
	static int JVK_NUMPAD9 = 105;

	// Field descriptor #498 I
	static int JVK_MULTIPLY = 106;

	// Field descriptor #498 I
	static int JVK_ADD = 107;

	// Field descriptor #498 I
	static int JVK_SEPARATER = 108;

	// Field descriptor #498 I
	static int JVK_SEPARATOR = 108;

	// Field descriptor #498 I
	static int JVK_SUBTRACT = 109;

	// Field descriptor #498 I
	static int JVK_DECIMAL = 110;

	// Field descriptor #498 I
	static int JVK_DIVIDE = 111;

	// Field descriptor #498 I
	static int JVK_DELETE = 127;

	// Field descriptor #498 I
	static int JVK_NUM_LOCK = 144;

	// Field descriptor #498 I
	static int JVK_SCROLL_LOCK = 145;

	// Field descriptor #498 I
	static int JVK_F1 = 112;

	// Field descriptor #498 I
	static int JVK_F2 = 113;

	// Field descriptor #498 I
	static int JVK_F3 = 114;

	// Field descriptor #498 I
	static int JVK_F4 = 115;

	// Field descriptor #498 I
	static int JVK_F5 = 116;

	// Field descriptor #498 I
	static int JVK_F6 = 117;

	// Field descriptor #498 I
	static int JVK_F7 = 118;

	// Field descriptor #498 I
	static int JVK_F8 = 119;

	// Field descriptor #498 I
	static int JVK_F9 = 120;

	// Field descriptor #498 I
	static int JVK_F10 = 121;

	// Field descriptor #498 I
	static int JVK_F11 = 122;

	// Field descriptor #498 I
	static int JVK_F12 = 123;

	// Field descriptor #498 I
	static int JVK_F13 = 61440;

	// Field descriptor #498 I
	static int JVK_F14 = 61441;

	// Field descriptor #498 I
	static int JVK_F15 = 61442;

	// Field descriptor #498 I
	static int JVK_F16 = 61443;

	// Field descriptor #498 I
	static int JVK_F17 = 61444;

	// Field descriptor #498 I
	static int JVK_F18 = 61445;

	// Field descriptor #498 I
	static int JVK_F19 = 61446;

	// Field descriptor #498 I
	static int JVK_F20 = 61447;

	// Field descriptor #498 I
	static int JVK_F21 = 61448;

	// Field descriptor #498 I
	static int JVK_F22 = 61449;

	// Field descriptor #498 I
	static int JVK_F23 = 61450;

	// Field descriptor #498 I
	static int JVK_F24 = 61451;

	// Field descriptor #498 I
	static int JVK_PRINTSCREEN = 154;

	// Field descriptor #498 I
	static int JVK_INSERT = 155;

	// Field descriptor #498 I
	static int JVK_HELP = 156;

	// Field descriptor #498 I
	static int JVK_META = 157;

	// Field descriptor #498 I
	static int JVK_BACK_QUOTE = 192;

	// Field descriptor #498 I
	static int JVK_QUOTE = 222;

	// Field descriptor #498 I
	static int JVK_KP_UP = 224;

	// Field descriptor #498 I
	static int JVK_KP_DOWN = 225;

	// Field descriptor #498 I
	static int JVK_KP_LEFT = 226;

	// Field descriptor #498 I
	static int JVK_KP_RIGHT = 227;

	// Field descriptor #498 I
	static int JVK_DEAD_GRAVE = 128;

	// Field descriptor #498 I
	static int JVK_DEAD_ACUTE = 129;

	// Field descriptor #498 I
	static int JVK_DEAD_CIRCUMFLEX = 130;

	// Field descriptor #498 I
	static int JVK_DEAD_TILDE = 131;

	// Field descriptor #498 I
	static int JVK_DEAD_MACRON = 132;

	// Field descriptor #498 I
	static int JVK_DEAD_BREVE = 133;

	// Field descriptor #498 I
	static int JVK_DEAD_ABOVEDOT = 134;

	// Field descriptor #498 I
	static int JVK_DEAD_DIAERESIS = 135;

	// Field descriptor #498 I
	static int JVK_DEAD_ABOVERING = 136;

	// Field descriptor #498 I
	static int JVK_DEAD_DOUBLEACUTE = 137;

	// Field descriptor #498 I
	static int JVK_DEAD_CARON = 138;

	// Field descriptor #498 I
	static int JVK_DEAD_CEDILLA = 139;

	// Field descriptor #498 I
	static int JVK_DEAD_OGONEK = 140;

	// Field descriptor #498 I
	static int JVK_DEAD_IOTA = 141;

	// Field descriptor #498 I
	static int JVK_DEAD_VOICED_SOUND = 142;

	// Field descriptor #498 I
	static int JVK_DEAD_SEMIVOICED_SOUND = 143;

	// Field descriptor #498 I
	static int JVK_AMPERSAND = 150;

	// Field descriptor #498 I
	static int JVK_ASTERISK = 151;

	// Field descriptor #498 I
	static int JVK_QUOTEDBL = 152;

	// Field descriptor #498 I
	static int JVK_LESS = 153;

	// Field descriptor #498 I
	static int JVK_GREATER = 160;

	// Field descriptor #498 I
	static int JVK_BRACELEFT = 161;

	// Field descriptor #498 I
	static int JVK_BRACERIGHT = 162;

	// Field descriptor #498 I
	static int JVK_AT = 512;

	// Field descriptor #498 I
	static int JVK_COLON = 513;

	// Field descriptor #498 I
	static int JVK_CIRCUMFLEX = 514;

	// Field descriptor #498 I
	static int JVK_DOLLAR = 515;

	// Field descriptor #498 I
	static int JVK_EURO_SIGN = 516;

	// Field descriptor #498 I
	static int JVK_EXCLAMATION_MARK = 517;

	// Field descriptor #498 I
	static int JVK_INVERTED_EXCLAMATION_MARK = 518;

	// Field descriptor #498 I
	static int JVK_LEFT_PARENTHESIS = 519;

	// Field descriptor #498 I
	static int JVK_NUMBER_SIGN = 520;

	// Field descriptor #498 I
	static int JVK_PLUS = 521;

	// Field descriptor #498 I
	static int JVK_RIGHT_PARENTHESIS = 522;

	// Field descriptor #498 I
	static int JVK_UNDERSCORE = 523;

	// Field descriptor #498 I
	static int JVK_WINDOWS = 524;

	// Field descriptor #498 I
	static int JVK_CONTEXT_MENU = 525;

	// Field descriptor #498 I
	static int JVK_FINAL = 24;

	// Field descriptor #498 I
	static int JVK_CONVERT = 28;

	// Field descriptor #498 I
	static int JVK_NONCONVERT = 29;

	// Field descriptor #498 I
	static int JVK_ACCEPT = 30;

	// Field descriptor #498 I
	static int JVK_MODECHANGE = 31;

	// Field descriptor #498 I
	static int JVK_KANA = 21;

	// Field descriptor #498 I
	static int JVK_KANJI = 25;

	// Field descriptor #498 I
	static int JVK_ALPHANUMERIC = 240;

	// Field descriptor #498 I
	static int JVK_KATAKANA = 241;

	// Field descriptor #498 I
	static int JVK_HIRAGANA = 242;

	// Field descriptor #498 I
	static int JVK_FULL_WIDTH = 243;

	// Field descriptor #498 I
	static int JVK_HALF_WIDTH = 244;

	// Field descriptor #498 I
	static int JVK_ROMAN_CHARACTERS = 245;

	// Field descriptor #498 I
	static int JVK_ALL_CANDIDATES = 256;

	// Field descriptor #498 I
	static int JVK_PREVIOUS_CANDIDATE = 257;

	// Field descriptor #498 I
	static int JVK_CODE_INPUT = 258;

	// Field descriptor #498 I
	static int JVK_JAPANESE_KATAKANA = 259;

	// Field descriptor #498 I
	static int JVK_JAPANESE_HIRAGANA = 260;

	// Field descriptor #498 I
	static int JVK_JAPANESE_ROMAN = 261;

	// Field descriptor #498 I
	static int JVK_KANA_LOCK = 262;

	// Field descriptor #498 I
	static int JVK_INPUT_METHOD_ON_OFF = 263;

	// Field descriptor #498 I
	static int JVK_CUT = 65489;

	// Field descriptor #498 I
	static int JVK_COPY = 65485;

	// Field descriptor #498 I
	static int JVK_PASTE = 65487;

	// Field descriptor #498 I
	static int JVK_UNDO = 65483;

	// Field descriptor #498 I
	static int JVK_AGAIN = 65481;

	// Field descriptor #498 I
	static int JVK_FIND = 65488;

	// Field descriptor #498 I
	static int JVK_PROPS = 65482;

	// Field descriptor #498 I
	static int JVK_STOP = 65480;

	// Field descriptor #498 I
	static int JVK_COMPOSE = 65312;

	// Field descriptor #498 I
	static int JVK_ALT_GRAPH = 65406;

	// Field descriptor #498 I
	static int JVK_BEGIN = 65368;

	// Field descriptor #498 I
	static int JVK_UNDEFINED = 0;

	// Field descriptor #419 C
	//static char CHAR_UNDEFINED = '￿';

	// Field descriptor #498 I
	static int KEY_LOCATION_UNKNOWN = 0;

	// Field descriptor #498 I
	static int KEY_LOCATION_STANDARD = 1;

	// Field descriptor #498 I
	static int KEY_LOCATION_LEFT = 2;

	// Field descriptor #498 I
	static int KEY_LOCATION_RIGHT = 3;

	// Field descriptor #498 I
	static int KEY_LOCATION_NUMPAD = 4;
};
/**
 * map Java VirtualKeyCode to Windows VirtualKeyCode	
 */
struct KEY_MAP_ITEM
{
	int jvk; /**< java VirtualKeyCode*/
	int wvk; /**< Windows VirtualKeyCode*/
	bool operator == (int a_jvk)const
	{
		return jvk == a_jvk;
	}
};
KEY_MAP_ITEM key_map[]=
{
	// Field descriptor #498 I
	//static int KEY_FIRST = 400;

	// Field descriptor #498 I
	//static int KEY_LAST = 402;

	// Field descriptor #498 I
	//static int KEY_TYPED = 400;

	// Field descriptor #498 I
	//static int KEY_PRESSED = 401;

	// Field descriptor #498 I
	//static int KEY_RELEASED = 402;

	// Field descriptor #498 I
	//static int JVK_ENTER = 10;
	{javavk::JVK_ENTER,VK_RETURN},
	// Field descriptor #498 I
	//static int JVK_BACK_SPACE = 8;
	{javavk::JVK_BACK_SPACE,VK_BACK},
	// Field descriptor #498 I
	//static int JVK_TAB = 9;
	{javavk::JVK_TAB,VK_TAB},
	// Field descriptor #498 I
	
	{javavk::JVK_CANCEL,VK_CANCEL},
	// Field descriptor #498 I

	{javavk::JVK_CANCEL,VK_CANCEL},
	// Field descriptor #498 I

	{javavk::JVK_SHIFT,VK_SHIFT},
	// Field descriptor #498 I
	{javavk::JVK_CONTROL,VK_CONTROL},
	// Field descriptor #498 I
	{javavk::JVK_ALT,VK_MENU},
	// Field descriptor #498 I
	{javavk::JVK_PAUSE,VK_PAUSE},
	// Field descriptor #498 I
	{javavk::JVK_CAPS_LOCK,VK_CAPITAL},
	// Field descriptor #498 I
	{javavk::JVK_ESCAPE,VK_ESCAPE},
	// Field descriptor #498 I
	{javavk::JVK_SPACE,VK_SPACE},
	// Field descriptor #498 I
	{javavk::JVK_PAGE_UP,VK_PRIOR},
	// Field descriptor #498 I
	{javavk::JVK_PAGE_DOWN,VK_NEXT},
	// Field descriptor #498 I
	{javavk::JVK_END,VK_END},
	// Field descriptor #498 I
	{javavk::JVK_HOME,VK_HOME},
	// Field descriptor #498 I
	{javavk::JVK_LEFT,VK_LEFT},
	// Field descriptor #498 I
	{javavk::JVK_UP,VK_UP},
	// Field descriptor #498 I
	{javavk::JVK_RIGHT,VK_RIGHT},
	// Field descriptor #498 I
	{javavk::JVK_DOWN,VK_DOWN},
	// Field descriptor #498 I
	{javavk::JVK_COMMA,VK_OEM_COMMA},
	// Field descriptor #498 I
	{javavk::JVK_MINUS,VK_OEM_MINUS},
	// Field descriptor #498 I
	{javavk::JVK_PERIOD,VK_OEM_PERIOD},
	// Field descriptor #498 I
	{javavk::JVK_SLASH,VK_OEM_2},
	// Field descriptor #498 I
	{javavk::JVK_0,'0'},
	{javavk::JVK_1,'1'},
	{javavk::JVK_2,'2'},
	{javavk::JVK_3,'3'},
	{javavk::JVK_4,'4'},
	{javavk::JVK_5,'5'},
	{javavk::JVK_6,'6'},
	{javavk::JVK_7,'7'},
	{javavk::JVK_8,'8'},
	{javavk::JVK_9,'9'},

	// Field descriptor #498 I
	{javavk::JVK_SEMICOLON,VK_OEM_1},
	// Field descriptor #498 I
	{javavk::JVK_EQUALS,187},
	// Field descriptor #498 I
	{javavk::JVK_A,'A'},
	{javavk::JVK_B,'B'},
	{javavk::JVK_C,'C'},
	{javavk::JVK_D,'D'},
	{javavk::JVK_E,'E'},
	{javavk::JVK_F,'F'},
	{javavk::JVK_G,'G'},
	{javavk::JVK_H,'H'},
	{javavk::JVK_I,'I'},
	{javavk::JVK_J,'J'},
	{javavk::JVK_K,'K'},
	{javavk::JVK_L,'L'},
	{javavk::JVK_N,'N'},
	{javavk::JVK_M,'M'},
	{javavk::JVK_O,'O'},
	{javavk::JVK_P,'P'},
	{javavk::JVK_Q,'Q'},
	{javavk::JVK_R,'R'},
	{javavk::JVK_S,'S'},
	{javavk::JVK_T,'T'},
	{javavk::JVK_U,'U'},
	{javavk::JVK_V,'V'},
	{javavk::JVK_W,'W'},
	{javavk::JVK_X,'X'},
	{javavk::JVK_Y,'Y'},
	{javavk::JVK_Z,'Z'},

	// Field descriptor #498 I
	{javavk::JVK_OPEN_BRACKET,VK_OEM_4},
	// Field descriptor #498 I
	{javavk::JVK_BACK_SLASH,VK_OEM_5},
	// Field descriptor #498 I
	{javavk::JVK_CLOSE_BRACKET,VK_OEM_6},
	// Field descriptor #498 I
	{javavk::JVK_NUMPAD0,VK_NUMPAD0},
	{javavk::JVK_NUMPAD1,VK_NUMPAD1},
	{javavk::JVK_NUMPAD2,VK_NUMPAD2},
	{javavk::JVK_NUMPAD3,VK_NUMPAD3},
	{javavk::JVK_NUMPAD4,VK_NUMPAD4},
	{javavk::JVK_NUMPAD5,VK_NUMPAD5},
	{javavk::JVK_NUMPAD6,VK_NUMPAD6},
	{javavk::JVK_NUMPAD7,VK_NUMPAD7},
	{javavk::JVK_NUMPAD8,VK_NUMPAD8},
	{javavk::JVK_NUMPAD9,VK_NUMPAD9},
	{javavk::JVK_MULTIPLY,VK_MULTIPLY},
	{javavk::JVK_ADD,VK_ADD},
	{javavk::JVK_SEPARATER,VK_SEPARATOR},
	{javavk::JVK_SEPARATOR,VK_SEPARATOR},
	{javavk::JVK_SUBTRACT,VK_SUBTRACT},
	{javavk::JVK_DECIMAL,VK_DECIMAL},
	{javavk::JVK_DIVIDE,VK_DIVIDE},
	{javavk::JVK_DELETE,VK_DELETE},
	{javavk::JVK_NUM_LOCK,VK_NUMLOCK },
	{javavk::JVK_SCROLL_LOCK,VK_SCROLL },
	{javavk::JVK_F1,VK_F1 },
	{javavk::JVK_F2,VK_F2 },
	{javavk::JVK_F3,VK_F3 },
	{javavk::JVK_F4,VK_F4 },
	{javavk::JVK_F5,VK_F5 },
	{javavk::JVK_F6,VK_F6 },
	{javavk::JVK_F7,VK_F7 },
	{javavk::JVK_F8,VK_F8 },
	{javavk::JVK_F9,VK_F9 },
	{javavk::JVK_F10,VK_F10 },
	{javavk::JVK_F11,VK_F11 },
	{javavk::JVK_F12,VK_F12 },
	{javavk::JVK_F13,VK_F13 },
	{javavk::JVK_F14,VK_F14 },
	{javavk::JVK_F15,VK_F15 },
	{javavk::JVK_F16,VK_F16 },
	{javavk::JVK_F17,VK_F17 },
	{javavk::JVK_F18,VK_F18 },
	{javavk::JVK_F19,VK_F19 },
	{javavk::JVK_F20,VK_F20 },
	{javavk::JVK_F21,VK_F21 },
	{javavk::JVK_F22,VK_F22 },
	{javavk::JVK_F23,VK_F23 },
	{javavk::JVK_F24,VK_F24 },
	
	{javavk::JVK_PRINTSCREEN,VK_SNAPSHOT },

	{javavk::JVK_INSERT,VK_INSERT },
	{javavk::JVK_HELP,VK_HELP },

	{javavk::JVK_META,VK_APPS },
	
	{javavk::JVK_BACK_QUOTE,VK_OEM_3  },

	{javavk::JVK_QUOTE,VK_OEM_7  },

	{javavk::JVK_KP_UP,VK_UP },
	{javavk::JVK_KP_DOWN,VK_DOWN },
	{javavk::JVK_KP_LEFT,VK_LEFT },
	{javavk::JVK_KP_RIGHT,VK_RIGHT },
	
	// Field descriptor #498 I
	//static int JVK_DEAD_GRAVE = 128;

	// Field descriptor #498 I
	//static int JVK_DEAD_ACUTE = 129;

	// Field descriptor #498 I
	//static int JVK_DEAD_CIRCUMFLEX = 130;

	// Field descriptor #498 I
	//static int JVK_DEAD_TILDE = 131;

	// Field descriptor #498 I
	//static int JVK_DEAD_MACRON = 132;

	// Field descriptor #498 I
	//static int JVK_DEAD_BREVE = 133;

	// Field descriptor #498 I
	//static int JVK_DEAD_ABOVEDOT = 134;

	// Field descriptor #498 I
	//static int JVK_DEAD_DIAERESIS = 135;

	// Field descriptor #498 I
	//static int JVK_DEAD_ABOVERING = 136;

	// Field descriptor #498 I
	//static int JVK_DEAD_DOUBLEACUTE = 137;

	// Field descriptor #498 I
	//static int JVK_DEAD_CARON = 138;

	// Field descriptor #498 I
	//static int JVK_DEAD_CEDILLA = 139;

	// Field descriptor #498 I
	//static int JVK_DEAD_OGONEK = 140;

	// Field descriptor #498 I
	//static int JVK_DEAD_IOTA = 141;

	// Field descriptor #498 I
	//static int JVK_DEAD_VOICED_SOUND = 142;

	// Field descriptor #498 I
	//static int JVK_DEAD_SEMIVOICED_SOUND = 143;

	// Field descriptor #498 I
	//static int  = 150;
	//{javavk::JVK_AMPERSAND,VK_AMPERSAND },
	// Field descriptor #498 I
	//static int JVK_ASTERISK = 151;

	// Field descriptor #498 I
	//static int JVK_QUOTEDBL = 152;

	// Field descriptor #498 I
	//static int JVK_LESS = 153;

	// Field descriptor #498 I
	//{javavk::JVK_GREATER,VK_GREATER },
	// Field descriptor #498 I
	//static int JVK_BRACELEFT = 161;

	// Field descriptor #498 I
	//static int JVK_BRACERIGHT = 162;

	// Field descriptor #498 I
	//static int JVK_AT = 512;
	// Field descriptor #498 I
	//static int JVK_COLON = 513;

	// Field descriptor #498 I
	//static int JVK_CIRCUMFLEX = 514;

	// Field descriptor #498 I
	//static int JVK_DOLLAR = 515;

	// Field descriptor #498 I
	//static int JVK_EURO_SIGN = 516;

	// Field descriptor #498 I
	//static int JVK_EXCLAMATION_MARK = 517;

	// Field descriptor #498 I
	//static int JVK_INVERTED_EXCLAMATION_MARK = 518;

	// Field descriptor #498 I
	//static int JVK_LEFT_PARENTHESIS = 519;

	// Field descriptor #498 I
	//static int JVK_NUMBER_SIGN = 520;

	// Field descriptor #498 I
	//static int JVK_PLUS = 521;

	// Field descriptor #498 I
	//static int JVK_RIGHT_PARENTHESIS = 522;

	// Field descriptor #498 I
	//static int JVK_UNDERSCORE = 523;

	// Field descriptor #498 I
	{javavk::JVK_WINDOWS,VK_LWIN},
	// Field descriptor #498 I
	{javavk::JVK_CONTEXT_MENU,VK_APPS},
	// Field descriptor #498 I
	{javavk::JVK_FINAL,VK_FINAL},
	// Field descriptor #498 I
	{javavk::JVK_CONVERT,VK_CONVERT},
	// Field descriptor #498 I
	{javavk::JVK_NONCONVERT,VK_NONCONVERT},
	// Field descriptor #498 I
	{javavk::JVK_ACCEPT,VK_ACCEPT},
	// Field descriptor #498 I
	{javavk::JVK_MODECHANGE,VK_MODECHANGE},
	// Field descriptor #498 I
	{javavk::JVK_KANA,VK_KANA},
	{javavk::JVK_KANJI,VK_KANJI},
	// Field descriptor #498 I
	//static int JVK_ALPHANUMERIC = 240;
	//{javavk::JVK_ALPHANUMERIC,VK_KANJI},
	// Field descriptor #498 I
	//static int JVK_KATAKANA = 241;

	// Field descriptor #498 I
	//static int JVK_HIRAGANA = 242;

	// Field descriptor #498 I
	//static int JVK_FULL_WIDTH = 243;

	// Field descriptor #498 I
	//static int JVK_HALF_WIDTH = 244;

	// Field descriptor #498 I
	//static int JVK_ROMAN_CHARACTERS = 245;

	// Field descriptor #498 I
	//static int JVK_ALL_CANDIDATES = 256;

	// Field descriptor #498 I
	//static int JVK_PREVIOUS_CANDIDATE = 257;

	// Field descriptor #498 I
	//static int JVK_CODE_INPUT = 258;

	// Field descriptor #498 I
	//static int JVK_JAPANESE_KATAKANA = 259;

	// Field descriptor #498 I
	//static int JVK_JAPANESE_HIRAGANA = 260;

	// Field descriptor #498 I
	//static int JVK_JAPANESE_ROMAN = 261;

	// Field descriptor #498 I
	//static int JVK_KANA_LOCK = 262;

	// Field descriptor #498 I
	//static int JVK_INPUT_METHOD_ON_OFF = 263;

	// Field descriptor #498 I
	//static int JVK_CUT = 65489;

	// Field descriptor #498 I
	//static int JVK_COPY = 65485;

	// Field descriptor #498 I
	//static int JVK_PASTE = 65487;

	// Field descriptor #498 I
	//static int JVK_UNDO = 65483;

	// Field descriptor #498 I
	//static int JVK_AGAIN = 65481;

	// Field descriptor #498 I
	//static int JVK_FIND = 65488;

	// Field descriptor #498 I
	//static int JVK_PROPS = 65482;

	// Field descriptor #498 I
	//static int JVK_STOP = 65480;

	// Field descriptor #498 I
	//static int JVK_COMPOSE = 65312;

	// Field descriptor #498 I
	//static int JVK_ALT_GRAPH = 65406;

	// Field descriptor #498 I
	//static int JVK_BEGIN = 65368;

	// Field descriptor #498 I
	//static int JVK_UNDEFINED = 0;

	// Field descriptor #419 C
	//static char CHAR_UNDEFINED = '￿';

	// Field descriptor #498 I
	//static int KEY_LOCATION_UNKNOWN = 0;

	// Field descriptor #498 I
	//static int KEY_LOCATION_STANDARD = 1;

	// Field descriptor #498 I
	//static int KEY_LOCATION_LEFT = 2;

	// Field descriptor #498 I
	//static int KEY_LOCATION_RIGHT = 3;

	// Field descriptor #498 I
	//static int KEY_LOCATION_NUMPAD = 4;
};

// convert from java virtual key to windows virtual key code
static bool jvk2wvk(int jvk,int &wvk)
{
	KEY_MAP_ITEM *key = std::find(key_map,&key_map[RTL_NUMBER_OF(key_map)],jvk);
	if(key == &key_map[RTL_NUMBER_OF(key_map)])
	{
		return false;
	}
	wvk = key->wvk;
	return true;
}