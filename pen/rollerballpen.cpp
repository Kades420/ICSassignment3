#include "rollerballpen.h"
#include <string>
std::string RollerBallPen::drawLine() {
return getName().append(" draws a line.");
}
std::string RollerBallPen::drawCircle(){
return getName().append(" draws a circle.");
}