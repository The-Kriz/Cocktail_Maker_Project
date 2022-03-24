int order = 0;
void setup() {
  // put your setup code here, to run once:

}

void loop() {

if(Serial.available() > 0){ 
    order = Serial.read(); // Reads the order from the serial port
    Serial.println(order);
}

switch (order)
{
    case 1: 
             Serial.println("Vodka Sprite in the making");
           //  Mix(3000,0,5000,0,0,0,0,0); // Vodka, Cranberry juice, Sprite, Lime juice, Sugar water, Gin , White rum , tequila
        break;
    case 2:  Serial.println("Caproska in the making");
           //  Mix(3000,0,5000,0,1200,0,0,0);
    
        break;
    case 3:  Serial.println("Classic Mojito in the making");
           //  Mix(0,0,5000,1800,1200,0,1800,0);
    
        break;
    case 4:  Serial.println("Cosmopolitan in the making");
             //Mix(3000,3000,0,1800,0,0,0,0);
    
        break;
    case 5:  Serial.println("Long Island Ice Tea in the making");
            // Mix(3000,3000,0,1800,0,0,1800,0);
    
        break;
    default: Serial.println("Wrong entry");
}




}

void Mix(int Vodka,int Cranberry_juice,int Sprite,int Lime_juice,int Sugar_water,int Gin ,int White_rum ,int tequila){}
