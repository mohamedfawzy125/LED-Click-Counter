// C++ code
int counter=0 ;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(8 ,INPUT);
}

void loop()
{
  if(digitalRead(8)==1){
   counter++ ;
     if(counter==1){
     digitalWrite(13,1);
   } 
    else if (counter==2)
    { digitalWrite(12,1);  }
    
    else if (counter==3)
    {digitalWrite(11,1);}
    
    else{
       digitalWrite(13,0);
        digitalWrite(12,0); 
        digitalWrite(11,0);
      counter=0; 
    }
      
  }
   delay(250);
 
}