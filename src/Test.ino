/*
 * Project Test
 * Description:
 * Author:
 * Date:
 */
int led1 = D0;
int led2 = D7;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  // We'll leave it on for 1 second...
  delay(1000);
  // Then we'll turn it off...
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  // Wait 1 second...
  delay(1000);
}
