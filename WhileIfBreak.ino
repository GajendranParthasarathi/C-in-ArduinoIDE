void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 if (Serial.available()>0)
  {
int a=Serial.read();
delay(2000);
int b=Serial.read();
Serial.print("Value a: ");
 Serial.println(a);
 Serial.print("Value b: ");
 Serial.println(b);
 delay(2000);
while(a==48)
{
Serial.println("a=0");
if (b==49)
break;
Serial.println("b!=1");}
}}

/*if a=0, b=2
Value a: 48
Value b: 50
a=0
b!=1
a=0
b!=1
a=0
b!=1
a=0
b!=1
a=0
b!=1
a=0
b!=1
a=0
b!=1

if a=0, b=0
Value a: 48
Value b: 48
a=0
b!=1
a=0
b!=1
a=0
b!=1
a=0
b!=1
a=0
b!=1
a=0
b!=1
a=0
b!=1



if a=0, b=1
Value a: 48
Value b: 49
a=0
*/
