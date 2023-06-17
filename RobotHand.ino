#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <Servo.h>

// Setting up the pins for the buttons
const int buttonPinOp = 13; //D7 Button to open the hand
int buttonStateOp = 0;

const int buttonPinCl = 15; //D8 Button to close the hand
int buttonStateCl = 0;

// Setting up Servos
Servo Servo1; 
Servo Servo2; 
Servo Servo3; 
Servo Servo4;
Servo Servo5;

// The Websight HTML string
String page = "";

// Wifi settings
const char* ssid = "SSID"; // Need to change
const char* password = "Password"; // Need to change
ESP8266WebServer server(80);
IPAddress local_IP(192, 168, 0, 26); // Setting the static IP
IPAddress gateway(192, 168, 0, 1); // Setting the static IP
IPAddress subnet(255, 255, 255, 0); // Setting the static IP


void setup(void){
//   Sets up the buttons as inputs
  pinMode(buttonPinOp, INPUT);
  pinMode(buttonPinCl, INPUT);
  
//   Links servos to there pins
  Servo1.attach(16, 544, 2400);//D0 F
  Servo2.attach(5, 544, 2400);//D1 1
  Servo3.attach(4, 544, 2400);//D2 2
  Servo4.attach(0, 544, 2400);//D3 3
  Servo5.attach(2, 544, 2400);//D4 4 
  
//   Puts all servo to same angle 
  Servo1.write(0); 
  Servo2.write(0); 
  Servo3.write(0); 
  Servo4.write(0);
  Servo5.write(0);

//   Contents of HTML page
  page = "<h1>Robot Hand</h1><p><a href=\"Open\"><button>Open</button></a>&nbsp;<a href=\"Cool_man\"><button>Cool_man</button></a>&nbsp;<a href=\"Ok\"><button>Ok</button></a>&nbsp;<a href=\"One\"><button>One</button></a>&nbsp;<a href=\"Two\"><button>Two</button></a>&nbsp;<a href=\"Three\"><button>Three</button></a>&nbsp;<a href=\"Four\"><button>Four</button></a>&nbsp;<a href=\"Five\"><button>Five</button></a>&nbsp;<a href=\"Close\"><button>Close</button></a></p>";

//   Starts the Serial output for debugging and joins Wifi
  delay(1000);
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("");
 
  // Connecting to WIFI
  if (!WiFi.config(local_IP, gateway, subnet)) {
    Serial.println("Failed to configure");
  }
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
//   Debug print out
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  
//   When root webpage is loaded
  server.on("/", [](){
    server.send(200, "text/html", page);
  });
  
//   When open webpage is open
  server.on("/Open", [](){
    server.send(200, "text/html", page);
    Servo1.write(0); 
    Servo2.write(0);
    Servo3.write(0);
    Servo4.write(0);
    Servo5.write(0);
    delay(1000);
  });
  
//   When close webpage is open
  server.on("/Close", [](){
    server.send(200, "text/html", page);
    Servo1.write(180); 
    Servo2.write(180);
    Servo3.write(180);
    Servo4.write(180);
    Servo5.write(180);
    delay(1000); 
  });
  
//   When cool man webpage is open
  server.on("/Cool_man", [](){
    server.send(200, "text/html", page);
    Servo1.write(180); 
    Servo2.write(0);
    Servo3.write(180);
    Servo4.write(180);
    Servo5.write(0);
    delay(1000);
  });
  
//   When ok webpage is open
  server.on("/Ok", [](){
    server.send(200, "text/html", page);
    Servo1.write(180); 
    Servo2.write(180);
    Servo3.write(0);
    Servo4.write(0);
    Servo5.write(0);
    delay(1000);
  });
  
//   When One webpage is open
  server.on("/One", [](){
    server.send(200, "text/html", page);
    Servo1.write(0); 
    Servo2.write(180);
    Servo3.write(180);
    Servo4.write(180);
    Servo5.write(180);
    delay(1000);
  });
  
//   When Two webpage is open
  server.on("/Two", [](){
    server.send(200, "text/html", page);
    Servo1.write(0); 
    Servo2.write(0);
    Servo3.write(180);
    Servo4.write(180);
    Servo5.write(180);
    delay(1000);
  });
  
//   When Three webpage is open
  server.on("/Three", [](){
    server.send(200, "text/html", page);
    Servo1.write(0); 
    Servo2.write(0);
    Servo3.write(0);
    Servo4.write(180);
    Servo5.write(180);
    delay(1000);
  });
  
//   When Four webpage is open
  server.on("/Four", [](){
    server.send(200, "text/html", page);
    Servo1.write(0); 
    Servo2.write(0);
    Servo3.write(0);
    Servo4.write(0);
    Servo5.write(180);
    delay(1000);
  });
  
//   When Five webpage is open
  server.on("/Five", [](){
    server.send(200, "text/html", page);
    Servo1.write(0); 
    Servo2.write(0);
    Servo3.write(0);
    Servo4.write(0);
    Servo5.write(0);
    delay(1000);
  });
  server.begin();
  Serial.println("Web server started!");

//   Open and close hand to show hand is set up
  Servo1.write(0); 
  Servo2.write(0);
  Servo3.write(0);
  Servo4.write(0);
  Servo5.write(0);
  delay(1000);
  Servo1.write(180); 
  Servo2.write(180);
  Servo3.write(180);
  Servo4.write(180);
  Servo5.write(180);
  delay(1000);
  Servo1.write(0); 
  Servo2.write(0);
  Servo3.write(0);
  Servo4.write(0);
  Servo5.write(0);
}




void loop(void){
//   All ways lesion for a connect
  server.handleClient();
  
//   When open hand button is pressed
  buttonStateOp = digitalRead(buttonPinOp);
  if (buttonStateOp == HIGH) {
    Serial.println("push Op");
    Servo1.write(0); 
    Servo2.write(0);
    Servo3.write(0);
    Servo4.write(0);
    Servo5.write(0);
    delay(500);
  } 
  
  //   When Close hand button is pressed
  buttonStateCl = digitalRead(buttonPinCl);
  if (buttonStateCl == HIGH) {
    Serial.println("push cl");
    Servo1.write(180); 
    Servo2.write(180);
    Servo3.write(180);
    Servo4.write(180);
    Servo5.write(180);
    delay(500); 
  } 
  
}
