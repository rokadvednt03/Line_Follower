//moter left -> motor 1 
//motor right -> motor 2
int motor_left_1 = 5 ;
int motor_left_2  = 6 ;
int motor_right_1 = 10 ;
int motor_right_2 = 11 ;

//int sen_5 = A5;
//int sen_4 = A1;
//int sen_3 = A2;
//int sen_2 = A3;
//int sen_1 = A4;

int enable1 = 9;
int enable2 = 8 ;

void setup() {
  // put your setup code here, to run once  :
pinMode(motor_left_1,OUTPUT);
pinMode(motor_left_2,OUTPUT);
pinMode(motor_right_1,OUTPUT);
pinMode(motor_right_2,OUTPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);
pinMode(enable1,OUTPUT);
pinMode(enable2,OUTPUT);

//ENABLE L293D
digitalWrite(enable1,HIGH);
digitalWrite(enable2,HIGH);
}

void loop() {
  int base = 255;
  int lbias = 0;
  int rbias = 0;
  digitalWrite(motor_left_2,LOW);
  analogWrite(motor_left_1,base + rbias);
  digitalWrite(motor_right_2,LOW);
  analogWrite(motor_right_1,base + lbias);
  
  // put your main code here, to run repeatedly:

}
