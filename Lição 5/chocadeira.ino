/**
 * CÓDIGO PARA ARDUINO (extensão .ino) 
 * 
 * 9. Faça um programa que leia o valor de um sensor de temperatura TM35, que
 * varia de 0 a 1023, onde 0 corresponde a 0 Volts e 1023 corresponde a 5 Volts.
 * Além disso, sabemos que 1ºC é igual a 10mV. Com isso, podemos considerar a
 * seguinte equação: 
 * 
 * Temperatura em ºC = (TM35 * (5V/1023)) / 10mV
 */

#define PINO_SENSOR_TM35 0
#define PINO_RELE 8

void setup() {
  // Inicializa a porta serial (9600 bps)
  Serial.begin(9600);
  // Configura o pino do sensor de temperatura (entrada)
  pinMode(PINO_SENSOR_TM35, INPUT); 
  // Configura o pino do relé (saída)
  //pinMode(PINO_RELE, OUTPUT); 
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int sensorTM35;
  float temperaturaCelsius;

  // Lê o valor do sensor de temperatura (equivalente ao nosso scanf)
  sensorTM35 = analogRead(PINO_SENSOR_TM35);

  temperaturaCelsius = (sensorTM35 * (5000 / 1023.0)) / 10;

  if(temperaturaCelsius < 37.0) {
    // Ativa o relé (acende a luz)
    //digitalWrite(PINO_RELE, LOW);
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    // Desativa o relé (apaga a luz)
    //digitalWrite(PINO_RELE, HIGH);
    digitalWrite(LED_BUILTIN, LOW);
  }

  // Imprimimos na porta serial (equivalente ao nosso printf)
  Serial.print("Temperatura em Celsius:");
  Serial.println(temperaturaCelsius);
  
  // Deplay de 5 segundos entre cada leitura
  delay(2000);
}
