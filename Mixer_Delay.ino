#define power_pin 14

int counter = 0;
int minutes = 6000;
int cycles = 3;
int CycleCount = 2;
int MixCycleTime = 4;

void setup()
{
  Serial.begin(9600);
  pinMode(14, OUTPUT);
}
void loop(){
  if (counter <= cycles) {   // number of cycles starts at 0
    Serial.println(); // starts printing below the gibberish line on startup
    Serial.print("Starting mix cycle number ");
    Serial.println (counter+1);
    digitalWrite(power_pin, HIGH);   // turn the mixer/LED on
    Serial.println("Power on & mixing");
    delay(minutes * MixCycleTime);    
    Serial.print ("Cycle number ");
    Serial.print (counter + 1);
    Serial.println (" completed"); 
    
  if (counter < cycles) {            
    Serial.println("Resting");
    }
  else if (counter = cycles){
    Serial.println("Done kneeding the dough !");
    digitalWrite(power_pin, LOW);   // turn the mixer/LED off
    }
    digitalWrite(power_pin, LOW);   // turn the mixer/LED off
    delay(minutes * MixCycleTime);              // mix cycle
    counter++; 
  }
}
