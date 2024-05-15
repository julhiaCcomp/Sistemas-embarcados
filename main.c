// Inclui a biblioteca do Arduino
#include <Arduino.h>

// Define os pinos para o botão e o LED
#define BOTAO_PIN 2
#define LED_PIN 13

// Variável para armazenar o estado atual do botão
int estadoBotao = 0;

// Função setup() - é executada uma vez quando o Arduino é ligado ou resetado
void setup() {
  // Inicializa o pino do botão como entrada
  pinMode(BOTAO_PIN, INPUT);
  
  // Inicializa o pino do LED como saída
  pinMode(LED_PIN, OUTPUT);
}

// Função loop() - é executada repetidamente enquanto o Arduino estiver ligado
void loop() {
  // Lê o estado do botão
  estadoBotao = digitalRead(BOTAO_PIN);

  // Verifica se o botão foi pressionado (estado lógico baixo)
  if (estadoBotao == LOW) {
    // Liga o LED
    digitalWrite(LED_PIN, HIGH);
  } else {
    // Desliga o LED
    digitalWrite(LED_PIN, LOW);
  }
}
