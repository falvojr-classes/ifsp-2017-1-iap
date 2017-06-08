/**
 * Altere o exercício anterior para que sejam feitas as leituras
 * de apenas 10 valores do sensor TM35. Além disso, realize a
 * média de temperatura dos valores lidos, desconsiderando o
 * maior e o menor valor.
 */

#define PINO_SENSOR_TM35 0
#define PINO_RELE 8

#define ELEMENTOS 10

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
    int i, maior, menor;
    float celsius, media;

    media = 0;
    maior = 0;    // O maior é inicializado com o menor valor possível
    menor = 1023; // O menor é inicializado com o maior valor possível

    for (i = 0; i < ELEMENTOS; i++) {
      // Cria uma variável auxiliar
      int valorAtual = tm35[i];
      // Acumula o valor atual na média
      media += valorAtual;
      // Verifica o maior valor
      if (valorAtual > maior) {
        maior = valorAtual;
      }
      // Verifica o menor valor
      if (valorAtual < menor) {
        menor = valorAtual;
      }
    }

    media = media - maior - menor;
    media /= ELEMENTOS - 2;

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

    indiceTm35 = 0;
  }
  // Deplay de 0.25 segundos entre cada leitura
  delay(250);
}
