int e1 = 8 ; 
int e2 = 9 ;

int mr1 = 10 ;
int mr2 = 11  ;
int ml1 = 5 ; 
int ml2 = 6;

int sen_1 = 2 ;
int sen_2 = 3 ;
int sen_3 = 12 ;
int sen_4 = 13 ;

int val1 ,val2,val3,val4;

int base = 150 ;
int l_base = 50;
int r_base = 50;


void setup() {
  // put your setup code here, to run once:

pinMode(e1, OUTPUT);
pinMode(e2, OUTPUT);

pinMode(ml1, OUTPUT);
pinMode(ml2, OUTPUT);
pinMode(mr1, OUTPUT);
pinMode(mr2, OUTPUT);

pinMode(sen_1,INPUT);
pinMode(sen_2,INPUT);
pinMode(sen_3,INPUT);
pinMode(sen_4,INPUT);


  digitalWrite(e1, HIGH);
  digitalWrite(e2, HIGH);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  val1 = digitalRead(sen_1);
  val2 = digitalRead(sen_2);
  val3 = digitalRead(sen_3);
  val4 = digitalRead(sen_4);
  


  if((val1 == 0) && (val2 == 0) && (val3==0) && (val4==0))
  {
    analogWrite(mr1 , base );
    digitalWrite(mr2 , LOW);
    analogWrite(ml1 , base );
    digitalWrite(ml2 , LOW);
  }

  else if((val1 == 0) && (val2 == 1) && (val3==0) && (val4==0))
  {
    analogWrite(mr1 , base );
    digitalWrite(mr2 , LOW);
    analogWrite(ml1 , base - l_base);
    digitalWrite(ml2 , LOW);
  }

  else if((val1 == 0) && (val2 == 0) && (val3==1) && (val4==0))
  {
    analogWrite(mr1 , base - r_base);
    digitalWrite(mr2 , LOW);
    analogWrite(ml1 , base);
    digitalWrite(ml2 , LOW);
  }

  else if((val1 == 1) && (val2 == 0) && (val3==0) && (val4==0))
  {
    analogWrite(mr1 , 150);
    digitalWrite(mr2 , LOW);
    analogWrite(ml2 , 100 );
    digitalWrite(ml1 , LOW);
    

//    analogWrite(mr1 , base + r_base);
//    digitalWrite(mr2 , LOW);
//    analogWrite(ml1 , 0 );
//    digitalWrite(ml2 , LOW);
  }

  else if((val1 == 0) && (val2 == 0) && (val3==0) && (val4==1))
  {

    analogWrite(mr2 , 100 );
    digitalWrite(mr1 , LOW);
    analogWrite(ml1 , 80 );
    digitalWrite(ml2 , LOW);
  }

  else if((val1 == 1) && (val2 == 1) && (val3==1) && (val4==1))
  {   
    digitalWrite(mr1 , LOW);
    digitalWrite(mr2 , LOW);
    analogWrite(ml1 , LOW);
    digitalWrite(ml2 , LOW);
 
  }
  else if((val1 == 1) && (val2 == 1) && (val3==0) && (val4==0))
  {

    analogWrite(mr2 , 200 );
    digitalWrite(mr1 , LOW);
    analogWrite(ml1 , 200 );
    digitalWrite(ml2 , LOW);
  }
  else if((val1 == 0) && (val2 == 0) && (val3==1) && (val4==1))
  {

    analogWrite(mr2 , 200 );
    digitalWrite(mr1 , LOW);
    analogWrite(ml1 , 200 );
    digitalWrite(ml2 , LOW);
  }
  Serial.print("sen_1- ");
  Serial.print(val1);
  Serial.print("\t");
  Serial.print("sen_2- ");
  Serial.print(val2);
  Serial.print("\t");
   Serial.print("sen_3- ");
  Serial.print(val3);
  Serial.print("\t");
  Serial.print("sen_4- ");
  Serial.print(val4);
  Serial.print("\n");
  
  
}
