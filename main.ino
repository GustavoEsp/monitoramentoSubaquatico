#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"

#define TFT_DC 9
#define TFT_CS 10
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

int ldrPin = A0;
int leituraLdr = 0;
void setup() {
  pinMode(ldrPin, INPUT);
  Serial.begin(9600);
  tft.begin();
}

void loop() {
  // Leitura e tratamento do sensor LDR
  leituraLdr = analogRead(ldrPin);
  leituraLdr = map(leituraLdr, 1023, 0, 0, 100);

  Serial.println(leituraLdr);
 
  tft.fillScreen(ILI9341_BLACK);

  //Titulo do lcd
  tft.setCursor(55, 10);
  tft.setTextColor(ILI9341_CYAN);
  tft.setTextSize(3);
  tft.println("Detector");
  tft.setCursor(105, 40);
  tft.println("de");
  tft.setCursor(55, 65);
  tft.println("Petroleo");

  // leitura ldr
  tft.setCursor(100, 150);
  tft.setTextColor(ILI9341_CYAN);
  tft.setTextSize(4);
  tft.print(leituraLdr);
  tft.setTextSize(3);
  tft.setCursor(70, 185);
  tft.println("Lumens");
  

  // Nivel ldr
  
  tft.setTextSize(4);

  // 10 - vazamento
  if(leituraLdr <= 10){
    tft.setCursor(20, 260);
    tft.setTextColor(ILI9341_RED);
    tft.print("Vazamento");
    tft.setCursor(15, 290);
    tft.print("Detectado");
    delay(1000);
  }
  // 20 - possivel vazamento
  else if(leituraLdr <= 20){
    tft.setCursor(30, 260);
    tft.setTextColor(ILI9341_YELLOW);
    tft.print("Possivel");
    tft.setCursor(20, 290);
    tft.print("Vazamento");
    delay(3000);
  }
  // nenhum vazamento
  else{
    tft.setCursor(50, 260);
    tft.setTextColor(ILI9341_CYAN);
    tft.print("Nenhum");
    tft.setCursor(20, 290);
    tft.print("Vazamento");
    delay(3000);
  } 
}

