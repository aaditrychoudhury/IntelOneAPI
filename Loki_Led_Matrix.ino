#include <LedControl.h>

// Pin connections for MAX7219
const int MAX7219_DATA_PIN = 12;   // DIN
const int MAX7219_CLK_PIN = 11;    // CLK
const int MAX7219_CS_PIN = 10;     // CS
char ch[3] = ""; 
// Number of MAX7219 ICs (four 8x8 LED modules)
const int NUM_MAX7219 = 4;

// Create an instance of the LedControl library
LedControl lc = LedControl(MAX7219_DATA_PIN, MAX7219_CLK_PIN, MAX7219_CS_PIN, NUM_MAX7219);

void setup() {
  Serial.begin(9600);  //Start serial connection
  // Initialize the MAX7219
  lc.shutdown(0, false);  // Wake up MAX7219 (0 = first IC)
  lc.shutdown(1, false);  // Wake up MAX7219 (1 = second IC)
  lc.shutdown(2, false);  // Wake up MAX7219 (2 = third IC)
  lc.shutdown(3, false);  // Wake up MAX7219 (3 = fourth IC)

  lc.setIntensity(0, 15); // Set the brightness (0-15)
  lc.setIntensity(1, 15);
  lc.setIntensity(2, 15);
  lc.setIntensity(3, 15);

  lc.clearDisplay(0);     // Clear the display (0 = first IC)
  lc.clearDisplay(1);     // Clear the display (1 = second IC)
  lc.clearDisplay(2);     // Clear the display (2 = third IC)
  lc.clearDisplay(3);     // Clear the display (3 = fourth IC)
}

void pattern1() {
  // Turn on all LEDs in the four LED modules
  for (int module = 0; module < NUM_MAX7219; module++) {
    for (int row = 0; row < 8; row++) {
      for (int col = 0; col < 8; col++) {
        lc.setLed(module, row, col, HIGH);
      }
    }
  }
}

void pattern2() {
  // Turn on all LEDs in the first LED module
  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 8; col++) {
      lc.setLed(0, row, col, HIGH);
    }
  }
}
void pattern3() {
  // Turn off all LEDs in the first LED module
  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 8; col++) {
      lc.setLed(0, row, col, LOW);
    }
  }
  turnOnOtherModules();
}
void turnOnOtherModules() {
  // Turn on all LEDs in the other three LED modules
  for (int module = 1; module < NUM_MAX7219; module++) {
    for (int row = 0; row < 8; row++) {
      for (int col = 0; col < 8; col++) {
        lc.setLed(module, row, col, HIGH);
      }
    }
  }
}

void pattern4() {
  // Turn off all LEDs in the second LED module
  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 8; col++) {
      lc.setLed(1, row, col, LOW);
    }
  }
  turnOnOtherModules4();
}
void turnOnOtherModules4() {
  // Turn on all LEDs in the other three LED modules
  for (int module = 0; module < NUM_MAX7219; module++) {
    if (module != 1) {
      for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
          lc.setLed(module, row, col, HIGH);
        }
      }
    }
  }
}

void pattern5() {
  // Turn off all LEDs in the third LED module
  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 8; col++) {
      lc.setLed(2, row, col, LOW);
    }
  }
  turnOnOtherModules5();
}

void turnOnOtherModules5() {
  // Turn on all LEDs in the other three LED modules
  for (int module = 0; module < NUM_MAX7219; module++) {
    if (module != 2) {
      for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
          lc.setLed(module, row, col, HIGH);
        }
      }
    }
  }
}
void pattern6() {
  // Turn off all LEDs in the fourth LED module
  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 8; col++) {
      lc.setLed(3, row, col, LOW);
    }
  }
  turnOnOtherModules6();
}

void turnOnOtherModules6() {
  // Turn on all LEDs in the other three LED modules
  for (int module = 0; module < NUM_MAX7219; module++) {
    if (module != 3) {
      for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
          lc.setLed(module, row, col, HIGH);
        }
      }
    }
  }
}

