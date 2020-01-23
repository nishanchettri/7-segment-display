#include <SegmentDisplay.h>
SegmentDisplay segmentDisplay(2, 3, 4, 5, 6, 7, 8, 9);
void setup() {
  // put your setup code here, to run once:


}

void loop() {
  int val=analogRead(A0);
  val=map(val,0,1023,0,10);
  // put your main code here, to run repeatedly:
segmentDisplay.displayHex(val, false);
}
