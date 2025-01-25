#include "main.h"

void setup()
{
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial1.setPins(RX_PIN, TX_PIN);

  serialSetup();
  displaySetup();
  keypadSetup();
  initBuzzer();
}

void loop()
{
  vTaskDelay(1);
}