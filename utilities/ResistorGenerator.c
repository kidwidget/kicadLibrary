#include "stdio.h"

int main(){
	float ones[24] = {1.0,1.1,1.2,1.3,1.5,1.6,1.8,2.0,2.2,2.4,2.7,3.0,3.3,3.6,3.9,4.3,4.7,5.1,5.6,6.2,6.8,7.5,8.2,9.1};
	float tens[24];
	float hundreds[24];
	int c = 0;
	int temp = 0;

	// fill tens array
	for(c = 0; c < 24; c++){
		tens[c] = ones[c]*10;
	}
	// fill hundreds array
	for(c = 0; c < 24; c++){
		hundreds[c] = tens[c]*10;
	}
			
	printf("EESchema-LIBRARY Version 2.4\n#encoding utf-8\n");

	// generate ones's series
		for(c = 0; c < 24; c++){
		temp = (int)ones[c];
		printf("#\n");
		printf("# %1.1f\n",ones[c]);
		printf("#\n");
		printf("DEF %1.1f R 0 0 N Y 1 F N\n", ones[c]);
		printf("F0 \"R\" 0 -50 50 V V C CNN\n");
		printf("F1 \"%1.1f\" -100 0 50 V V C CNN\n", ones[c]);
		printf("F2 \"Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal\" -400 1100 50 V I C CNN\n");
		printf("F3 \"https://www.yageo.com/upload/media/product/products/datasheet/lr/Yageo_LR_CFR_1.pdf\" 450 550 50 V I C CNN\n");
		printf("F4 \"%1.1fEBK-ND\" 180 100 50 V I C CNN \"Digi-Key_PN\"\n",ones[c]);
		printf("F5 \"CFR-12JB-52-%1.0fR%1.0f\" 280 200 50 V I C CNN \"MPN\"\n", ones[c], (ones[c]-temp)*10);
		printf("$FPLIST\n");
		printf(" R_*\n");
		printf("$ENDFPLIST\n");
		printf("DRAW\n");
		printf("S -40 -100 40 100 0 1 10 N\n");
		printf("X ~ 1 0 150 50 D 50 50 1 1 P\n");
		printf("X ~ 2 0 -150 50 U 50 50 1 1 P\n");
		printf("ENDDRAW\n");
		printf("ENDDEF\n");
	}

	// generate ten's series
		for(c = 0; c < 24; c++){
		printf("#\n");
		printf("# %2.0f\n",tens[c]);
		printf("#\n");
		printf("DEF %2.0f R 0 0 N Y 1 F N\n", tens[c]);
		printf("F0 \"R\" 0 -50 50 V V C CNN\n");
		printf("F1 \"%2.0f\" -100 0 50 V V C CNN\n", tens[c]);
		printf("F2 \"Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal\" -400 1100 50 V I C CNN\n");
		printf("F3 \"https://www.yageo.com/upload/media/product/products/datasheet/lr/Yageo_LR_CFR_1.pdf\" 450 550 50 V I C CNN\n");
		printf("F4 \"%2.0fEBK-ND\" 180 100 50 V I C CNN \"Digi-Key_PN\"\n",tens[c]);
		printf("F5 \"CFR-12JB-52-%2.0fR\" 280 200 50 V I C CNN \"MPN\"\n", tens[c]);
		printf("$FPLIST\n");
		printf(" R_*\n");
		printf("$ENDFPLIST\n");
		printf("DRAW\n");
		printf("S -40 -100 40 100 0 1 10 N\n");
		printf("X ~ 1 0 150 50 D 50 50 1 1 P\n");
		printf("X ~ 2 0 -150 50 U 50 50 1 1 P\n");
		printf("ENDDRAW\n");
		printf("ENDDEF\n");
	}

	// generate 100's series
		for(c = 0; c < 24; c++){
		printf("#\n");
		printf("# %3.0f\n",hundreds[c]);
		printf("#\n");
		printf("DEF %3.0f R 0 0 N Y 1 F N\n", hundreds[c]);
		printf("F0 \"R\" 0 -50 50 V V C CNN\n");
		printf("F1 \"%3.0f\" -100 0 50 V V C CNN\n", hundreds[c]);
		printf("F2 \"Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal\" -400 1100 50 V I C CNN\n");
		printf("F3 \"https://www.yageo.com/upload/media/product/products/datasheet/lr/Yageo_LR_CFR_1.pdf\" 450 550 50 V I C CNN\n");
		printf("F4 \"%3.0fEBK-ND\" 180 100 50 V I C CNN \"Digi-Key_PN\"\n",hundreds[c]);
		printf("F5 \"CFR-12JB-52-%3.0fR\" 280 200 50 V I C CNN \"MPN\"\n", hundreds[c]);
		printf("$FPLIST\n");
		printf(" R_*\n");
		printf("$ENDFPLIST\n");
		printf("DRAW\n");
		printf("S -40 -100 40 100 0 1 10 N\n");
		printf("X ~ 1 0 150 50 D 50 50 1 1 P\n");
		printf("X ~ 2 0 -150 50 U 50 50 1 1 P\n");
		printf("ENDDRAW\n");
		printf("ENDDEF\n");
	}

	// generate k series
	for(c = 0; c < 24; c++){
		temp = (int)ones[c];
		printf("#\n");
		printf("# %1.1fk\n",ones[c]);
		printf("#\n");
		printf("DEF %1.1fk R 0 0 N Y 1 F N\n", ones[c]);
		printf("F0 \"R\" 0 -50 50 V V C CNN\n");
		printf("F1 \"%1.1fk\" -100 0 50 V V C CNN\n", ones[c]);
		printf("F2 \"Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal\" -400 1100 50 V I C CNN\n");
		printf("F3 \"https://www.yageo.com/upload/media/product/products/datasheet/lr/Yageo_LR_CFR_1.pdf\" 450 550 50 V I C CNN\n");
		printf("F4 \"%1.1fKEBK-ND\" 180 100 50 V I C CNN \"Digi-Key_PN\"\n",ones[c]);
		printf("F5 \"CFR-12JB-52-%1.0fK%1.0f\" 280 200 50 V I C CNN \"MPN\"\n", ones[c], (ones[c]-temp)*10);
		printf("$FPLIST\n");
		printf(" R_*\n");
		printf("$ENDFPLIST\n");
		printf("DRAW\n");
		printf("S -40 -100 40 100 0 1 10 N\n");
		printf("X ~ 1 0 150 50 D 50 50 1 1 P\n");
		printf("X ~ 2 0 -150 50 U 50 50 1 1 P\n");
		printf("ENDDRAW\n");
		printf("ENDDEF\n");
	}

// generate 10k series
	for(c = 0; c < 24; c++){
		printf("#\n");
		printf("# %2.0fk\n",tens[c]);
		printf("#\n");
		printf("DEF %2.0fk R 0 0 N Y 1 F N\n", tens[c]);
		printf("F0 \"R\" 0 -50 50 V V C CNN\n");
		printf("F1 \"%2.0fk\" -100 0 50 V V C CNN\n", tens[c]);
		printf("F2 \"Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal\" -400 1100 50 V I C CNN\n");
		printf("F3 \"https://www.yageo.com/upload/media/product/products/datasheet/lr/Yageo_LR_CFR_1.pdf\" 450 550 50 V I C CNN\n");
		printf("F4 \"%2.0fKEBK-ND\" 180 100 50 V I C CNN \"Digi-Key_PN\"\n",tens[c]);
		printf("F5 \"CFR-12JB-52-%2.0fK\" 280 200 50 V I C CNN \"MPN\"\n", tens[c]);
		printf("$FPLIST\n");
		printf(" R_*\n");
		printf("$ENDFPLIST\n");
		printf("DRAW\n");
		printf("S -40 -100 40 100 0 1 10 N\n");
		printf("X ~ 1 0 150 50 D 50 50 1 1 P\n");
		printf("X ~ 2 0 -150 50 U 50 50 1 1 P\n");
		printf("ENDDRAW\n");
		printf("ENDDEF\n");
	}

	// generate 100k series
	for(c = 0; c < 24; c++){
		printf("#\n");
		printf("# %3.0fk\n",hundreds[c]);
		printf("#\n");
		printf("DEF %3.0fk R 0 0 N Y 1 F N\n", hundreds[c]);
		printf("F0 \"R\" 0 -50 50 V V C CNN\n");
		printf("F1 \"%3.0fk\" -100 0 50 V V C CNN\n", hundreds[c]);
		printf("F2 \"Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal\" -400 1100 50 V I C CNN\n");
		printf("F3 \"https://www.yageo.com/upload/media/product/products/datasheet/lr/Yageo_LR_CFR_1.pdf\" 450 550 50 V I C CNN\n");
		printf("F4 \"%3.0fKEBK-ND\" 180 100 50 V I C CNN \"Digi-Key_PN\"\n", hundreds[c]);
		printf("F5 \"CFR-12JB-52-%3.0fK\" 280 200 50 V I C CNN \"MPN\"\n", hundreds[c]);
		printf("$FPLIST\n");
		printf(" R_*\n");
		printf("$ENDFPLIST\n");
		printf("DRAW\n");
		printf("S -40 -100 40 100 0 1 10 N\n");
		printf("X ~ 1 0 150 50 D 50 50 1 1 P\n");
		printf("X ~ 2 0 -150 50 U 50 50 1 1 P\n");
		printf("ENDDRAW\n");
		printf("ENDDEF\n");
	}

		// generate M series
	for(c = 0; c < 24; c++){
		temp = (int)ones[c];
		printf("#\n");
		printf("# %1.1fM\n",ones[c]);
		printf("#\n");
		printf("DEF %1.1fM R 0 0 N Y 1 F N\n", ones[c]);
		printf("F0 \"R\" 0 -50 50 V V C CNN\n");
		printf("F1 \"%1.1fM\" -100 0 50 V V C CNN\n", ones[c]);
		printf("F2 \"Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal\" -400 1100 50 V I C CNN\n");
		printf("F3 \"https://www.yageo.com/upload/media/product/products/datasheet/lr/Yageo_LR_CFR_1.pdf\" 450 550 50 V I C CNN\n");
		printf("F4 \"%1.1fMEBK-ND\" 180 100 50 V I C CNN \"Digi-Key_PN\"\n",ones[c]);
		printf("F5 \"CFR-12JB-52-%1.0fM%1.0f\" 280 200 50 V I C CNN \"MPN\"\n", ones[c], (ones[c]-temp)*10);
		printf("$FPLIST\n");
		printf(" R_*\n");
		printf("$ENDFPLIST\n");
		printf("DRAW\n");
		printf("S -40 -100 40 100 0 1 10 N\n");
		printf("X ~ 1 0 150 50 D 50 50 1 1 P\n");
		printf("X ~ 2 0 -150 50 U 50 50 1 1 P\n");
		printf("ENDDRAW\n");
		printf("ENDDEF\n");
	}
	printf("#\n");
	printf("End Lirary\n");

	return 0;
}