void pattern7() {
  // Turn off all LEDs in the first and second LED modules
  for (int module = 0; module < 2; module++) {
    for (int row = 0; row < 8; row++) {
      for (int col = 0; col < 8; col++) {
        lc.setLed(module, row, col, LOW);
      }
    }
  }
  turnOnOtherModules7();
}
void turnOnOtherModules7() {
  // Turn on all LEDs in the other two LED modules
  for (int module = 2; module < NUM_MAX7219; module++) {
    for (int row = 0; row < 8; row++) {
      for (int col = 0; col < 8; col++) {
        lc.setLed(module, row, col, HIGH);
      }
    }
  }
}

void pattern8() {
  // Turn off all LEDs in the third and fourth LED modules
  for (int module = 2; module < NUM_MAX7219; module++) {
    for (int row = 0; row < 8; row++) {
      for (int col = 0; col < 8; col++) {
        lc.setLed(module, row, col, LOW);
      }
    }
  }
  turnOnOtherModules8();
}

void turnOnOtherModules8() {
  // Turn on all LEDs in the other two LED modules
  for (int module = 0; module < 2; module++) {
    for (int row = 0; row < 8; row++) {
      for (int col = 0; col < 8; col++) {
        lc.setLed(module, row, col, HIGH);
      }
    }
  }
}
// To be rechecked
void turnOffAllColumns() {
  // Turn off all columns in the LED matrix
  for (int col = 0; col < 8; col++) {
    for (int module = 0; module < NUM_MAX7219; module++) {
      for (int row = 0; row < 8; row++) {
        lc.setLed(module, row, col, LOW);
      }
    }
  }
}


void pattern9() {
  // Turn off the first and last columns in the LED matrix
  for (int module = 0; module < NUM_MAX7219; module++) {
    lc.setColumn(module, 0, B00000000);  // Turn off the first column
    lc.setColumn(module, 7, B00000000);  // Turn off the last column
  }
  turnOnOtherColumns9();
}

void turnOnOtherColumns9() {
  // Turn on the other two columns in the LED matrix
  for (int module = 0; module < NUM_MAX7219; module++) {
    lc.setColumn(module, 1, B11111111);  // Turn on the second column
    lc.setColumn(module, 6, B11111111);  // Turn on the second to last column
  }
}

void pattern10() {
  // Turn off the second and third columns in the LED matrix
  for (int module = 0; module < NUM_MAX7219; module++) {
    lc.setColumn(module, 1, B00000000);  // Turn off the second column
    lc.setColumn(module, 2, B00000000);  // Turn off the third column
  }
  turnOnOtherColumns10();
}

void turnOnOtherColumns10() {
  // Turn on the other two columns in the LED matrix
  for (int module = 0; module < NUM_MAX7219; module++) {
    lc.setColumn(module, 0, B11111111);  // Turn on the first column
    lc.setColumn(module, 3, B11111111);  // Turn on the fourth column
  }
}

void pattern11() {
  // Turn on the second and fourth columns in the LED matrix
  for (int module = 0; module < NUM_MAX7219; module++) {
    lc.setColumn(module, 1, B11111111);  // Turn on the second column
    lc.setColumn(module, 3, B11111111);  // Turn on the fourth column
  }
  turnOffOtherColumns11();
}

void turnOffOtherColumns11() {
  // Turn off all the other columns in the LED matrix
  for (int module = 0; module < NUM_MAX7219; module++) {
    lc.setColumn(module, 0, B00000000);  // Turn off the first column
    lc.setColumn(module, 2, B00000000);  // Turn off the third column
  }
}

void pattern12() {
  // Turn on the first and third columns in the LED matrix
  for (int module = 0; module < NUM_MAX7219; module++) {
    lc.setColumn(module, 0, B11111111);  // Turn on the first column
    lc.setColumn(module, 2, B11111111);  // Turn on the third column
  }
  turnOffOtherColumns12();
}

void turnOffOtherColumns12() {
  // Turn off all the other columns in the LED matrix
  for (int module = 0; module < NUM_MAX7219; module++) {
    lc.setColumn(module, 1, B00000000);  // Turn off the second column
    lc.setColumn(module, 3, B00000000);  // Turn off the fourth column
  }
}

