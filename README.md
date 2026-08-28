========================================================================
             ESP32 Buzzer / Speaker Melody Player (LEDC)
========================================================================

1. OVERVIEW
------------------------------------------------------------------------
This project demonstrates how to generate musical tones and play a 
custom melody on an ESP32 microcontroller using the LEDC (PWM) peripheral 
driver.

It utilizes modern ESP32 Arduino Core v3.x LEDC functions (`ledcAttach`, 
`ledcWriteTone`, and `ledcWrite`) to control audio frequency and volume 
on a passive buzzer or speaker module.

------------------------------------------------------------------------
2. HARDWARE CONNECTIONS
------------------------------------------------------------------------
- Microcontroller : ESP32 / ESP32-S3
- Audio Output    : Passive Buzzer or Speaker Module
- Pin Wiring      :
  * Signal Pin (+) -> GPIO 17
  * Ground Pin (-) -> GND

------------------------------------------------------------------------
3. CODE STRUCTURE & TECHNICAL DETAILS
------------------------------------------------------------------------
- Audio Output Pin : GPIO 17
- PWM Base Freq    : 8000 Hz
- PWM Resolution   : 10-bit (Duty cycle range: 0 - 1023)
- Key Functions    :
  * ledcAttach(pin, freq, resolution) : Configures PWM on GPIO 17.
  * play(freq, duration, vol)         : Plays a tone at the specified 
                                        frequency (Hz), duration (ms), 
                                        and volume scale.
- Pause Between Notes: 30 ms delay prevents note blending/blurring.

------------------------------------------------------------------------
4. HOW TO USE
------------------------------------------------------------------------
1. Connect a passive buzzer or small speaker to GPIO 17 and GND.
2. Open the code in Arduino IDE.
3. Select your ESP32 board model under Tools -> Board.
4. Upload the sketch and listen to the melody output in a loop.

------------------------------------------------------------------------
5. NOTES & TROUBLESHOOTING
------------------------------------------------------------------------
- Active Buzzers will NOT produce correct musical pitches; ensure you are 
  using a PASSIVE buzzer or dynamic speaker.
- If using ESP32 Arduino Core v2.x, update your core to v3.x or replace 
  `ledcAttach` with `ledcSetup` / `ledcAttachPin`.
========================================================================
