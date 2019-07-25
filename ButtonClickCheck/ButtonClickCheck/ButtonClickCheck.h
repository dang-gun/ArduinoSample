#include "arduino.h"

class ButtonClickCheck
{ 
public:
	//버튼이 눌리지 않았을때 판단값
	int ButtonUpLevel;
private:
	//버튼 값이 바뀌였는지 여부
	bool bBtnPush1;
	bool bBtnPush2;
	
public:
	//버튼 판단을 위한 라이브러리
	//nButtonUpLevel : (int)버튼이 눌리지 않았을때 판단값. LOW or HIGH
	ButtonClickCheck(int nButtonUpLevel)
	{
		ButtonUpLevel = nButtonUpLevel;
		
		bBtnPush1 = false;
		bBtnPush2 = false;
	}
	~ButtonClickCheck()
	{
	}


public:
  int ClickCheck(int nDigitalRead);
};
