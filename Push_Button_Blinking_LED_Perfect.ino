const int LED = 13;
const int BUTTON = 7;
int val = 0;
int old_val = 0;// This stores the previous value of 'val'
int state = 0;   // 0 = LED off and 1 = LED on
void setup() 
 {  
  pinMode(LED, OUTPUT);   // tell Arduino LED is an output 
  pinMode(BUTTON, INPUT); // and BUTTON is an input
 }
void loop()
{
  val = digitalRead(BUTTON); // read input value and store it  
   if ((val == HIGH) && (old_val == LOW))
   {
     state = 1 - state;
      delay(10);                         
   }
    old_val = val;  // val is now old, let's store it
     if (state == 1)
     {
       digitalWrite(LED, HIGH); // turn LED ON
     }
      else 
      {
         digitalWrite(LED, LOW);
      }
}

