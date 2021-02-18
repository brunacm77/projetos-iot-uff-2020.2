
int LED_BUILTIN =2; // declaração do led como inteiro

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Led acesso
  delay(500);                       // temporização
  digitalWrite(LED_BUILTIN, LOW);    // Led apagado
  delay(1000);                       
}
