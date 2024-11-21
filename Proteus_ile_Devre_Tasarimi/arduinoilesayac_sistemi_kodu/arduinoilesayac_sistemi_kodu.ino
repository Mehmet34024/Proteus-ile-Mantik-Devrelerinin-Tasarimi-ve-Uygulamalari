void setup() {
  // İlk başta arduino üzride kullanacağımız bacakları çıkış bacağı olarak tanımlıyoruz.

 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);

}

void loop() {
  /* loop (döngü) kısmına 7 segment display de oluşturmak istediğimiz sayıları komutlamak için
  sayıları tanımlıyoruz */

  zero();
  one();
  two();
  three();
  four();
  five();
  six();
  seven();
  eight();
  nine();

}

void zero() {
  /* sıfırı 7 segment displayde yazdırmak için oluşturduğumuz voidde devre elemanın üzerinde 
 bulunan 7 ledi tek tek hangisi yanmalı hangisi yanmamalı şeklinde kodluyoruz. Bunu da arduino 
 üzerinde bağladığımız 2'den 8'e kadar olan bacaklardan sinyal çıkışı vererek yapıyoruz. 
 Sıfır şeklini alması için 7 led den arduino yardımıyla yakma komutunu gönderiyoruz. */

 digitalWrite(8,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(3,HIGH);
 digitalWrite(2,LOW);
 delay(1000);
 /* Delay komutu bir işlemin yapılma süresini belirlediğimiz , yada diğer bir deyimle
  iki işlem arasındaki bekleme süresini ayarladığımız komuttur. Delay komutu ile bir ledin
  yanma süresini ve bir motorun durma süresini belirleyebiliriz. Delay içerisine milisaniye
  cinsinden bir değer yazabilirsiniz. */
}

  // Bu işlemleri 7 ledden gerekli olanların yanmasını sağlayarak diğer sayılar içinde yapıyoruz

void one() {

  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  delay(1000);
}

void two() {

  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  delay(1000);
}

void three(){

  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH); 
  delay(1000);
}

void four(){

  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH); 
  delay(1000);

}

void five(){

  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH); 
  delay(1000);

}

void six(){

  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH); 
  delay(1000);

}

void seven(){

  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW); 
  delay(1000);

}

void eight(){

  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH); 
  delay(1000);

}

void nine(){

  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH); 
  delay(1000);

}