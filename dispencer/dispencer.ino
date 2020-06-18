int A_1A = 22; //모터드라이브 A_1A 핀 변수 선언

int A_2A = 23; //모터드라이브 A_2B 핀 변수 선언   //1차 원료 탱크 모터 'A'



int B_1A = 24; //모터드라이브 B_1A 핀 변수 선언

int B_2A = 25; //모터드라이브 B_2B 핀 변수 선언   //1차 원료 탱크 모터 'B'



int C_1A = 26; //모터드라이브 C_1A 핀 변수 선언

int C_2A = 27; //모터드라이브 C_2B 핀 변수 선언    //혼합 프로펠러 모터ㅗ 'C'



int D_1A = 28; //모터드라이브 D_1A 핀 변수 선언

int D_2A = 29; //모터드라이브 D_2B 핀 변수 선언    //최종 배출 디스펜서 모터 'D'



int button1 = 14;   //모터 제어 스위치

int button2 = 15;

int button3 = 16;

int button4 = 17;





void setup()

{

  Serial.begin(9600);

  pinMode(D_1A, OUTPUT);

  pinMode(D_2A, OUTPUT);

  pinMode(C_1A, OUTPUT);

  pinMode(C_2A, OUTPUT);

  pinMode(B_1A, OUTPUT);

  pinMode(B_2A, OUTPUT);

  pinMode(A_1A, OUTPUT);

  pinMode(A_2A, OUTPUT);

  pinMode(button1, INPUT); //하양

  pinMode(button2, INPUT); //빨강

  pinMode(button3, INPUT); //파랑

  pinMode(button4, INPUT); //초록

  pinMode(2, INPUT);



}

void loop()

{



  if (digitalRead(button1) == LOW ) //만약 버튼의 값이 HIGH라면

  {

    digitalWrite(A_1A, HIGH);  //정방향회전으로 액체 추출

    digitalWrite(A_2A, LOW);

  }

  else { //그밖에

    digitalWrite(A_1A, LOW);  //멈춤

    digitalWrite(A_2A, LOW);

  }



  if (digitalRead(button2) == LOW ) //만약 버튼의 값이 HIGH라면

  {

    digitalWrite(B_1A, HIGH);  //정방향회전으로 혼합액체 배출

    digitalWrite(B_2A, LOW);

  }

  else { //그밖에

    digitalWrite(B_1A, LOW);  //멈춤

    digitalWrite(B_2A, LOW);

  }



  if (digitalRead(button3) == LOW ) //만약 버튼의 값이 HIGH라면

  {

    digitalWrite(C_1A, HIGH);  //정방향회전으로 혼합액체 배출

    digitalWrite(C_2A, LOW);

    delay(3000);

  }

  else { //그밖에

    digitalWrite(C_1A, LOW);  //멈춤

    digitalWrite(C_2A, LOW);

  }

  if (digitalRead(button4) == LOW) //만약 버튼의 값이 HIGH라면

  {



    digitalWrite(D_1A, HIGH);

    digitalWrite(D_2A, LOW);

  }

  else {

    digitalWrite(D_1A, LOW);  //멈춤

    digitalWrite(D_2A, LOW);

  }

}
