

// -------- clickButton.h --------
#include <Arduino.h>

#define CLICKBTN_PULLUP HIGH

class ClickButton
{
  public:
    ClickButton(int buttonPin);
    ClickButton(int buttonPin, bool active);
    ClickButton(int buttonPin, bool active, bool internalPullup);
    void Update();
    int clicks;                   // button click counts to return
    bool depressed;            // the currently debounced button (press) state (presumably it is not sad :)
    long debounceTime;
    long multiclickTime;
    long longClickTime;
    bool SingleClick();
    bool DoubleClick();
    bool TripleClick();
    bool SingleLongClick();
    bool DoubleLongClick();
    bool TripleLongClick();
    bool buttoncheck(uint8_t num);
  private:
    int _pin;                 // Arduino pin connected to the button
    bool _activeHigh;          // Type of button: Active-low = 0 or active-high = 1
    bool _btnState;            // Current appearant button state
    bool _lastState;           // previous button reading
    int _clickCount;              // Number of button clicks within multiclickTime milliseconds
    long _lastBounceTime;         // the last time the button input pin was toggled, due to noise or a press
    int function = 0;
};

// -------- end clickButton.h --------
