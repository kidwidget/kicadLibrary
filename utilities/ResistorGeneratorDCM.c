#include <stdio.h>

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
  
  printf("EESchema-DOCLIB  Version 2.0\n");

  // one's series
  for(c = 0; c < 24; c++){
    printf("#\n");
    printf("$CMP %1.1f\n",ones[c]);
    printf("D Resistor\n");
    printf("K R res resistor\n");
    printf("F ~\n");
    printf("$ENDCMP\n");
  }

  // ten's series
  for(c = 0; c < 24; c++){
    printf("#\n");
    printf("$CMP %2.0f\n",tens[c]);
    printf("D Resistor\n");
    printf("K R res resistor\n");
    printf("F ~\n");
    printf("$ENDCMP\n");
  }

  // hundred's series
  for(c = 0; c < 24; c++){
    printf("#\n");
    printf("$CMP %3.0f\n",hundreds[c]);
    printf("D Resistor\n");
    printf("K R res resistor\n");
    printf("F ~\n");
    printf("$ENDCMP\n");
  }

  // k series
  for(c = 0; c < 24; c++){
    printf("#\n");
    printf("$CMP %1.1fk\n",ones[c]);
    printf("D Resistor\n");
    printf("K R res resistor\n");
    printf("F ~\n");
    printf("$ENDCMP\n");
  }
  // 10k series
  for(c = 0; c < 24; c++){
    printf("#\n");
    printf("$CMP %2.0fk\n",tens[c]);
    printf("D Resistor\n");
    printf("K R res resistor\n");
    printf("F ~\n");
    printf("$ENDCMP\n");
  }

  // 100k series
  for(c = 0; c < 24; c++){
    printf("#\n");
    printf("$CMP %3.0fk\n",hundreds[c]);
    printf("D Resistor\n");
    printf("K R res resistor\n");
    printf("F ~\n");
    printf("$ENDCMP\n");
  }

  // M series
  for(c = 0; c < 24; c++){
    printf("#\n");
    printf("$CMP %1.1fM\n",ones[c]);
    printf("D Resistor\n");
    printf("K R res resistor\n");
    printf("F ~\n");
    printf("$ENDCMP\n");
  }

  printf("#\n");
  printf("End Doc Library\n");
  return 0;		

}
