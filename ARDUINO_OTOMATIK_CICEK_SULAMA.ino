

// GİRİŞ DEĞERLERİMİZİ TANIMLIYORUZ 
#define  in1 8
#define  in2 9
#define nem_sensoru A0

#define calisma_siniri 600 // TOPRAK NEM SENSÖRÜNÜN ÇALIŞMASI İÇİN SINIR SEVİYESİNİ TANIMLADIK.
int nem_degeri = 0; // NEM DEGERİ İÇİN DEĞİŞKEN ATADIK




void setup()
{
  pinMode(in1,OUTPUT); // MOTOR SÜRÜCÜ KARTI GİRİŞLERİNİ ÇIKIŞ OLARAK TANIMLADIK
  pinMode(in2,OUTPUT);
 Serial.begin(9600); // SERİAL HABERLEŞMEYİ BAŞLATTIK
}

void loop() {
 nem_degeri = analogRead(nem_sensoru); // NEM SENSÖRÜNDEN GELEN VERİLERİ OKUDUK.
 Serial.println(nem_degeri);// NEM SENSÖRÜNDEN GELEN VERİLERİ YAZDIRDIK.
 
 if (nem_degeri > calisma_siniri) // EĞER NEM DEĞERİ ÇALIŞMA SINIRINDAN BÜYÜK İSE SU MOTORUNA KOMUT VERİYORUZ.
{
  digitalWrite(in1, HIGH); // SU MOTORUNA ÇALISMASI İÇİN KOMUT VERİYORUZ.
   digitalWrite(in2 , LOW);
   //delay(3000);
}
else
 {
     digitalWrite(in1, LOW);  //// EĞER NEM DEĞERİ ÇALIŞMA SINIRINDAN KÜÇÜK İSE SU MOTORUNA KOMUT VERİYORUZ VE SUYU KESİYOR.     
 }

7


}
