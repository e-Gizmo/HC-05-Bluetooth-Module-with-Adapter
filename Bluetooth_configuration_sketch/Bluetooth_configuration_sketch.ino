//*********************************************//
//           Bluetooth Configuration           //
//                                             //
//       This sample sketch is for sending AT  //
// commands using Arduino terminal to BT module//
// (HC-05). Compatible in all gizDuino boards. //
//                                             //
//                 Codes by:                   //
//        e-Gizmo Mechatronix Central          //
//         Taft, Manila, Philippines           //
//           http://www.egizmo.com             //
//           September 27,2016                 //
//*********************************************//

#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX
// 2013:3:40964

void setup()  
{
  // Open serial communications and wait for port to open:
  Serial.begin(38400);

  Serial.println("Ready for configuration...");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(38400);
}

char a=0;
char b=0;
void loop() // run over and over
{
  mySerial.listen();
  if (mySerial.available()){
    a = mySerial.read();
    Serial.print(a);
  }

  if (Serial.available()){
    b = Serial.read();
    Serial.print(b);
    mySerial.print(b);
  }
}


