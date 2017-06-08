/**
 * Altere o exercício anterior utilizando o Bubble Sort para melhorar sua lógica.
 */

#define PINO_SENSOR_TM35 0
#define PINO_RELE 8

#define ELEMENTOS 50
#define CORTE 5

// Variáveis Globais
int tm35[ELEMENTOS], indiceTm35 = 0;

void setup() {
  // Inicializa a porta serial (9600 bps)
  Serial.begin(9600);
  // Configura o pino do sensor de temperatura (entrada)
  pinMode(PINO_SENSOR_TM35, INPUT);
  // Configura o pino do relé (saída)
  pinMode(PINO_RELE, OUTPUT);
}

void loop() {
  // Lê o valor do sensor de temperatura (equivalente ao nosso scanf)
  tm35[indiceTm35] = analogRead(PINO_SENSOR_TM35);
  Serial.println(tm35[indiceTm35]);
  indiceTm35++;

  if (indiceTm35 == ELEMENTOS) {
    int i;
    float celsius, media = 0;

    // Ordena o vetor de elementos
    bubbleSort();

    // Ignoramos os maiores e os menores com base no CORTE
    for (i = CORTE; i < ELEMENTOS - CORTE; i++) {
      media += tm35[i];
    }

    // Faz a média condidenrando o CORTE
    media /= (ELEMENTOS - (CORTE * 2));

    celsius = (media * (5000 / 1023.0)) / 10;

    if (celsius < 37.8) {
      // Ativa o relé (acende a luz)
      digitalWrite(PINO_RELE, HIGH);
    } else {
      // Desativa o relé (apaga a luz)
      digitalWrite(PINO_RELE, LOW);
    }

    // Imprimimos na porta serial (equivalente ao nosso printf)
    Serial.print("Temperatura em Celsius:");
    Serial.println(celsius);

    // Zera o indice para a próxima leitura
    indiceTm35 = 0;
  }
  // Deplay de 0.25 segundos entre cada leitura
  delay(250);
}

void bubbleSort() {
  int houveTroca = 1;
  int j = 0;
  int aux;
  while (houveTroca == 1) {
    houveTroca = 0;
    j++;
    for (int i = 0; i < ELEMENTOS - j; i++) {
      if (tm35[i] > tm35[i + 1]) {
        aux = tm35[i];
        tm35[i] = tm35[i + 1];
        tm35[i + 1] = aux;
        houveTroca = 1;
      }
    }
  }
}
