int led = LED_BUILTIN;

void setup() 
{
  pinMode(led, OUTPUT);
}

//shortblink
void dot() 
{
  digitalWrite(led, HIGH);
  delay(200); 
  digitalWrite(led, LOW);
  delay(200);
}

//longblink
void dash() 
{
  digitalWrite(led, HIGH);
  delay(600); 
  digitalWrite(led, LOW);
  delay(200);
}

void letterGap() 
{
  delay(800);
}

void wordGap() 
{
  delay(1400);
}

void loop() 
{
  // B (-...)
  dash(); 
  dot(); 
  dot(); 
  dot(); 
  letterGap();

  // H (....)
  dot(); 
  dot(); 
  dot(); 
  dot(); 
  letterGap();

  // A (.-)
  dot(); 
  dash(); 
  letterGap();

  // V (...-)
  dot(); 
  dot(); 
  dot(); 
  dash(); 
  letterGap();

  // I (..)
  dot(); 
  dot(); 
  letterGap();

  // S (...)
  dot(); 
  dot(); 
  dot(); 
  letterGap();

  // H (....)
  dot(); 
  dot(); 
  dot(); 
  dot(); 
  letterGap();

  // A (.-)
  dot(); 
  dash(); 
  
  wordGap(); 
}
