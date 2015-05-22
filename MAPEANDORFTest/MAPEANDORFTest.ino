#include <RFremote.h>
SignalPatternParams params;
const char *cmd = "0110100100110110100110110100100100110110100100100110100110110100100110110100110100110";
RFrecv rfrecv;

void setup()
{
  Serial.begin(9600);
  delay(500);
  Serial.println("INICIADO!");
  params.spaceMin = 4500;
  params.spaceMax = 4800;
  params.dotMin = 300;
  params.dotMax = 400;
  params.traceMin = 650;
  params.traceMax = 750;
  params.skipFirst = 1;
  params.skipLast = 1;
  
  
  
  params.spaceMin = 7500;
  params.spaceMax = 7800;
  params.dotMin = 320;
  params.dotMax = 400;
  params.traceMin = 650;
  params.traceMax = 770;
  params.skipFirst = 0;
  params.skipLast = 0;
 
  
  rfrecv = RFrecv(&params);
  rfrecv.begin();
}

void loop()
{
  if (rfrecv.available())
  {
    if (strncmp((char*)rfrecv.cmd, cmd, CMD_SIZE) == 0)
    {
      Serial.println("COMANDO CORRETO!");
    }
    else
    {
      Serial.println("ERRO!");
    }
  }
}