void loop() {
    if(Serial.available() > 0)
    { 
       //  Serial.print(Serial.read());
        ////START - Handle detected vehicles
        //Data sent over the serial port will contain 3 characters
        //So the loop will be executed 3 times
        for(int i = 0; i < 3; i++)
        {
            ch[i] = Serial.read();                //Start reading characters from the received data
  
            ////START - If checks for single vehicle detected
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '0')
                pattern1();
    
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '1')
                pattern3();
    
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '2')
                pattern7();
    
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '3')
                pattern8();
    
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '4')
                pattern5();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '5')
                pattern6();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '6')
                pattern6();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '7')
                pattern6();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '8')
                pattern6();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '9')
                turnOffAllColumns();
            ////END - If checks for single vehicle detected
  
  
            ////START - If checks for double vehicle detected
              
            //START - ZEROTH COLUMN
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '1' || ch[0] == 'x' && ch[1] == '1' && ch[2] == '0')
                pattern3();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '2' || ch[0] == 'x' && ch[1] == '2' && ch[2] == '0')
                pattern7();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '3' || ch[0] == 'x' && ch[1] == '3' && ch[2] == '0')
                pattern4();
            
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '4' || ch[0] == 'x' && ch[1] == '4' && ch[2] == '0')
                pattern5();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '0')
                pattern5();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '0')
                pattern6();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '0')
                pattern6();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '0')
                pattern6();
            //END - ZEROTH COLUMN  
  
            //START - FIRST COLUMN
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '2' || ch[0] == 'x' && ch[1] == '2' && ch[2] == '1')
                pattern3();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '3' || ch[0] == 'x' && ch[1] == '3' && ch[2] == '1')
                pattern3();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '4' || ch[0] == 'x' && ch[1] == '4' && ch[2] == '1')
                pattern6();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '1')
                pattern9();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '1')
                pattern9();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '1')
                pattern9();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '1')
                pattern9();
            //END - FIRST COLUMN  
  
            //START - SECOND COLUMN
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '3' || ch[0] == 'x' && ch[1] == '3' && ch[2] == '2')
                pattern8();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '4' || ch[0] == 'x' && ch[1] == '4' && ch[2] == '2')
                pattern6();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '2')
                pattern9();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '2')
                pattern9();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '2')
                pattern9();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '2')
                pattern9();
            //END - SECOND COLUMN  
  
            //START - THIRD COLUMN
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '4' || ch[0] == 'x' && ch[1] == '4' && ch[2] == '3')
                pattern10();
  
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '3')
                pattern10();
  
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '3')
                pattern10();
  
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '3')
                pattern10();
  
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '3')
                pattern10();
            //END - THIRD COLUMN  
  
            //START - FOURTH COLUMN
            if(ch[0] == 'x' && ch[1] == '4' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '4')
                pattern5();
  
            if(ch[0] == 'x' && ch[1] == '4' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '4')
                pattern6();
  
            if(ch[0] == 'x' && ch[1] == '4' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '4')
                pattern11();
  
            if(ch[0] == 'x' && ch[1] == '4' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '4')
                pattern6();
            //END - FOURTH COLUMN  
  
            //START - FIFTH COLUMN
            if(ch[0] == 'x' && ch[1] == '5' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '5')
                pattern12();
  
            if(ch[0] == 'x' && ch[1] == '5' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '5')
                pattern5();
  
            if(ch[0] == 'x' && ch[1] == '5' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '5')
                pattern10();
            //END - FIFTH COLUMN            
  
            //START - SIXTH COLUMN
            if(ch[0] == 'x' && ch[1] == '6' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '6')
                pattern5();
  
            if(ch[0] == 'x' && ch[1] == '6' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '6')
                pattern6();
            //END - SIXTH COLUMN  
  
            //START - SEVENT COLUMN
            if(ch[0] == 'x' && ch[1] == '7' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '7')
                pattern6();
            //END - SEVENTH COLUMN
            
            ////END - If checks for double vehicle detected

            //To make sure what is being received from the serial port
            //Wirte on the serial to double check the characters on the Pyhton side
            Serial.print(ch[i]);
            //Flush to clear the received data
            Serial.flush();  
        }
        ////END - Handle detected vehicles        
    }
    ////END - Check serial connection status    
}
