void setup() {
  // 设置串口
  Serial.begin(9600);
}

void loop() {
  // 串口输出文字验证
  while(Serial.available())
  {
    char c=Serial.read();
    if(c=='A')
    {
      Serial.println("Hello I am Roger");
    }
    if(c=='B')
    {
      Serial.println("Byebye!");
    }
  }
}
