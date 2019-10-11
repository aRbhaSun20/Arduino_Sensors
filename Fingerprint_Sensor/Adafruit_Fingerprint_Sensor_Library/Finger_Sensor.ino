

#include <Adafruit_Fingerprint.h>

void loop()
{
fingerprintID = getFingerprintID(); //We scan the fingerprint here
delay(50);
if(fingerprintID == 1) //We have found a valid fingerprint with the id 1
{
display.drawBitmap(30,35,icon,60,60,GREEN);
delay(2000);
displayUnlockedScreen();
displayIoanna();
delay(5000);
display.fillScreen(BLACK);
displayLockScreen();
}
if(fingerprintID == 2) //We have found a valid fingerprint with the id 2 {
display.drawBitmap(30,35,icon,60,60,GREEN);
delay(2000);
displayUnlockedScreen();
displayNick();
delay(5000);
display.fillScreen(BLACK);
displayLockScreen();
}
}