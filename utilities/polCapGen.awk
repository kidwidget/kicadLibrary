#! /bin/gawk -f
BEGIN { FS = "," }
{ print "# " $7 "\n"\
			"#\n"\
   		"DEF " $7 " C 0 10 N N 1 F N\n"\
			"F0 \"C\" 10 70 50 H V L CNN	\n"\
			"F1 \"" $7 "\" 10 -80 50 H V L CNN\n"\
			"F2 \"" $12 "\" -90 -30 50 H I C CNN\n"\
			"F3 \"" $1 "\"  10 70 50 H I C CNN\n"\
			"F4 \"" $9 "\" 310 370 50 H I C CNN \"Voltage\"\n"\
			"F5 \"" $2 "\" 110 170 50 H I C CNN \"Digi-Key_PN\"\n"\
			"F6 \"" $3 "\" 210 270 50 H I C CNN \"MPN\"\n"\
			"$FPLIST\n"\
			" C_*\n"\
			"$ENDFPLIST\n"\
			"DRAW\n"\
      "S -60 -12 60 -27 0 1 0 F\n"\
      "S -60 27 60 12 0 1 0 N\n"\
      "P 2 0 1 0 -50 60 -30 60 N\n"\
      "P 2 0 1 0 -40 50 -40 70 N\n"\
      "X ~ 1 0 100 73 D 50 50 1 1 P\n"\
      "X ~ 2 0 -100 73 U 50 50 1 1 P\n"\
			"ENDDRAW\n"\
			"ENDDEF\n"\
			"#" }
