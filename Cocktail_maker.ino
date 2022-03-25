
#define wait 500 // To prevent overlapping of diaphragm pumps / relays
int order = 0;

// diaphragm pumps input for individual ingredients 
int Vodka_pump = 2;
int Cranberry_juice_pump = 3;
int Sprite_pump = 4;
int Lime_juice_pump = 5;
int Sugar_water_pump = 6;
int Gin_pump = 7;
int White_rum_pump = 8;
int tequila_pump = 9;



void setup() 
{

  Serial.begin(9600); 

  // setup pinmode and relay
  
  pinMode(2, OUTPUT); 
  digitalWrite(2,HIGH);
  
  pinMode(3, OUTPUT); 
  digitalWrite(3,HIGH);
  
  pinMode(4, OUTPUT); 
  digitalWrite(4,HIGH);
  
  pinMode(5, OUTPUT); 
  digitalWrite(5,HIGH);
  
  pinMode(6, OUTPUT);
  digitalWrite(6,HIGH);
   
  pinMode(7, OUTPUT); 
  digitalWrite(7,HIGH);
  
  pinMode(8, OUTPUT);
  digitalWrite(8,HIGH);
  
  pinMode(9, OUTPUT); 
  digitalWrite(9,HIGH);
 
}

void loop() {

if(Serial.available() > 0){ 
    Serial.println(" 1:Vodka Sprite /n2:Caproska /n3:Classic Mojito /n4:Cosmopolitan  /n5:Long Island Ice Tea  /n6:light cleaning  /n7:Flush clean");
    order = Serial.read(); // Reads the order from the serial port
    Serial.println(order);
}

switch (order)
{
    case 1: 
             Serial.println("Vodka Sprite in the making");
             Mix(3000,0,5000,0,0,0,0,0); // Vodka, Cranberry juice, Sprite, Lime juice, Sugar water, Gin , White rum , tequila
        break;
        
    case 2:  Serial.println("Caproska in the making");
             Mix(3000,0,5000,0,1200,0,0,0);
        break;
        
    case 3:  Serial.println("Classic Mojito in the making");
             Mix(0,0,5000,1800,1200,0,1800,0);
        break;
        
    case 4:  Serial.println("Cosmopolitan in the making");
             Mix(3000,3000,0,1800,0,0,0,0);
        break;
        
    case 5:  Serial.println("Long Island Ice Tea in the making");
             Mix(3000,3000,0,1800,0,0,1800,0);
        break;
        
    case 6:  Serial.println("light cleaning");
            Mix(6000,6000,6000,6000,6000,6000,6000,6000);
        break;
  
    case 7:  Serial.println("Flush clean");
             Mix(8000,8000,8000,8000,8000,8000,8000,8000);
        break;
        
    default: Serial.println("Wrong entry");
}




}

void Mix(int Pour_Vodka,int Pour_Cranberry_juice,int Pour_Sprite,int Pour_Lime_juice,int Pour_Sugar_water,int Pour_Gin ,int Pour_White_rum ,int Pour_tequila)
{

  order = 0; // Prevent repeting the same drink 
  
  delay(800);
  digitalWrite(Vodka_pump, LOW);   
  delay(Pour_Vodka);            
  digitalWrite(Vodka_pump, HIGH); 
  delay(wait);    

  digitalWrite(Cranberry_juice_pump, LOW);   
  delay(Pour_Cranberry_juice);            
  digitalWrite(Cranberry_juice_pump, HIGH); 
  delay(wait); 

  digitalWrite(Sprite_pump, LOW);   
  delay(Pour_Sprite);            
  digitalWrite(Sprite_pump, HIGH); 
  delay(wait);

  digitalWrite(Lime_juice_pump, LOW);   
  delay(Pour_Lime_juice);            
  digitalWrite(Lime_juice_pump, HIGH); 
  delay(wait);
  
  digitalWrite(Sugar_water_pump, LOW);   
  delay(Pour_Sugar_water);            
  digitalWrite(Sugar_water_pump, HIGH); 
  delay(wait); 

  digitalWrite(Gin_pump, LOW);   
  delay(Pour_Gin);            
  digitalWrite(Gin_pump, HIGH); 
  delay(wait); 

  digitalWrite(White_rum_pump, LOW);   
  delay(Pour_White_rum);            
  digitalWrite(White_rum_pump, HIGH); 
  delay(wait);

  digitalWrite(tequila_pump, LOW);   
  delay(Pour_tequila);            
  digitalWrite(tequila_pump, HIGH); 
  delay(wait); 


  Serial.println("Drink is done!"); 
  order = 0; // Prevent repeting the same drink 

  
}
