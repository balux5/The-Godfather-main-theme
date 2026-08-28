const int audioPin = 17;

// --- NOT TEZLİKLƏRİ (Bütün çatışmayanlar əlavə olundu) ---
#define NOTE_AS3 233
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523

void setup() {
  ledcAttach(audioPin, 8000, 10);
}

void play(int freq, int duration, int vol) {
  if (freq > 0) {
    ledcWriteTone(audioPin, freq);
    ledcWrite(audioPin, vol * 4);
  } else {
    ledcWrite(audioPin, 0);
  }
  delay(duration);
  ledcWrite(audioPin, 0);
  delay(30); 
}

void loop() {
  int v = 50; 
  int t = 400; 

  // --- Birinci Hissə ---
  play(NOTE_E4, t, v);
  play(NOTE_A4, t, v);
  play(NOTE_C5, t, v);
  play(NOTE_B4, t, v);
  play(NOTE_A4, t, v);
  play(NOTE_C5, t, v);
  play(NOTE_A4, t, v);
  play(NOTE_B4, t, v);
  play(NOTE_A4, t, v);
  play(NOTE_F4, t, v);
  play(NOTE_G4, t, v);
  play(NOTE_E4, t*2, v);

  delay(t);

  // --- İkinci Hissə ---
  play(NOTE_E4, t, v);
  play(NOTE_A4, t, v);
  play(NOTE_C5, t, v);
  play(NOTE_B4, t, v);
  play(NOTE_A4, t, v);
  play(NOTE_C5, t, v);
  play(NOTE_A4, t, v);
  play(NOTE_B4, t, v);
  play(NOTE_A4, t, v);
  play(NOTE_E4, t, v);
  play(NOTE_DS4, t, v);
  play(NOTE_D4, t*2, v);

  delay(3000); 
}