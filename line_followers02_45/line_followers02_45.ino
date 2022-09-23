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

int base = 100 ;
int l_base = 80;
int r_base = 80;


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

digitalWrite(mr1,LOW);
digitalWrite(mr2,HIGH);
digitalWrite(ml1,HIGH);
digitalWrite(ml2,LOW);
//    analogWrite(mr2 , 150 );
//    analogWrite(mr1 , 0);
//    analogWrite(ml2 , 150 );
//    analogWrite(ml1 , 0);
  

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
