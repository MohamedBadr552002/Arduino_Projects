#define speedL 10
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define speedR 5
#define sensorL 4
#define sensorR 3
int sl=0;
int sr=0;


void setup()
{ for(int i=5;i<=10;i++)
 {pinMode(i,OUTPUT);
  }
  pinMode(sl,INPUT);
  pinMode(sr,INPUT);
}


void forward()
{digitalWrite(IN1,1);
 digitalWrite(IN2,0);
 digitalWrite(IN3,1);
 digitalWrite(IN4,0);
 digitalWrite(speedR,100);
 digitalWrite(speedL,100);
}


void backward()
{digitalWrite(IN1,0);
 digitalWrite(IN2,1);
 digitalWrite(IN3,0);
 digitalWrite(IN4,1);
 digitalWrite(speedR,100);
 digitalWrite(speedL,100);
}


void right()
{digitalWrite(IN1,1);
 digitalWrite(IN2,0);
 digitalWrite(IN3,0);
 digitalWrite(IN4,0);
 digitalWrite(speedR,0);
 digitalWrite(speedL,100);
}


void left()
{digitalWrite(IN1,0);
 digitalWrite(IN2,0);
 digitalWrite(IN3,1);
 digitalWrite(IN4,0);
 digitalWrite(speedR,100);
 digitalWrite(speedL,0);
}


void stopp()
{digitalWrite(IN1,0);
 digitalWrite(IN2,0);
 digitalWrite(IN3,0);
 digitalWrite(IN4,0);
 digitalWrite(speedR,0);
 digitalWrite(speedL,0);
}


void loop()
{sl=digitalRead(sensorL);
 sr=digitalRead(sensorR);
 
 if(sl==0&&sr==0)
 {forward();}
 else if (sl==0&&sr==1)
 {right();}
 else if (sl==1&&sr==0)
 {left();}
 else if (sl==1&&sr==1)
 {stopp();}

}
