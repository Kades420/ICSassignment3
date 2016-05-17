#ifndef FOUNTAINPEN_H
#define FOUNTAINPEN_H
#include "pen.h"
#include <string>
class FountainPen : public Pen {
public:
/////////////////////////////////////////////////////////////
// //!TODO: what would happen if you used this version of //
// //Constructor in the comment box below
//
// /////////////////////////////////////////////////////// //
// // FountainPen(std::string pen_name = "FountainPen") // //
// //: Pen(pen_name) {}
// //
// /////////////////////////////////////////////////////// //
/////////////////////////////////////////////////////////////
FountainPen(std::string pen_name)
: Pen(pen_name) {}
FountainPen() : Pen(std::string("FountainPen")){}
virtual std::string drawLine();
virtual std::string drawCircle();
};
#endif