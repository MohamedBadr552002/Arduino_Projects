#define speedL 10
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define speedR 5
#define trig 11
#define echo 4
long duration,distance ;

void setup() {for(int i=5;i<=11;i++)
 {pinMode(i,OUTPUT);
  }
  pinMode(echo,INPUT);
}

void ultrasonic()
{digitalWrite(trig,0);
 delayMicroseconds(2);
 digitalWrite(trig,1);
 delayMicroseconds(10);
 digitalWrite(trig,0);
 duration= pulseIn(echo,1);
 distance=(duration/2)*0.0343;
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
void loop() {
  ultrasonic();
  if(distance==20)
  {stopp();
   delay(500);
   backward();
   delay(1000);
   right();
   delay(1000);
    }
    
  else 
  {forward();}

}
