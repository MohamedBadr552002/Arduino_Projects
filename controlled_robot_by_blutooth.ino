#define speedL 10
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define speedR 5
char reading ;
void setup() 
{
  Serial.begin(9600);
for(int i=5 ;i<=10 ;i++)
{pinMode(i,OUTPUT);
  }
}

void forward()
{digitalWrite(IN1,1);
 digitalWrite(IN2,0);
 digitalWrite(IN3,1);
 digitalWrite(IN4,0);
 digitalWrite(speedR,150);
 digitalWrite(speedL,150);
}


void backward()
{digitalWrite(IN1,0);
 digitalWrite(IN2,1);
 digitalWrite(IN3,0);
 digitalWrite(IN4,1);
 digitalWrite(speedR,150);
 digitalWrite(speedL,150);
}


void right()
{digitalWrite(IN1,1);
 digitalWrite(IN2,0);
 digitalWrite(IN3,0);
 digitalWrite(IN4,0);
 digitalWrite(speedR,0);
 digitalWrite(speedL,150);
}


void left()
{digitalWrite(IN1,0);
 digitalWrite(IN2,0);
 digitalWrite(IN3,1);
 digitalWrite(IN4,0);
 digitalWrite(speedR,150);
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
{

  
  if(Serial.available()>0)
  {reading=Serial.read();
   switch(reading)
   { 
    case 'F':forward();
     break;
    case 'B':backward();
     break;
    case 'R':right();
     break;
    case 'L':left();
     break;
    case 'S':stopp();   
    }
   } 
  
   
   
}



   
  



  
             
 

  


