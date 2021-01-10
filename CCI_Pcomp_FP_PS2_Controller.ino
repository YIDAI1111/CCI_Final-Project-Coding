/* This part is writted by Yi Dai,
 *  
 *  Initially, we considered using PS2 to control the dynamic effects on LED strips. 
 *  Finally, because the amount of code has exceeded 100%, 
 *  we had to give up this awesome input device. 
 *  We even considered using it to complete a snake-eating game. 
 *  We will consider it in our work.
 * 
 */
 

int Xaxis = A0;
int Yaxis = A1;
int Zsw = A2;
int value = 0;
void setup() {
Serial.begin(9600);
}
void loop() {
value = analogRead(Xaxis);// 读取 X 轴模拟端口0 Read X axis analog port 0
Serial.print("X:");
Serial.println(value,DEC);
value = analogRead(Yaxis);
Serial.print(" | Y:");// 读取 Y 轴模拟端口1 Read Y-axis analog port 1
Serial.println(value,DEC);
value = analogRead(Zsw);// 读取 Z 轴模拟端口2 Read Z axis analog port 2
Serial.print(" | Z:");
Serial.println(value,DEC);
delay(1000);
}
