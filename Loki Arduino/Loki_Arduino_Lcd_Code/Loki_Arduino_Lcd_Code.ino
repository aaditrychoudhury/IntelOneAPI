
#include <LiquidCrystal.h>

// LCD module connections 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// The text to display
String text = " Hello and Welcome to Loki";
char ch[3] = "";                                  //An array to store the received data from serial port
// Custom character data for a solid block
byte solidBlock[8] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
////START - FUNCTIONS TO HANDLE SINGLE CAR DETECTION////
////////////////////////////////////////////////////////
void position0() {
  // Turn on all columns pixels
  for (int i = 0; i < 16; i++) {
    lcd.setCursor(i, 0);
    lcd.write((char)0);
    lcd.setCursor(i, 1);
    lcd.write((char)0);
  }
}

void position1() {
  // Turn on all columns pixels except column 1 to 4
  for (int i = 0; i < 16; i++) {
    if (i >= 1 && i <= 4) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position2() {
  // Turn on all columns pixels except column 1 to 6
  for (int i = 0; i < 16; i++) {
    if (i >= 1 && i <= 6) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position3() {
  // Turn on all columns pixels except column 5 to 10
  for (int i = 0; i < 16; i++) {
    if (i >= 5 && i <= 10) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position4() {
  // Turn on all columns pixels except column 7 to 10
  for (int i = 0; i < 16; i++) {
    if (i >= 7 && i <= 10) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position5() {
  // Turn on all columns pixels except column 9 to 12
  for (int i = 0; i < 16; i++) {
    if (i >= 9 && i <= 12) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position6() {
  // Turn on all columns pixels except column 11 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 11 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position7() {
  // Turn on all columns pixels except column 13 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 13 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position8() {
  // Turn on all columns pixels except column 14 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 14 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position9() {
  // Turn off all columns
  for (int i = 0; i < 16; i++) {
    lcd.setCursor(i, 0);
    lcd.print(" ");
    lcd.setCursor(i, 1);
    lcd.print(" ");
  }
}
// For Two Cars
void position01() {
  // Turn on all columns pixels except column 1 to 4
  for (int i = 0; i < 16; i++) {
    if (i >= 1 && i <= 4) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position02() {
  // Turn on all columns pixels except column 1 to 6
  for (int i = 0; i < 16; i++) {
    if (i >= 1 && i <= 6) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position03() {
  // Turn on all columns pixels except column 5 to 10
  for (int i = 0; i < 16; i++) {
    if (i >= 5 && i <= 10) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}
void position04() {
  // Turn on all columns pixels except column 7 to 10
  for (int i = 0; i < 16; i++) {
    if (i >= 7 && i <= 10) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position05() {
  // Turn on all columns pixels except column 9 to 12
  for (int i = 0; i < 16; i++) {
    if (i >= 9 && i <= 12) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position06() {
  // Turn on all columns pixels except column 11 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 11 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position07() {
  // Turn on all columns pixels except column 12 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 12 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position08() {
  // Turn on all columns pixels except column 14 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 14 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position12() {
  // Turn on all columns pixels except column 1 to 6
  for (int i = 0; i < 16; i++) {
    if (i >= 1 && i <= 6) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position13() {
  // Turn on all columns pixels except column 1 to 10
  for (int i = 0; i < 16; i++) {
    if (i >= 1 && i <= 10) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position14() {
  // Turn on all columns pixels except column 1 to 4 and 7 to 10
  for (int i = 0; i < 16; i++) {
    if ((i >= 1 && i <= 4) || (i >= 7 && i <= 10)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position15() {
  // Turn on all columns pixels except column 1 to 4 and 9 to 12
  for (int i = 0; i < 16; i++) {
    if ((i >= 1 && i <= 4) || (i >= 9 && i <= 12)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position16() {
  // Turn on all columns pixels except column 1 to 4 and 11 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 1 && i <= 4) || (i >= 11 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}
void position17() {
  // Turn on all columns pixels except column 1 to 4 and 13 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 1 && i <= 4) || (i >= 13 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position18() {
  // Turn on all columns pixels except column 1 to 4 and 15 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 1 && i <= 4) || (i >= 15 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position23() {
  // Turn on all columns pixels except column 1 to 8
  for (int i = 0; i < 16; i++) {
    if (i >= 1 && i <= 8) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position24() {
  // Turn on all columns pixels except column 1 to 10
  for (int i = 0; i < 16; i++) {
    if (i >= 1 && i <= 10) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position25() {
  // Turn on all columns pixels except column 1 to 6 and 9 to 12
  for (int i = 0; i < 16; i++) {
    if ((i >= 1 && i <= 6) || (i >= 9 && i <= 12)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position26() {
  // Turn on all columns pixels except column 1 to 6 and 11 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 1 && i <= 6) || (i >= 11 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position27() {
  // Turn on all columns pixels except column 1 to 6 and 12 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 1 && i <= 6) || (i >= 12 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position28() {
  // Turn on all columns pixels except column 1 to 6 and 15 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 1 && i <= 6) || (i >= 15 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position34() {
  // Turn on all columns pixels except column 5 to 10 and 15 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 5 && i <= 10) || (i >= 15 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position35() {
  // Turn on all columns pixels except column 5 to 12 and 15 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 5 && i <= 12) || (i >= 15 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position36() {
  // Turn on all columns pixels except column 3 to 8 and 11 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 3 && i <= 8) || (i >= 11 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position37() {
  // Turn on all columns pixels except column 3 to 8 and 13 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 3 && i <= 8) || (i >= 13 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position38() {
  // Turn on all columns pixels except column 3 to 8 and 15 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 3 && i <= 8) || (i >= 15 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position45() {
  // Turn on all columns pixels except column 7 to 12
  for (int i = 0; i < 16; i++) {
    if (i >= 7 && i <= 12) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position46() {
  // Turn on all columns pixels except column 7 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 7 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position47() {
  // Turn on all columns pixels except column 7 to 10 and 13 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 7 && i <= 10) || (i >= 13 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position48() {
  // Turn on all columns pixels except column 7 to 10 and 15 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 7 && i <= 10) || (i >= 15 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position56() {
  // Turn on all columns pixels except column 9 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 9 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position57() {
  // Turn on all columns pixels except column 9 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 9 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position58() {
  // Turn on all columns pixels except column 9 to 12 and 15 to 16
  for (int i = 0; i < 16; i++) {
    if ((i >= 9 && i <= 12) || (i >= 15 && i <= 16)) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position67() {
  // Turn on all columns pixels except column 11 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 11 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position68() {
  // Turn on all columns pixels except column 11 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 11 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

void position78() {
  // Turn on all columns pixels except column 13 to 16
  for (int i = 0; i < 16; i++) {
    if (i >= 13 && i <= 16) {
      lcd.setCursor(i, 0);
      lcd.print(" ");
      lcd.setCursor(i, 1);
      lcd.print(" ");
    } else {
      lcd.setCursor(i, 0);
      lcd.write((char)0);
      lcd.setCursor(i, 1);
      lcd.write((char)0);
    }
  }
}

////////////////////////////////////////////////////////
/////END - FUNCTIONS TO HANDLE 2 CARS DETECTED//////////

// Start Up Display
void displayScrollingText() {
  int textLength = text.length();
  int displayLength = 16;  // Number of characters that can be displayed at a time

  // Scroll the text
  for (int i = 0; i <= textLength - displayLength; i++) {
    lcd.clear();

    // Display a substring of the text starting from index 'i'
    lcd.setCursor(0, 0);
    lcd.print(text.substring(i, i + displayLength));

    // Delay for a short duration to control the scrolling speed
    delay(200);

    // If you want the scrolling to be continuous, uncomment the following line:
    // if (i == textLength - displayLength) i = 0;
  }
 // displayScrollingText();
  // Clear the LCD after scrolling is complete
 lcd.clear();
 }


////START - MAIN FUNCTION///////////////////////////////
////////////////////////////////////////////////////////
void setup()
{
    // put your setup code here, to run once:
    // Set up the LCD
     lcd.begin(16, 2);
    Serial.begin(9600);  //Start serial connection
    displayScrollingText();
}
////////////////////////////////////////////////////////
////END - MAIN FUNCTION/////////////////////////////////


////START - LOOP FUNCTION///////////////////////////////
////////////////////////////////////////////////////////
void loop()
{
//    ////START - Check serial connection status
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
                position0();
    
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '1')
                position1();
    
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '2')
                position2();
    
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '3')
                position3();
    
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '4')
                position4();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '5')
                position5();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '6')
                position6();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '7')
                position7();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '8')
                position8();
  
            if(ch[0] == 'x' && ch[1] == 'y' && ch[2] == '9')
                position9();
            ////END - If checks for single vehicle detected
  
  
            ////START - If checks for double vehicle detected
              
            //START - ZEROTH COLUMN
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '1' || ch[0] == 'x' && ch[1] == '1' && ch[2] == '0')
                position01();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '2' || ch[0] == 'x' && ch[1] == '2' && ch[2] == '0')
                position02();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '3' || ch[0] == 'x' && ch[1] == '3' && ch[2] == '0')
                position03();
            
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '4' || ch[0] == 'x' && ch[1] == '4' && ch[2] == '0')
                position04();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '0')
                position05();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '0')
                position06();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '0')
                position07();
  
            if(ch[0] == 'x' && ch[1] == '0' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '0')
                position08();
            //END - ZEROTH COLUMN  
  
            //START - FIRST COLUMN
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '2' || ch[0] == 'x' && ch[1] == '2' && ch[2] == '1')
                position12();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '3' || ch[0] == 'x' && ch[1] == '3' && ch[2] == '1')
                position13();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '4' || ch[0] == 'x' && ch[1] == '4' && ch[2] == '1')
                position14();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '1')
                position15();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '1')
                position16();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '1')
                position17();
  
            if(ch[0] == 'x' && ch[1] == '1' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '1')
                position18();
            //END - FIRST COLUMN  
  
            //START - SECOND COLUMN
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '3' || ch[0] == 'x' && ch[1] == '3' && ch[2] == '2')
                position23();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '4' || ch[0] == 'x' && ch[1] == '4' && ch[2] == '2')
                position24();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '2')
                position25();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '2')
                position26();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '2')
                position27();
  
            if(ch[0] == 'x' && ch[1] == '2' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '2')
                position28();
            //END - SECOND COLUMN  
  
            //START - THIRD COLUMN
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '4' || ch[0] == 'x' && ch[1] == '4' && ch[2] == '3')
                position34();
  
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '3')
                position35();
  
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '3')
                position36();
  
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '3')
                position37();
  
            if(ch[0] == 'x' && ch[1] == '3' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '3')
                position34();
            //END - THIRD COLUMN  
  
            //START - FOURTH COLUMN
            if(ch[0] == 'x' && ch[1] == '4' && ch[2] == '5' || ch[0] == 'x' && ch[1] == '5' && ch[2] == '4')
                position45();
  
            if(ch[0] == 'x' && ch[1] == '4' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '4')
                position46();
  
            if(ch[0] == 'x' && ch[1] == '4' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '4')
                position47();
  
            if(ch[0] == 'x' && ch[1] == '4' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '4')
                position48();
            //END - FOURTH COLUMN  
  
            //START - FIFTH COLUMN
            if(ch[0] == 'x' && ch[1] == '5' && ch[2] == '6' || ch[0] == 'x' && ch[1] == '6' && ch[2] == '5')
                position56();
  
            if(ch[0] == 'x' && ch[1] == '5' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '5')
                position57();
  
            if(ch[0] == 'x' && ch[1] == '5' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '5')
                position58();
            //END - FIFTH COLUMN            
  
            //START - SIXTH COLUMN
            if(ch[0] == 'x' && ch[1] == '6' && ch[2] == '7' || ch[0] == 'x' && ch[1] == '7' && ch[2] == '6')
                position67();
  
            if(ch[0] == 'x' && ch[1] == '6' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '6')
                position68();
            //END - SIXTH COLUMN  
  
            //START - SEVENT COLUMN
            if(ch[0] == 'x' && ch[1] == '7' && ch[2] == '8' || ch[0] == 'x' && ch[1] == '8' && ch[2] == '7')
                position78();
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
////////////////////////////////////////////////////////
////END - LOOP FUNCTION/////////////////////////////////
