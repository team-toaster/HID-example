/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(250);
      
  Keyboard.print("chrome.exe");
  typeKey(KEY_RETURN);
  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(50);

  Keyboard.print("https://skinnymom.com/wp-content/uploads/2016/11/food-pun-9-650x650.jpg");

  delay(250);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("notepad.exe");

  delay(500);
  typeKey(KEY_RETURN);
  delay(500);

  Keyboard.print("YOU'VE BEEN TOASTER'D");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("-TEAM TOASTER :D");

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
