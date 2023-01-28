#include <esp32dacFast.h>
int amplitude, tempo;
int onda = 1;
byte lb1;


void geraOnda(int tipo)
{
  if (tipo == 1) //onda senoidal
  {
    for (int i = 0; i < 64; i++) {
      dacFastWrite25(((1 + sin(2 * 3.14 * i / 64)) / 2) * amplitude);
      delayMicroseconds(tempo);
    }
  }


  if (tipo == 2) //onda quadrada
  {
    dacFastWrite25(amplitude);
    delayMicroseconds(100+tempo);
    dacFastWrite25(0);
    delayMicroseconds(100+tempo);
  }


  if (tipo == 3) //onda triangular
  {
    for (int i = 0; i < amplitude; i++) {
      dacFastWrite25(i);
      delayMicroseconds(tempo);
    }
    for (int i = amplitude; i > 0; i--) {
      dacFastWrite25(i);
      delayMicroseconds(tempo);
    }
  }


  if (tipo == 4) //onda dente de serra 1
  {
    for (int i = 0; i < amplitude; i++) {
      dacFastWrite25(i);
      delayMicroseconds(tempo);
    }
  }


  if (tipo == 5) //onda dente de serra 2
  {
    for (int i = amplitude; i > 0; i--) {
      dacFastWrite25(i);
      delayMicroseconds(tempo);
    }
  }


}

void setup() {
  dacAttachPin(25);
  pinMode(15, INPUT);
  pinMode(22, INPUT);
  pinMode(4, INPUT_PULLUP);
}

void loop() {

  amplitude = analogRead(15);
  tempo = analogRead(2);

  amplitude = map(amplitude, 0, 4096, 0, 255);
  tempo = map(tempo, 0, 4096, 0, 1000);

  byte b1 = digitalRead(4);
  if (b1 == 0 && lb1 == 0) { // se o botão + for precionado
    onda++; // incrementa a potencia
    lb1 = 1;
  } // desativa o botão +
  else { // se não for precionado
    if (lb1 == 1 && b1 == 1) // verifica se o botão está solto
      lb1 = 0;
  } // ativa o botão +

  if (onda > 5) onda = 1;



  geraOnda(onda);

}
