const int leftForward = 7;
const int leftBackward = 6;
const int RightForward = 3;
const int RightBackward = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(leftForward , LOW);
  digitalWrite(leftBackward , HIGH);
  digitalWrite(RightForward , HIGH);
  digitalWrite(RightBackward , LOW);
}
