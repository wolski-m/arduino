// GeoCaching LED-Signal for 48.0881264,11.6533433

#define LED 13
#define DOT -3
#define NUM -12

int8_t geo[] = {NUM,4,8,DOT,0,8,8,1,2,6,4,NUM,1,1,DOT,6,5,3,3,4,3,3};
uint8_t idx = 0;

void setup()
{
  pinMode(LED,OUTPUT);
}

void loop()
{
  int8_t  num = geo[idx];
  int16_t delay_on = 250;
  int16_t delay_off = 500;
  int16_t delay_next = 1500;
  
  // special signals
  if (num < 0) 
  {
    num = -num;
    delay_on = 100;
    delay_off = 100;
    delay_next = 2500;
  }
  if (num == 0) 
  {
    num = 10;
  }  

  // led blink code
  while(num > 0) {
    num--;  
    digitalWrite(LED,HIGH);  
    delay(delay_on);  
    digitalWrite(LED,LOW);    
    delay(delay_off);  
  }     

  // next digit
  delay(delay_next);
  idx++;
  if (idx >= sizeof(geo)) {
    idx = 0;  
  }
}