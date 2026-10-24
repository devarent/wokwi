// Kamis, 22 Oktober 2026
// Nama: Muhammad Arya Fatthurahman
// NIM: 2023230006

// PWM Potensiometer dan LED dari instruktur
int ledPin = 2; // deklarasi pin LED
int potensioPin = 34; // deklarasi pin potensio
int val = 0; // deklarasi variabel nilai analogRead

void setup()
{
  Serial.begin(9600); // inisialisasi serial monitor dan baud rate
  pinMode(ledPin, OUTPUT); // inisialisasi pin LED
}

void loop()
{
  val = analogRead(potensioPin); // membaca nilai analog dari pin potensio
  int nilaipot = val / 4; // konversi nilai ESP32 (0-4095) ke nilai 0-1023
  int kecerahan = map(nilaipot, 0, 1023, 0, 255); // konversi ke nilai PWM 0-255
  analogWrite(ledPin, kecerahan); // mengatur kecerahan LED dengan PWM
  Serial.println(val); // menampilkan nilai pembacaan potensio
}
