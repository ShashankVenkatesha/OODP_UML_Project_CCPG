/**
 * Project Untitled
 */


#ifndef _CAPTURE_H
#define _CAPTURE_H

class Capture {
public: 
    float amount;
    int card_no;
    
void Authorize();
private: 
    string name;
    int exp_mon;
    int exp_yr;
};

#endif //_CAPTURE_H