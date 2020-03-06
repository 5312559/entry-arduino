int led_green = 13;
int led_yellow = 12;
int led_red = 11;
int count = 0;

void setup() { 
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
  
  Serial.begin(9600);
} 
  
void loop() { 
  count = count + 1;
  
  while(count <= 100)
  {
    Serial.println(count);
    
    if(count % 2 == 0)  
      digitalWrite(led_green, HIGH); 
    if(count % 3 == 0)  
      digitalWrite(led_yellow, HIGH); 
    if(count % 4 == 0)  
      digitalWrite(led_red, HIGH);  
        
    delay(1000); 
    
    if(count % 2 == 0)  
      digitalWrite(led_green, LOW); 
    if(count % 3 == 0)  
      digitalWrite(led_yellow, LOW); 
    if(count % 4 == 0)  
      digitalWrite(led_red, LOW);    
    
    count = count + 1;
  }
}
