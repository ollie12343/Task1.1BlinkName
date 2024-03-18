int MORSE_UNIT = 100;



void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void morse_delay(int num){

  int time = num * MORSE_UNIT;
  delay(time);
}

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  morse_delay(1);
  digitalWrite(LED_BUILTIN, LOW);
  morse_delay(1);
}

void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  morse_delay(3);
  digitalWrite(LED_BUILTIN, LOW);
  morse_delay(1);
}

void convert(String usr_input){

  usr_input.toLowerCase();

  for(int i = 0; i < usr_input.length(); i++){
    char character = usr_input.charAt(i);
    switch (character) {
      case 'a':
        dot();
        dash();
        break;
      case 'b':
        dash();
        dot();
        dot();
        dot();
        break;
      case 'c':
        dash();
        dot();
        dash();
        dot();
        break;
      case 'd':
        // statements
        dash();
        dot();
        dot();
        break;
      case 'e':
        dot();
        break;
      case 'f':
        // statements
        dot();
        dot();
        dash();
        dot();
        break;
      case 'g':
        // statements
        dash();
        dash();
        dot();
        break;
      case 'h':
        // statements
        dot();
        dot();
        dot();
        dot();
        break;
      case 'i':
        // statements
        dot();
        dot();
        break;
      case 'j':
        // statements
        dot();
        dash();
        dash();
        dash();
        break;
      case 'k':
        // statements
        dash();
        dot();
        dash();
        break;
      case 'l':
        // statements
        dot();
        dash();
        dot();
        dot();
        break;
      case 'm':
        // statements
        dash();
        dash();
        break;
      case 'n':
        // statements
        dash();
        dot();
        break;
      case 'o':
        // statements
        dash();
        dash();
        dash();
        break;
      case 'p':
        // statements
        dot();
        dash();
        dash();
        dot();
        break;
      case 'q':
        // statements
        dash();
        dash();
        dot();
        dash();
        break;
      case 'r':
        // statements
        dot();
        dash();
        dot();
        break;
      case 's':
        // statements
        dot();
        dot();
        dot();
        break;
      case 't':
        // statements
        dash();
        break;
      case 'u':
        // statements
        dot();
        dot();
        dash();
        break;
      case 'v':
        // statements
        dot();
        dot();
        dot();
        dash();
        break;
      case 'w':
        // statements
        dot();
        dash();
        dash();
        break;
      case 'x':
        // statements
        dash();
        dot();
        dot();
        dash();
        break;
      case 'y':
        // statements
        dash();
        dot();
        dash();
        dash();
        break;
      case 'z':
        // statements
        dash();
        dash();
        dot();
        dot();
        break;
      case ' ':
        //includes built in delay
        morse_delay(6);
        break;
      default:
        break;
    }
    // includes built in delay
    morse_delay(2);
  }

}


// Main Loop
void loop() {
  // put your main code here, to run repeatedly:
  String usr_input = Serial.readString();

  if (usr_input.length() == 0)
  {
    return;
  }


  convert(usr_input);


  // Time between words is 7 units (must include built in delay)
  delay(MORSE_UNIT * 6);

}
